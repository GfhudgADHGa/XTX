import struct,sys
d=open(sys.argv[1],'rb').read()
u16=lambda o:struct.unpack_from('<H',d,o)[0]
u32=lambda o:struct.unpack_from('<I',d,o)[0]
atom=u16(0x48)
cmd=u16(atom+0x1e); data=u16(atom+0x20)
print(f"master cmd @ {cmd:#x}, data @ {data:#x}")
dn="utilitypipeline multimedia_capability_info multimedia_config_info vesa_timing firmwareinfo palette_data lcd_info dig1_transmitter_info smu_info supported_devices_info gpio_i2c_info vram_usagebyfirmware gpio_pin_lut vesa_to_internal_mode gfx_info powerplayinfo gpu_virtualization_info save_restore_info ppll_ss_info oem_info xtmds_info mclk_ss_info object_info indirect_io_access mc_init_parameter asic_vddc_info asic_internal_ss_info tv_video_mode vram_info memory_training_info integrated_system_info asic_profiling_info voltageobject_info power_source_info service_info".split()
sz=u16(data); print("data hdr size",sz,"rev",d[data+2],d[data+3])
n=(sz-4)//2
print("\n== Master DATA table ==")
for i in range(n):
    o=u16(data+4+2*i)
    if o:
        ts=u16(o); print(f"[{i:2}] {dn[i] if i<len(dn) else '?':26} @ {o:#06x} size={ts:#x} rev={d[o+2]}.{d[o+3]}")
print("\n== Master COMMAND table ==")
sz=u16(cmd); n=(sz-4)//2
cnt=0
for i in range(n):
    o=u16(cmd+4+2*i)
    if o:
        cnt+=1
        print(f"[{i:#04x}] @ {o:#06x} size={u16(o):#06x} rev={d[o+2]}.{d[o+3]} ws={d[o+4]} ps={d[o+5]&0x7f}")
print(cnt,"populated of",n)
