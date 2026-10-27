#!/usr/bin/env python3
"""Name the MES scheduler API handlers by matching the opcode switch against the kernel's mes_v11_api_def.h.

usage: mesnames.py <raw.c> > annot_<core>.tsv
"""
import re, sys, collections
API = {0: 'set_hw_rsrc', 1: 'set_scheduling_config', 2: 'add_queue', 3: 'remove_queue', 4: 'perform_yield',
       5: 'set_gang_priority_level', 6: 'suspend', 7: 'resume', 8: 'reset', 9: 'set_log_buffer',
       10: 'change_gang_priority', 11: 'query_scheduler_status', 12: 'program_gds', 13: 'set_debug_vmid',
       14: 'misc', 15: 'update_root_page_table', 16: 'amd_log', 17: 'api_17', 18: 'api_18', 19: 'set_hw_rsrc_1'}
MISC = ['write_reg', 'inv_gart', 'query_status', 'read_reg', 'wait_reg_mem', 'set_shader_debugger',
        'notify_work_on_unmapped_queue', 'notify_to_unmap_processes', 'change_config', 'launch_cleaner_shader', 'setup_mes_dbgext']
txt = open(sys.argv[1]).read()
chunks = re.split(r'(?m)^(?=/\* ---- )', txt)
disp = None
for c in chunks:
    if re.search(r'switch\(.*?>> 4 & 0xff\) \{', c, re.S) and 'case 0xe:' in c:
        disp = c; break
if not disp: sys.stderr.write('no scheduler API dispatcher (KIQ firmware?)\n'); sys.exit(0)
m = re.match(r'/\* ---- (\S+) @ (\S+)', disp)
daddr = m.group(2)
calls = collections.Counter(re.findall(r'(FUN_[0-9a-f]+)\(', disp))
helpers = {f for f, n in calls.items() if n >= 8}
fence = set(re.findall(r'(FUN_[0-9a-f]+)\([^;]*?\+ 8\)[^;]*?\+ 0x10\)', disp)) | set(re.findall(r'(FUN_[0-9a-f]+)\(\*\(undefined8 \*\)\([^;]*?\+ 8\),\*\(undefined8 \*\)', disp))
helpers |= fence
# split top-level cases (4-space indent) of the outer switch
body = disp
ind = re.search(r'(?m)^( *)case 0:\n', body).group(1)
cases = re.split(r'(?m)^' + ind + r'case (0x[0-9a-f]+|\d+):\n', body)
out = []
def first_handler(block):
    for f in re.findall(r'(FUN_[0-9a-f]+)\(', block):
        if f not in helpers: return f
def addr(f): return '0x' + f[4:].lstrip('0')
trace = max(helpers, key=lambda f: calls[f]) if helpers else None
for i in range(1, len(cases) - 1, 2):
    op = int(cases[i], 0); blk = cases[i + 1]
    if op == 14:
        mm = re.search(r'(?m)^( *)case 0:\n', blk)
        if not mm: continue
        ind2 = mm.group(1)
        sub = re.split(r'(?m)^' + ind2 + r'case (\d+):\n', blk)
        for j in range(1, len(sub) - 1, 2):
            s = int(sub[j]); h = first_handler(sub[j + 1])
            if h and s < len(MISC): out.append(('F', addr(h), f'mes_api_misc_{MISC[s]}', f'MES scheduler API: MISC / MESAPI_MISC__{MISC[s].upper()}'))
        continue
    h = first_handler(blk)
    if h and op in API: out.append(('F', addr(h), f'mes_api_{API[op]}', f'MES scheduler API opcode {op}: MES_SCH_API_{API[op].upper()}'))
seen = collections.Counter(r[1] for r in out)
out = [r for r in out if seen[r[1]] == 1]
for f in fence: out.append(('F', addr(f), 'mes_signal_api_fence', 'Writes api_status.api_completion_fence_value to api_completion_fence_addr (frame offsets +0x10 / +8) and optionally raises an interrupt.'))
print('\t'.join(['F', '0x' + daddr.split(':')[-1].lstrip('0'), 'mes_process_api_packet',
      'Dispatches one 0x100-byte scheduler API frame: hdr low nibble must be 1 (MES_API_TYPE_SCHEDULER), opcode = hdr>>4&0xff (MES_SCH_API_*).\\nThe frame ring has 32 slots at ctx+8+slot*0x100; rptr/wptr live at ctx+0x31a8 / ctx+0x31a4.']))
if trace: print('\t'.join(['F', addr(trace), 'mes_trace_api', 'Records (opcode, phase 0=begin/1=end, status) of an API call in the MES trace log.']))
for r in out: print('\t'.join(r))
