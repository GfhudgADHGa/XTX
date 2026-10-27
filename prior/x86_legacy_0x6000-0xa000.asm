
/run/media/user/S/Folder/vbios/vbios.rom:     file format binary


Disassembly of section .data:

00006000 <.data+0x6000>:
    6000:	1e                   	push   %ds
    6001:	06                   	push   %es
    6002:	66 50                	push   %eax
    6004:	66 51                	push   %ecx
    6006:	66 52                	push   %edx
    6008:	66 53                	push   %ebx
    600a:	66 55                	push   %ebp
    600c:	66 56                	push   %esi
    600e:	66 57                	push   %edi
    6010:	0e                   	push   %cs
    6011:	1f                   	pop    %ds
    6012:	a3 14 00             	mov    %ax,0x14
    6015:	8c 0e 08 00          	mov    %cs,0x8
    6019:	b2 20                	mov    $0x20,%dl
    601b:	e8 8c 1d             	call   0x7daa
    601e:	0b c0                	or     %ax,%ax
    6020:	75 14                	jne    0x6036
    6022:	a2 02 00             	mov    %al,0x2
    6025:	66 5f                	pop    %edi
    6027:	66 5e                	pop    %esi
    6029:	66 5d                	pop    %ebp
    602b:	66 5b                	pop    %ebx
    602d:	66 5a                	pop    %edx
    602f:	66 59                	pop    %ecx
    6031:	66 58                	pop    %eax
    6033:	07                   	pop    %es
    6034:	1f                   	pop    %ds
    6035:	cb                   	lret
    6036:	e8 a6 1e             	call   0x7edf
    6039:	e8 78 1c             	call   0x7cb4
    603c:	32 d2                	xor    %dl,%dl
    603e:	e8 63 1c             	call   0x7ca4
    6041:	89 55 16             	mov    %dx,0x16(%di)
    6044:	e8 e9 0c             	call   0x6d30
    6047:	e8 ac 0c             	call   0x6cf6
    604a:	e8 6d 1b             	call   0x7bba
    604d:	75 19                	jne    0x6068
    604f:	e8 87 0e             	call   0x6ed9
    6052:	e8 ad 02             	call   0x6302
    6055:	e8 39 19             	call   0x7991
    6058:	0b c0                	or     %ax,%ax
    605a:	74 0c                	je     0x6068
    605c:	e8 39 00             	call   0x6098
    605f:	e8 02 45             	call   0xa564
    6062:	e8 a3 0c             	call   0x6d08
    6065:	e8 57 45             	call   0xa5bf
    6068:	e8 a9 00             	call   0x6114
    606b:	b4 80                	mov    $0x80,%ah
    606d:	e8 6e 1c             	call   0x7cde
    6070:	8a c7                	mov    %bh,%al
    6072:	66 c1 e0 10          	shl    $0x10,%eax
    6076:	8a e3                	mov    %bl,%ah
    6078:	b0 20                	mov    $0x20,%al
    607a:	66 a3 16 dd          	mov    %eax,0xdd16
    607e:	e8 d9 02             	call   0x635a
    6081:	e8 b6 0c             	call   0x6d3a
    6084:	e8 9b 1e             	call   0x7f22
    6087:	66 5f                	pop    %edi
    6089:	66 5e                	pop    %esi
    608b:	66 5d                	pop    %ebp
    608d:	66 5b                	pop    %ebx
    608f:	66 5a                	pop    %edx
    6091:	66 59                	pop    %ecx
    6093:	66 58                	pop    %eax
    6095:	07                   	pop    %es
    6096:	1f                   	pop    %ds
    6097:	cb                   	lret
    6098:	2e 8b 1e 08 00       	mov    %cs:0x8,%bx
    609d:	83 3e 10 61 00       	cmpw   $0x0,0x6110
    60a2:	75 04                	jne    0x60a8
    60a4:	89 1e 0e 61          	mov    %bx,0x610e
    60a8:	1e                   	push   %ds
    60a9:	2e 8e 1e 06 61       	mov    %cs:0x6106,%ds
    60ae:	9c                   	pushf
    60af:	fa                   	cli
    60b0:	66 c7 06 08 01 65 f0 	movl   $0xf000f065,0x108
    60b7:	00 f0 
    60b9:	c7 06 40 00 34 61    	movw   $0x6134,0x40
    60bf:	89 1e 42 00          	mov    %bx,0x42
    60c3:	c7 06 b4 01 34 61    	movw   $0x6134,0x1b4
    60c9:	89 1e b6 01          	mov    %bx,0x1b6
    60cd:	c7 06 7c 00 f8 aa    	movw   $0xaaf8,0x7c
    60d3:	89 1e 7e 00          	mov    %bx,0x7e
    60d7:	c7 06 0c 01 0b af    	movw   $0xaf0b,0x10c
    60dd:	89 1e 0e 01          	mov    %bx,0x10e
    60e1:	c7 06 a8 04 2a a5    	movw   $0xa52a,0x4a8
    60e7:	89 1e aa 04          	mov    %bx,0x4aa
    60eb:	2e 8e 1e 0e 61       	mov    %cs:0x610e,%ds
    60f0:	8b c3                	mov    %bx,%ax
    60f2:	a3 2c a5             	mov    %ax,0xa52c
    60f5:	a3 3c a5             	mov    %ax,0xa53c
    60f8:	a3 4e a5             	mov    %ax,0xa54e
    60fb:	9d                   	popf
    60fc:	1f                   	pop    %ds
    60fd:	c3                   	ret
    60fe:	50                   	push   %ax
    60ff:	4d                   	dec    %bp
    6100:	49                   	dec    %cx
    6101:	44                   	inc    %sp
    6102:	34 61                	xor    $0x61,%al
    6104:	1c 95                	sbb    $0x95,%al
    6106:	00 00                	add    %al,(%bx,%si)
    6108:	00 a0 00 b0          	add    %ah,-0x5000(%bx,%si)
    610c:	00 b8 00 c0          	add    %bh,-0x4000(%bx,%si)
    6110:	00 00                	add    %al,(%bx,%si)
    6112:	00 00                	add    %al,(%bx,%si)
    6114:	bb 00 00             	mov    $0x0,%bx
    6117:	e8 09 0c             	call   0x6d23
    611a:	66 c1 e8 10          	shr    $0x10,%eax
    611e:	57                   	push   %di
    611f:	bf 18 00             	mov    $0x18,%di
    6122:	89 45 06             	mov    %ax,0x6(%di)
    6125:	5f                   	pop    %di
    6126:	bb 0b 00             	mov    $0xb,%bx
    6129:	e8 f7 0b             	call   0x6d23
    612c:	e8 75 1b             	call   0x7ca4
    612f:	66 89 45 18          	mov    %eax,0x18(%di)
    6133:	c3                   	ret
    6134:	e8 c6 1d             	call   0x7efd
    6137:	80 fc a0             	cmp    $0xa0,%ah
    613a:	75 05                	jne    0x6141
    613c:	e8 3d 00             	call   0x617c
    613f:	eb 11                	jmp    0x6152
    6141:	80 fc 4f             	cmp    $0x4f,%ah
    6144:	75 05                	jne    0x614b
    6146:	e8 f9 32             	call   0x9442
    6149:	eb 07                	jmp    0x6152
    614b:	e8 8e 38             	call   0x99dc
    614e:	eb 02                	jmp    0x6152
    6150:	b4 01                	mov    $0x1,%ah
    6152:	e8 cd 1d             	call   0x7f22
    6155:	cf                   	iret
    6156:	e8 a4 1d             	call   0x7efd
    6159:	e8 20 00             	call   0x617c
    615c:	eb 02                	jmp    0x6160
    615e:	b4 01                	mov    $0x1,%ah
    6160:	e8 bf 1d             	call   0x7f22
    6163:	cb                   	lret
    6164:	e8 96 1d             	call   0x7efd
    6167:	80 fc 4f             	cmp    $0x4f,%ah
    616a:	75 05                	jne    0x6171
    616c:	e8 d3 32             	call   0x9442
    616f:	eb 07                	jmp    0x6178
    6171:	e8 68 38             	call   0x99dc
    6174:	eb 02                	jmp    0x6178
    6176:	b4 01                	mov    $0x1,%ah
    6178:	e8 a7 1d             	call   0x7f22
    617b:	cb                   	lret
    617c:	1e                   	push   %ds
    617d:	06                   	push   %es
    617e:	66 50                	push   %eax
    6180:	66 51                	push   %ecx
    6182:	66 52                	push   %edx
    6184:	66 53                	push   %ebx
    6186:	66 55                	push   %ebp
    6188:	66 56                	push   %esi
    618a:	66 57                	push   %edi
    618c:	0e                   	push   %cs
    618d:	1f                   	pop    %ds
    618e:	3c 04                	cmp    $0x4,%al
    6190:	75 25                	jne    0x61b7
    6192:	57                   	push   %di
    6193:	e8 0e 1b             	call   0x7ca4
    6196:	8b 45 1a             	mov    0x1a(%di),%ax
    6199:	66 c1 e0 10          	shl    $0x10,%eax
    619d:	8b 45 18             	mov    0x18(%di),%ax
    61a0:	5f                   	pop    %di
    61a1:	b7 06                	mov    $0x6,%bh
    61a3:	b3 02                	mov    $0x2,%bl
    61a5:	8b ec                	mov    %sp,%bp
    61a7:	89 5e 0c             	mov    %bx,0xc(%bp)
    61aa:	89 46 04             	mov    %ax,0x4(%bp)
    61ad:	66 c1 e8 10          	shr    $0x10,%eax
    61b1:	89 46 00             	mov    %ax,0x0(%bp)
    61b4:	e9 29 01             	jmp    0x62e0
    61b7:	3c 05                	cmp    $0x5,%al
    61b9:	75 18                	jne    0x61d3
    61bb:	e8 20 1b             	call   0x7cde
    61be:	e8 f3 1a             	call   0x7cb4
    61c1:	2e a1 08 00          	mov    %cs:0x8,%ax
    61c5:	8b ec                	mov    %sp,%bp
    61c7:	89 56 10             	mov    %dx,0x10(%bp)
    61ca:	89 46 00             	mov    %ax,0x0(%bp)
    61cd:	89 5e 04             	mov    %bx,0x4(%bp)
    61d0:	e9 0d 01             	jmp    0x62e0
    61d3:	3c 06                	cmp    $0x6,%al
    61d5:	75 30                	jne    0x6207
    61d7:	e8 31 0b             	call   0x6d0b
    61da:	66 d1 e0             	shl    $1,%eax
    61dd:	8b ec                	mov    %sp,%bp
    61df:	89 46 14             	mov    %ax,0x14(%bp)
    61e2:	bb 02 00             	mov    $0x2,%bx
    61e5:	e8 3b 0b             	call   0x6d23
    61e8:	88 46 18             	mov    %al,0x18(%bp)
    61eb:	e8 25 0b             	call   0x6d13
    61ee:	66 89 46 0c          	mov    %eax,0xc(%bp)
    61f2:	bb 09 00             	mov    $0x9,%bx
    61f5:	e8 2b 0b             	call   0x6d23
    61f8:	33 c0                	xor    %ax,%ax
    61fa:	66 89 46 00          	mov    %eax,0x0(%bp)
    61fe:	e8 a9 1a             	call   0x7caa
    6201:	89 56 10             	mov    %dx,0x10(%bp)
    6204:	e9 d9 00             	jmp    0x62e0
    6207:	3c 0b                	cmp    $0xb,%al
    6209:	75 24                	jne    0x622f
    620b:	0a db                	or     %bl,%bl
    620d:	75 11                	jne    0x6220
    620f:	b9 80 00             	mov    $0x80,%cx
    6212:	bb 02 00             	mov    $0x2,%bx
    6215:	8b ec                	mov    %sp,%bp
    6217:	89 5e 0c             	mov    %bx,0xc(%bp)
    621a:	89 4e 14             	mov    %cx,0x14(%bp)
    621d:	e9 c0 00             	jmp    0x62e0
    6220:	8a c7                	mov    %bh,%al
    6222:	e8 d3 00             	call   0x62f8
    6225:	e8 64 01             	call   0x638c
    6228:	0f 84 ac 00          	je     0x62d8
    622c:	e9 b1 00             	jmp    0x62e0
    622f:	3c 17                	cmp    $0x17,%al
    6231:	75 1d                	jne    0x6250
    6233:	e8 51 0e             	call   0x7087
    6236:	74 06                	je     0x623e
    6238:	e8 ac 09             	call   0x6be7
    623b:	e8 47 13             	call   0x7585
    623e:	e8 3c 07             	call   0x697d
    6241:	e8 a1 0a             	call   0x6ce5
    6244:	33 c9                	xor    %cx,%cx
    6246:	8b c8                	mov    %ax,%cx
    6248:	8b ec                	mov    %sp,%bp
    624a:	89 4e 14             	mov    %cx,0x14(%bp)
    624d:	e9 90 00             	jmp    0x62e0
    6250:	3c 18                	cmp    $0x18,%al
    6252:	75 45                	jne    0x6299
    6254:	0a ff                	or     %bh,%bh
    6256:	75 10                	jne    0x6268
    6258:	e8 d8 0d             	call   0x7033
    625b:	8b ec                	mov    %sp,%bp
    625d:	89 46 0c             	mov    %ax,0xc(%bp)
    6260:	e8 78 07             	call   0x69db
    6263:	89 4e 10             	mov    %cx,0x10(%bp)
    6266:	eb 78                	jmp    0x62e0
    6268:	e8 1c 0e             	call   0x7087
    626b:	75 6b                	jne    0x62d8
    626d:	bb 00 4c             	mov    $0x4c00,%bx
    6270:	e8 28 1c             	call   0x7e9b
    6273:	66 0b c0             	or     %eax,%eax
    6276:	74 60                	je     0x62d8
    6278:	23 c9                	and    %cx,%cx
    627a:	74 5c                	je     0x62d8
    627c:	e8 f0 0d             	call   0x706f
    627f:	be 00 4c             	mov    $0x4c00,%si
    6282:	e8 cb 0a             	call   0x6d50
    6285:	74 51                	je     0x62d8
    6287:	be 00 4c             	mov    $0x4c00,%si
    628a:	b0 40                	mov    $0x40,%al
    628c:	e8 1a 0b             	call   0x6da9
    628f:	e8 a1 0d             	call   0x7033
    6292:	8b ec                	mov    %sp,%bp
    6294:	89 46 0c             	mov    %ax,0xc(%bp)
    6297:	eb 47                	jmp    0x62e0
    6299:	3c 82                	cmp    $0x82,%al
    629b:	75 1a                	jne    0x62b7
    629d:	80 fb 05             	cmp    $0x5,%bl
    62a0:	75 15                	jne    0x62b7
    62a2:	0a ff                	or     %bh,%bh
    62a4:	75 0a                	jne    0x62b0
    62a6:	e8 e6 0c             	call   0x6f8f
    62a9:	8b ec                	mov    %sp,%bp
    62ab:	89 46 14             	mov    %ax,0x14(%bp)
    62ae:	eb 30                	jmp    0x62e0
    62b0:	e8 c3 0c             	call   0x6f76
    62b3:	74 1b                	je     0x62d0
    62b5:	eb 29                	jmp    0x62e0
    62b7:	3c 8e                	cmp    $0x8e,%al
    62b9:	75 15                	jne    0x62d0
    62bb:	80 ff 01             	cmp    $0x1,%bh
    62be:	74 08                	je     0x62c8
    62c0:	80 ff 02             	cmp    $0x2,%bh
    62c3:	75 0b                	jne    0x62d0
    62c5:	80 c1 02             	add    $0x2,%cl
    62c8:	80 c1 02             	add    $0x2,%cl
    62cb:	e8 0d 0d             	call   0x6fdb
    62ce:	eb 10                	jmp    0x62e0
    62d0:	8b ec                	mov    %sp,%bp
    62d2:	c6 46 19 02          	movb   $0x2,0x19(%bp)
    62d6:	eb 0f                	jmp    0x62e7
    62d8:	8b ec                	mov    %sp,%bp
    62da:	c6 46 19 01          	movb   $0x1,0x19(%bp)
    62de:	eb 07                	jmp    0x62e7
    62e0:	32 e4                	xor    %ah,%ah
    62e2:	8b ec                	mov    %sp,%bp
    62e4:	88 66 19             	mov    %ah,0x19(%bp)
    62e7:	66 5f                	pop    %edi
    62e9:	66 5e                	pop    %esi
    62eb:	66 5d                	pop    %ebp
    62ed:	66 5b                	pop    %ebx
    62ef:	66 5a                	pop    %edx
    62f1:	66 59                	pop    %ecx
    62f3:	66 58                	pop    %eax
    62f5:	07                   	pop    %es
    62f6:	1f                   	pop    %ds
    62f7:	c3                   	ret
    62f8:	51                   	push   %cx
    62f9:	8a c8                	mov    %al,%cl
    62fb:	b8 01 00             	mov    $0x1,%ax
    62fe:	d3 e0                	shl    %cl,%ax
    6300:	59                   	pop    %cx
    6301:	c3                   	ret
    6302:	e8 43 1c             	call   0x7f48
    6305:	c3                   	ret
    6306:	0c 01                	or     $0x1,%al
    6308:	c3                   	ret
    6309:	66 50                	push   %eax
    630b:	66 53                	push   %ebx
    630d:	66 33 c0             	xor    %eax,%eax
    6310:	bb 08 00             	mov    $0x8,%bx
    6313:	e8 a6 14             	call   0x77bc
    6316:	bb 08 00             	mov    $0x8,%bx
    6319:	e8 97 14             	call   0x77b3
    631c:	66 0b c0             	or     %eax,%eax
    631f:	74 f5                	je     0x6316
    6321:	66 5b                	pop    %ebx
    6323:	66 58                	pop    %eax
    6325:	c3                   	ret
    6326:	0b 00                	or     (%bx,%si),%ax
	...
    6334:	00 00                	add    %al,(%bx,%si)
    6336:	50                   	push   %ax
    6337:	51                   	push   %cx
    6338:	b0 b6                	mov    $0xb6,%al
    633a:	e6 43                	out    %al,$0x43
    633c:	b0 33                	mov    $0x33,%al
    633e:	e6 42                	out    %al,$0x42
    6340:	b0 05                	mov    $0x5,%al
    6342:	e6 42                	out    %al,$0x42
    6344:	e4 61                	in     $0x61,%al
    6346:	8a e0                	mov    %al,%ah
    6348:	0c 03                	or     $0x3,%al
    634a:	e6 61                	out    %al,$0x61
    634c:	8a c4                	mov    %ah,%al
    634e:	b9 c8 00             	mov    $0xc8,%cx
    6351:	e8 ef 17             	call   0x7b43
    6354:	e6 61                	out    %al,$0x61
    6356:	59                   	pop    %cx
    6357:	58                   	pop    %ax
    6358:	c3                   	ret
    6359:	00 1e 56 0e          	add    %bl,0xe56
    635d:	1f                   	pop    %ds
    635e:	80 3e 02 00 80       	cmpb   $0x80,0x2
    6363:	76 05                	jbe    0x636a
    6365:	c6 06 02 00 80       	movb   $0x80,0x2
    636a:	8a 0e 02 00          	mov    0x2,%cl
    636e:	c1 e1 09             	shl    $0x9,%cx
    6371:	fc                   	cld
    6372:	33 c0                	xor    %ax,%ax
    6374:	57                   	push   %di
    6375:	bf 21 00             	mov    $0x21,%di
    6378:	88 05                	mov    %al,(%di)
    637a:	33 f6                	xor    %si,%si
    637c:	ac                   	lods   %ds:(%si),%al
    637d:	02 e0                	add    %al,%ah
    637f:	e2 fb                	loop   0x637c
    6381:	f6 d4                	not    %ah
    6383:	fe c4                	inc    %ah
    6385:	88 25                	mov    %ah,(%di)
    6387:	5f                   	pop    %di
    6388:	5e                   	pop    %si
    6389:	1f                   	pop    %ds
    638a:	c3                   	ret
    638b:	00 57 0b             	add    %dl,0xb(%bx)
    638e:	c0 75 0f e8          	shlb   $0xe8,0xf(%di)
    6392:	1b 08                	sbb    (%bx,%si),%cx
    6394:	74 25                	je     0x63bb
    6396:	e8 24 00             	call   0x63bd
    6399:	f6 c3 04             	test   $0x4,%bl
    639c:	74 f3                	je     0x6391
    639e:	eb 11                	jmp    0x63b1
    63a0:	8b c8                	mov    %ax,%cx
    63a2:	e8 ec 15             	call   0x7991
    63a5:	23 c1                	and    %cx,%ax
    63a7:	74 12                	je     0x63bb
    63a9:	e8 11 00             	call   0x63bd
    63ac:	f6 c3 04             	test   $0x4,%bl
    63af:	74 0a                	je     0x63bb
    63b1:	5f                   	pop    %di
    63b2:	8d 5c 28             	lea    0x28(%si),%bx
    63b5:	e8 8e 05             	call   0x6946
    63b8:	0b f6                	or     %si,%si
    63ba:	c3                   	ret
    63bb:	5f                   	pop    %di
    63bc:	c3                   	ret
    63bd:	50                   	push   %ax
    63be:	e8 d0 07             	call   0x6b91
    63c1:	e8 3e 15             	call   0x7902
    63c4:	0a c9                	or     %cl,%cl
    63c6:	74 11                	je     0x63d9
    63c8:	e8 6a 12             	call   0x7635
    63cb:	3c 00                	cmp    $0x0,%al
    63cd:	75 1f                	jne    0x63ee
    63cf:	e8 cb 01             	call   0x659d
    63d2:	8a eb                	mov    %bl,%ch
    63d4:	f6 c5 04             	test   $0x4,%ch
    63d7:	74 15                	je     0x63ee
    63d9:	8d 9c a6 00          	lea    0xa6(%si),%bx
    63dd:	e8 bb 1a             	call   0x7e9b
    63e0:	0a c0                	or     %al,%al
    63e2:	74 0a                	je     0x63ee
    63e4:	e8 85 04             	call   0x686c
    63e7:	74 05                	je     0x63ee
    63e9:	33 c9                	xor    %cx,%cx
    63eb:	e8 4e 05             	call   0x693c
    63ee:	e8 ac 01             	call   0x659d
    63f1:	58                   	pop    %ax
    63f2:	c3                   	ret
    63f3:	51                   	push   %cx
    63f4:	b9 5f 00             	mov    $0x5f,%cx
    63f7:	e8 f8 16             	call   0x7af2
    63fa:	59                   	pop    %cx
    63fb:	c3                   	ret
    63fc:	51                   	push   %cx
    63fd:	e8 1a 00             	call   0x641a
    6400:	75 14                	jne    0x6416
    6402:	e8 69 01             	call   0x656e
    6405:	3c 01                	cmp    $0x1,%al
    6407:	75 0d                	jne    0x6416
    6409:	b9 20 00             	mov    $0x20,%cx
    640c:	e8 27 00             	call   0x6436
    640f:	75 05                	jne    0x6416
    6411:	80 c9 01             	or     $0x1,%cl
    6414:	eb 02                	jmp    0x6418
    6416:	33 c9                	xor    %cx,%cx
    6418:	59                   	pop    %cx
    6419:	c3                   	ret
    641a:	53                   	push   %bx
    641b:	e8 7d 1a             	call   0x7e9b
    641e:	66 3d 00 ff ff ff    	cmp    $0xffffff00,%eax
    6424:	75 0e                	jne    0x6434
    6426:	83 c3 04             	add    $0x4,%bx
    6429:	e8 6f 1a             	call   0x7e9b
    642c:	66 3d ff ff ff 00    	cmp    $0xffffff,%eax
    6432:	75 00                	jne    0x6434
    6434:	5b                   	pop    %bx
    6435:	c3                   	ret
    6436:	50                   	push   %ax
    6437:	52                   	push   %dx
    6438:	32 d2                	xor    %dl,%dl
    643a:	e8 5e 1a             	call   0x7e9b
    643d:	02 d0                	add    %al,%dl
    643f:	02 d4                	add    %ah,%dl
    6441:	66 c1 e8 10          	shr    $0x10,%eax
    6445:	02 d0                	add    %al,%dl
    6447:	02 d4                	add    %ah,%dl
    6449:	83 c3 04             	add    $0x4,%bx
    644c:	e2 ec                	loop   0x643a
    644e:	0a d2                	or     %dl,%dl
    6450:	5a                   	pop    %dx
    6451:	58                   	pop    %ax
    6452:	c3                   	ret
    6453:	e8 3b 07             	call   0x6b91
    6456:	8d 9c a4 01          	lea    0x1a4(%si),%bx
    645a:	e8 e9 00             	call   0x6546
    645d:	a9 dd 0f             	test   $0xfdd,%ax
    6460:	74 52                	je     0x64b4
    6462:	e8 38 01             	call   0x659d
    6465:	f6 c3 08             	test   $0x8,%bl
    6468:	74 0c                	je     0x6476
    646a:	8d 5c 28             	lea    0x28(%si),%bx
    646d:	e8 dd 00             	call   0x654d
    6470:	75 04                	jne    0x6476
    6472:	e8 62 00             	call   0x64d7
    6475:	c3                   	ret
    6476:	b5 02                	mov    $0x2,%ch
    6478:	e8 fc 00             	call   0x6577
    647b:	e8 1f 01             	call   0x659d
    647e:	f6 c3 04             	test   $0x4,%bl
    6481:	74 21                	je     0x64a4
    6483:	8d 5c 28             	lea    0x28(%si),%bx
    6486:	e8 22 01             	call   0x65ab
    6489:	e8 6a 03             	call   0x67f6
    648c:	74 05                	je     0x6493
    648e:	b5 03                	mov    $0x3,%ch
    6490:	e8 e4 00             	call   0x6577
    6493:	e8 3e 04             	call   0x68d4
    6496:	e8 fa 00             	call   0x6593
    6499:	80 fd 00             	cmp    $0x0,%ch
    649c:	75 38                	jne    0x64d6
    649e:	b5 02                	mov    $0x2,%ch
    64a0:	e8 e6 00             	call   0x6589
    64a3:	c3                   	ret
    64a4:	8d 9c c0 01          	lea    0x1c0(%si),%bx
    64a8:	b8 00 55             	mov    $0x5500,%ax
    64ab:	e8 f0 0d             	call   0x729e
    64ae:	b5 02                	mov    $0x2,%ch
    64b0:	e8 d6 00             	call   0x6589
    64b3:	c3                   	ret
    64b4:	a9 02 00             	test   $0x2,%ax
    64b7:	74 1d                	je     0x64d6
    64b9:	b5 04                	mov    $0x4,%ch
    64bb:	e8 b9 00             	call   0x6577
    64be:	e8 dc 00             	call   0x659d
    64c1:	8d 5c 28             	lea    0x28(%si),%bx
    64c4:	e8 e4 00             	call   0x65ab
    64c7:	e8 64 17             	call   0x7c2e
    64ca:	e8 bc 00             	call   0x6589
    64cd:	8d 5c 28             	lea    0x28(%si),%bx
    64d0:	e8 d8 00             	call   0x65ab
    64d3:	e8 fe 03             	call   0x68d4
    64d6:	c3                   	ret
    64d7:	b5 01                	mov    $0x1,%ch
    64d9:	e8 9b 00             	call   0x6577
    64dc:	b5 02                	mov    $0x2,%ch
    64de:	e8 a8 00             	call   0x6589
    64e1:	e8 b9 00             	call   0x659d
    64e4:	f6 c3 04             	test   $0x4,%bl
    64e7:	75 10                	jne    0x64f9
    64e9:	8d 9c c0 01          	lea    0x1c0(%si),%bx
    64ed:	b8 00 55             	mov    $0x5500,%ax
    64f0:	e8 ab 0d             	call   0x729e
    64f3:	b5 02                	mov    $0x2,%ch
    64f5:	e8 17 00             	call   0x650f
    64f8:	c3                   	ret
    64f9:	e8 af 00             	call   0x65ab
    64fc:	b5 02                	mov    $0x2,%ch
    64fe:	8d 5c 28             	lea    0x28(%si),%bx
    6501:	e8 57 00             	call   0x655b
    6504:	75 02                	jne    0x6508
    6506:	b5 01                	mov    $0x1,%ch
    6508:	e8 04 00             	call   0x650f
    650b:	e8 c6 03             	call   0x68d4
    650e:	c3                   	ret
    650f:	8d 9c ac 02          	lea    0x2ac(%si),%bx
    6513:	b1 02                	mov    $0x2,%cl
    6515:	e8 27 19             	call   0x7e3f
    6518:	b5 02                	mov    $0x2,%ch
    651a:	e8 6c 00             	call   0x6589
    651d:	c3                   	ret
    651e:	8d 9c a4 01          	lea    0x1a4(%si),%bx
    6522:	e8 21 00             	call   0x6546
    6525:	e8 75 00             	call   0x659d
    6528:	f6 c3 04             	test   $0x4,%bl
    652b:	74 12                	je     0x653f
    652d:	8d 5c 28             	lea    0x28(%si),%bx
    6530:	e8 78 00             	call   0x65ab
    6533:	e8 5d 00             	call   0x6593
    6536:	e8 56 07             	call   0x6c8f
    6539:	8d 5c 28             	lea    0x28(%si),%bx
    653c:	e8 fb 16             	call   0x7c3a
    653f:	b8 02 00             	mov    $0x2,%ax
    6542:	e8 0e ff             	call   0x6453
    6545:	c3                   	ret
    6546:	b9 48 00             	mov    $0x48,%cx
    6549:	e8 a6 15             	call   0x7af2
    654c:	c3                   	ret
    654d:	53                   	push   %bx
    654e:	81 c3 05 01          	add    $0x105,%bx
    6552:	e8 46 19             	call   0x7e9b
    6555:	24 06                	and    $0x6,%al
    6557:	3c 02                	cmp    $0x2,%al
    6559:	5b                   	pop    %bx
    655a:	c3                   	ret
    655b:	e8 10 00             	call   0x656e
    655e:	3d 01 04             	cmp    $0x401,%ax
    6561:	75 0a                	jne    0x656d
    6563:	53                   	push   %bx
    6564:	83 c3 18             	add    $0x18,%bx
    6567:	e8 31 19             	call   0x7e9b
    656a:	5b                   	pop    %bx
    656b:	a8 01                	test   $0x1,%al
    656d:	c3                   	ret
    656e:	53                   	push   %bx
    656f:	83 c3 12             	add    $0x12,%bx
    6572:	e8 26 19             	call   0x7e9b
    6575:	5b                   	pop    %bx
    6576:	c3                   	ret
    6577:	8d 9c ac 02          	lea    0x2ac(%si),%bx
    657b:	32 c9                	xor    %cl,%cl
    657d:	e8 bf 18             	call   0x7e3f
    6580:	c3                   	ret
    6581:	8d 9c ac 02          	lea    0x2ac(%si),%bx
    6585:	e8 13 19             	call   0x7e9b
    6588:	c3                   	ret
    6589:	8d 9c ac 02          	lea    0x2ac(%si),%bx
    658d:	b1 01                	mov    $0x1,%cl
    658f:	e8 ad 18             	call   0x7e3f
    6592:	c3                   	ret
    6593:	8d 9c ac 02          	lea    0x2ac(%si),%bx
    6597:	b1 01                	mov    $0x1,%cl
    6599:	e8 bb 18             	call   0x7e57
    659c:	c3                   	ret
    659d:	66 50                	push   %eax
    659f:	8d 9c a0 01          	lea    0x1a0(%si),%bx
    65a3:	e8 f5 18             	call   0x7e9b
    65a6:	8a d8                	mov    %al,%bl
    65a8:	66 58                	pop    %eax
    65aa:	c3                   	ret
    65ab:	55                   	push   %bp
    65ac:	57                   	push   %di
    65ad:	51                   	push   %cx
    65ae:	b9 08 00             	mov    $0x8,%cx
    65b1:	bd 00 00             	mov    $0x0,%bp
    65b4:	bb 08 00             	mov    $0x8,%bx
    65b7:	2b d9                	sub    %cx,%bx
    65b9:	d1 e3                	shl    $1,%bx
    65bb:	8d 58 4e             	lea    0x4e(%bx,%si),%bx
    65be:	e8 da 18             	call   0x7e9b
    65c1:	e8 e0 01             	call   0x67a4
    65c4:	e2 ee                	loop   0x65b4
    65c6:	8d 5c 4b             	lea    0x4b(%si),%bx
    65c9:	e8 cf 18             	call   0x7e9b
    65cc:	b9 03 00             	mov    $0x3,%cx
    65cf:	8b d0                	mov    %ax,%dx
    65d1:	bf 8b 66             	mov    $0x668b,%di
    65d4:	85 55 06             	test   %dx,0x6(%di)
    65d7:	74 17                	je     0x65f0
    65d9:	66 8b 05             	mov    (%di),%eax
    65dc:	8d 9a 4c 02          	lea    0x24c(%bp,%si),%bx
    65e0:	e8 18 18             	call   0x7dfb
    65e3:	8b 45 04             	mov    0x4(%di),%ax
    65e6:	8d 9a 50 02          	lea    0x250(%bp,%si),%bx
    65ea:	e8 26 18             	call   0x7e13
    65ed:	83 c5 08             	add    $0x8,%bp
    65f0:	83 c7 08             	add    $0x8,%di
    65f3:	e2 df                	loop   0x65d4
    65f5:	8d 7c 5e             	lea    0x5e(%si),%di
    65f8:	b9 04 00             	mov    $0x4,%cx
    65fb:	33 ed                	xor    %bp,%bp
    65fd:	8b df                	mov    %di,%bx
    65ff:	e8 99 18             	call   0x7e9b
    6602:	0b c0                	or     %ax,%ax
    6604:	74 09                	je     0x660f
    6606:	e8 5a 01             	call   0x6763
    6609:	e8 97 00             	call   0x66a3
    660c:	83 c5 1c             	add    $0x1c,%bp
    660f:	83 c7 12             	add    $0x12,%di
    6612:	e2 e9                	loop   0x65fd
    6614:	55                   	push   %bp
    6615:	32 ed                	xor    %ch,%ch
    6617:	e8 6f ff             	call   0x6589
    661a:	8d 5c 28             	lea    0x28(%si),%bx
    661d:	e8 4e ff             	call   0x656e
    6620:	3d 01 04             	cmp    $0x401,%ax
    6623:	75 10                	jne    0x6635
    6625:	83 c3 14             	add    $0x14,%bx
    6628:	e8 70 18             	call   0x7e9b
    662b:	24 70                	and    $0x70,%al
    662d:	c0 e8 04             	shr    $0x4,%al
    6630:	8a e8                	mov    %al,%ch
    6632:	e8 54 ff             	call   0x6589
    6635:	5d                   	pop    %bp
    6636:	8d 9c a6 00          	lea    0xa6(%si),%bx
    663a:	e8 5e 18             	call   0x7e9b
    663d:	0a c0                	or     %al,%al
    663f:	74 46                	je     0x6687
    6641:	8d 9c a8 00          	lea    0xa8(%si),%bx
    6645:	e8 53 18             	call   0x7e9b
    6648:	3c 02                	cmp    $0x2,%al
    664a:	75 3b                	jne    0x6687
    664c:	66 c1 e8 10          	shr    $0x10,%eax
    6650:	3c 04                	cmp    $0x4,%al
    6652:	72 33                	jb     0x6687
    6654:	8d 9c a8 00          	lea    0xa8(%si),%bx
    6658:	32 e4                	xor    %ah,%ah
    665a:	03 d8                	add    %ax,%bx
    665c:	8b fb                	mov    %bx,%di
    665e:	b9 04 00             	mov    $0x4,%cx
    6661:	8b df                	mov    %di,%bx
    6663:	e8 35 18             	call   0x7e9b
    6666:	0b c0                	or     %ax,%ax
    6668:	74 15                	je     0x667f
    666a:	e8 f6 00             	call   0x6763
    666d:	a9 80 00             	test   $0x80,%ax
    6670:	75 0d                	jne    0x667f
    6672:	e8 2e 00             	call   0x66a3
    6675:	83 c5 1c             	add    $0x1c,%bp
    6678:	55                   	push   %bp
    6679:	58                   	pop    %ax
    667a:	83 f8 70             	cmp    $0x70,%ax
    667d:	73 08                	jae    0x6687
    667f:	83 c7 12             	add    $0x12,%di
    6682:	49                   	dec    %cx
    6683:	0b c9                	or     %cx,%cx
    6685:	75 da                	jne    0x6661
    6687:	59                   	pop    %cx
    6688:	5f                   	pop    %di
    6689:	5d                   	pop    %bp
    668a:	c3                   	ret
    668b:	20 03                	and    %al,(%bp,%di)
    668d:	58                   	pop    %ax
    668e:	02 3c                	add    (%si),%bh
    6690:	00 01                	add    %al,(%bx,%di)
    6692:	00 00                	add    %al,(%bx,%si)
    6694:	04 00                	add    $0x0,%al
    6696:	03 3c                	add    (%si),%di
    6698:	00 00                	add    %al,(%bx,%si)
    669a:	08 80 02 e0          	or     %al,-0x1ffe(%bx,%si)
    669e:	01 3c                	add    %di,(%si)
    66a0:	00 20                	add    %ah,(%bx,%si)
    66a2:	00 51 8d             	add    %dl,-0x73(%bx,%di)
    66a5:	1d e8 f2             	sbb    $0xf2e8,%ax
    66a8:	17                   	pop    %ss
    66a9:	8d 9a c0 01          	lea    0x1c0(%bp,%si),%bx
    66ad:	e8 63 17             	call   0x7e13
    66b0:	8d 9a d2 01          	lea    0x1d2(%bp,%si),%bx
    66b4:	66 33 c0             	xor    %eax,%eax
    66b7:	e8 41 17             	call   0x7dfb
    66ba:	8d 5d 02             	lea    0x2(%di),%bx
    66bd:	e8 db 17             	call   0x7e9b
    66c0:	8d 9a c2 01          	lea    0x1c2(%bp,%si),%bx
    66c4:	e8 7c 00             	call   0x6743
    66c7:	8d 5d 05             	lea    0x5(%di),%bx
    66ca:	e8 ce 17             	call   0x7e9b
    66cd:	8d 9a c6 01          	lea    0x1c6(%bp,%si),%bx
    66d1:	e8 6f 00             	call   0x6743
    66d4:	8d 5d 08             	lea    0x8(%di),%bx
    66d7:	e8 c1 17             	call   0x7e9b
    66da:	8b c8                	mov    %ax,%cx
    66dc:	8a dc                	mov    %ah,%bl
    66de:	66 c1 c8 10          	ror    $0x10,%eax
    66e2:	8a d0                	mov    %al,%dl
    66e4:	80 e2 0f             	and    $0xf,%dl
    66e7:	8a f0                	mov    %al,%dh
    66e9:	c0 ee 04             	shr    $0x4,%dh
    66ec:	8a ec                	mov    %ah,%ch
    66ee:	c0 ed 06             	shr    $0x6,%ch
    66f1:	8a fc                	mov    %ah,%bh
    66f3:	c0 ef 04             	shr    $0x4,%bh
    66f6:	80 e7 03             	and    $0x3,%bh
    66f9:	80 e4 0f             	and    $0xf,%ah
    66fc:	c0 e4 04             	shl    $0x4,%ah
    66ff:	0a d4                	or     %ah,%dl
    6701:	80 e2 3f             	and    $0x3f,%dl
    6704:	80 e4 c0             	and    $0xc0,%ah
    6707:	c0 ec 02             	shr    $0x2,%ah
    670a:	0a f4                	or     %ah,%dh
    670c:	8b c3                	mov    %bx,%ax
    670e:	8d 9a cc 01          	lea    0x1cc(%bp,%si),%bx
    6712:	e8 fe 16             	call   0x7e13
    6715:	8d 9a ca 01          	lea    0x1ca(%bp,%si),%bx
    6719:	8b c1                	mov    %cx,%ax
    671b:	e8 f5 16             	call   0x7e13
    671e:	8d 9a ce 01          	lea    0x1ce(%bp,%si),%bx
    6722:	33 c0                	xor    %ax,%ax
    6724:	8a c6                	mov    %dh,%al
    6726:	e8 ea 16             	call   0x7e13
    6729:	8d 9a d0 01          	lea    0x1d0(%bp,%si),%bx
    672d:	33 c0                	xor    %ax,%ax
    672f:	8a c2                	mov    %dl,%al
    6731:	e8 df 16             	call   0x7e13
    6734:	8d 5d 0f             	lea    0xf(%di),%bx
    6737:	e8 61 17             	call   0x7e9b
    673a:	8d 9a d6 01          	lea    0x1d6(%bp,%si),%bx
    673e:	e8 d2 16             	call   0x7e13
    6741:	59                   	pop    %cx
    6742:	c3                   	ret
    6743:	8b c8                	mov    %ax,%cx
    6745:	8a d4                	mov    %ah,%dl
    6747:	66 c1 c8 10          	ror    $0x10,%eax
    674b:	8a f0                	mov    %al,%dh
    674d:	80 e6 0f             	and    $0xf,%dh
    6750:	8a e8                	mov    %al,%ch
    6752:	c0 ed 04             	shr    $0x4,%ch
    6755:	8b c1                	mov    %cx,%ax
    6757:	e8 b9 16             	call   0x7e13
    675a:	83 c3 02             	add    $0x2,%bx
    675d:	8b c2                	mov    %dx,%ax
    675f:	e8 b1 16             	call   0x7e13
    6762:	c3                   	ret
    6763:	8d 5d 11             	lea    0x11(%di),%bx
    6766:	e8 32 17             	call   0x7e9b
    6769:	8a e0                	mov    %al,%ah
    676b:	ba 06 00             	mov    $0x6,%dx
    676e:	c0 e8 07             	shr    $0x7,%al
    6771:	74 03                	je     0x6776
    6773:	80 ca 80             	or     $0x80,%dl
    6776:	8a c4                	mov    %ah,%al
    6778:	c0 e8 03             	shr    $0x3,%al
    677b:	24 03                	and    $0x3,%al
    677d:	3c 02                	cmp    $0x2,%al
    677f:	75 03                	jne    0x6784
    6781:	80 ca 40             	or     $0x40,%dl
    6784:	3c 03                	cmp    $0x3,%al
    6786:	75 12                	jne    0x679a
    6788:	8a c4                	mov    %ah,%al
    678a:	d0 e8                	shr    $1,%al
    678c:	a8 01                	test   $0x1,%al
    678e:	74 03                	je     0x6793
    6790:	80 e2 fd             	and    $0xfd,%dl
    6793:	a8 02                	test   $0x2,%al
    6795:	74 03                	je     0x679a
    6797:	80 e2 fb             	and    $0xfb,%dl
    679a:	8b c2                	mov    %dx,%ax
    679c:	8d 9a d8 01          	lea    0x1d8(%bp,%si),%bx
    67a0:	e8 70 16             	call   0x7e13
    67a3:	c3                   	ret
    67a4:	3c 01                	cmp    $0x1,%al
    67a6:	74 3d                	je     0x67e5
    67a8:	8b d0                	mov    %ax,%dx
    67aa:	0f b6 c6             	movzbw %dh,%ax
    67ad:	24 3f                	and    $0x3f,%al
    67af:	04 3c                	add    $0x3c,%al
    67b1:	8d 9a 50 02          	lea    0x250(%bp,%si),%bx
    67b5:	e8 5b 16             	call   0x7e13
    67b8:	0f b6 c2             	movzbw %dl,%ax
    67bb:	83 c0 1f             	add    $0x1f,%ax
    67be:	c1 e0 03             	shl    $0x3,%ax
    67c1:	8d 9a 4c 02          	lea    0x24c(%bp,%si),%bx
    67c5:	e8 4b 16             	call   0x7e13
    67c8:	0f b6 de             	movzbw %dh,%bx
    67cb:	c1 eb 06             	shr    $0x6,%bx
    67ce:	c1 e3 02             	shl    $0x2,%bx
    67d1:	2e f7 a7 e8 67       	mulw   %cs:0x67e8(%bx)
    67d6:	2e f7 b7 e6 67       	divw   %cs:0x67e6(%bx)
    67db:	8d 9a 4e 02          	lea    0x24e(%bp,%si),%bx
    67df:	e8 31 16             	call   0x7e13
    67e2:	83 c5 08             	add    $0x8,%bp
    67e5:	c3                   	ret
    67e6:	10 00                	adc    %al,(%bx,%si)
    67e8:	0a 00                	or     (%bx,%si),%al
    67ea:	04 00                	add    $0x0,%al
    67ec:	03 00                	add    (%bx,%si),%ax
    67ee:	05 00 04             	add    $0x400,%ax
    67f1:	00 10                	add    %dl,(%bx,%si)
    67f3:	00 09                	add    %cl,(%bx,%di)
    67f5:	00 8d 9c a6          	add    %cl,-0x5964(%di)
    67f9:	00 e8                	add    %ch,%al
    67fb:	9e                   	sahf
    67fc:	16                   	push   %ss
    67fd:	0a c0                	or     %al,%al
    67ff:	74 1f                	je     0x6820
    6801:	8d 9c a8 00          	lea    0xa8(%si),%bx
    6805:	51                   	push   %cx
    6806:	b1 03                	mov    $0x3,%cl
    6808:	e8 18 00             	call   0x6823
    680b:	59                   	pop    %cx
    680c:	0b db                	or     %bx,%bx
    680e:	74 10                	je     0x6820
    6810:	e8 88 16             	call   0x7e9b
    6813:	32 c0                	xor    %al,%al
    6815:	66 3d 00 03 0c 00    	cmp    $0xc0300,%eax
    681b:	75 03                	jne    0x6820
    681d:	0b db                	or     %bx,%bx
    681f:	c3                   	ret
    6820:	33 db                	xor    %bx,%bx
    6822:	c3                   	ret
    6823:	66 50                	push   %eax
    6825:	52                   	push   %dx
    6826:	e8 72 16             	call   0x7e9b
    6829:	3c 02                	cmp    $0x2,%al
    682b:	75 39                	jne    0x6866
    682d:	80 fc 03             	cmp    $0x3,%ah
    6830:	72 34                	jb     0x6866
    6832:	66 c1 e8 10          	shr    $0x10,%eax
    6836:	32 e4                	xor    %ah,%ah
    6838:	3c 04                	cmp    $0x4,%al
    683a:	76 2a                	jbe    0x6866
    683c:	03 c3                	add    %bx,%ax
    683e:	8b d0                	mov    %ax,%dx
    6840:	83 c3 04             	add    $0x4,%bx
    6843:	3b da                	cmp    %dx,%bx
    6845:	73 1f                	jae    0x6866
    6847:	e8 51 16             	call   0x7e9b
    684a:	8a e0                	mov    %al,%ah
    684c:	80 e4 e0             	and    $0xe0,%ah
    684f:	c0 ec 05             	shr    $0x5,%ah
    6852:	24 1f                	and    $0x1f,%al
    6854:	38 cc                	cmp    %cl,%ah
    6856:	74 08                	je     0x6860
    6858:	32 e4                	xor    %ah,%ah
    685a:	fe c0                	inc    %al
    685c:	03 d8                	add    %ax,%bx
    685e:	eb e3                	jmp    0x6843
    6860:	0b db                	or     %bx,%bx
    6862:	5a                   	pop    %dx
    6863:	66 58                	pop    %eax
    6865:	c3                   	ret
    6866:	33 db                	xor    %bx,%bx
    6868:	5a                   	pop    %dx
    6869:	66 58                	pop    %eax
    686b:	c3                   	ret
    686c:	51                   	push   %cx
    686d:	8d 9c a6 00          	lea    0xa6(%si),%bx
    6871:	e8 27 16             	call   0x7e9b
    6874:	0a c0                	or     %al,%al
    6876:	74 1b                	je     0x6893
    6878:	8d 9c a8 00          	lea    0xa8(%si),%bx
    687c:	b1 12                	mov    $0x12,%cl
    687e:	e8 18 00             	call   0x6899
    6881:	74 10                	je     0x6893
    6883:	e8 15 16             	call   0x7e9b
    6886:	66 c1 e8 10          	shr    $0x10,%eax
    688a:	80 e4 07             	and    $0x7,%ah
    688d:	75 04                	jne    0x6893
    688f:	b0 01                	mov    $0x1,%al
    6891:	eb 02                	jmp    0x6895
    6893:	32 c0                	xor    %al,%al
    6895:	0a c0                	or     %al,%al
    6897:	59                   	pop    %cx
    6898:	c3                   	ret
    6899:	66 50                	push   %eax
    689b:	52                   	push   %dx
    689c:	e8 fc 15             	call   0x7e9b
    689f:	3c 70                	cmp    $0x70,%al
    68a1:	75 2b                	jne    0x68ce
    68a3:	66 c1 e8 10          	shr    $0x10,%eax
    68a7:	32 e4                	xor    %ah,%ah
    68a9:	83 c3 05             	add    $0x5,%bx
    68ac:	03 c3                	add    %bx,%ax
    68ae:	8b d0                	mov    %ax,%dx
    68b0:	3b da                	cmp    %dx,%bx
    68b2:	73 1a                	jae    0x68ce
    68b4:	e8 e4 15             	call   0x7e9b
    68b7:	38 c8                	cmp    %cl,%al
    68b9:	74 0d                	je     0x68c8
    68bb:	66 c1 e8 10          	shr    $0x10,%eax
    68bf:	32 e4                	xor    %ah,%ah
    68c1:	83 c0 03             	add    $0x3,%ax
    68c4:	03 d8                	add    %ax,%bx
    68c6:	eb e8                	jmp    0x68b0
    68c8:	0b db                	or     %bx,%bx
    68ca:	5a                   	pop    %dx
    68cb:	66 58                	pop    %eax
    68cd:	c3                   	ret
    68ce:	33 db                	xor    %bx,%bx
    68d0:	5a                   	pop    %dx
    68d1:	66 58                	pop    %eax
    68d3:	c3                   	ret
    68d4:	57                   	push   %di
    68d5:	66 51                	push   %ecx
    68d7:	8d 9c c0 01          	lea    0x1c0(%si),%bx
    68db:	8b fb                	mov    %bx,%di
    68dd:	8b df                	mov    %di,%bx
    68df:	e8 3d 00             	call   0x691f
    68e2:	0b c9                	or     %cx,%cx
    68e4:	74 0b                	je     0x68f1
    68e6:	66 8b d1             	mov    %ecx,%edx
    68e9:	e8 60 0c             	call   0x754c
    68ec:	83 c7 1c             	add    $0x1c,%di
    68ef:	eb ec                	jmp    0x68dd
    68f1:	66 59                	pop    %ecx
    68f3:	5f                   	pop    %di
    68f4:	c3                   	ret
    68f5:	50                   	push   %ax
    68f6:	53                   	push   %bx
    68f7:	51                   	push   %cx
    68f8:	b9 07 00             	mov    $0x7,%cx
    68fb:	53                   	push   %bx
    68fc:	8b da                	mov    %dx,%bx
    68fe:	e8 9a 15             	call   0x7e9b
    6901:	83 f8 00             	cmp    $0x0,%ax
    6904:	5b                   	pop    %bx
    6905:	74 09                	je     0x6910
    6907:	66 c1 e3 10          	shl    $0x10,%ebx
    690b:	8b da                	mov    %dx,%bx
    690d:	e8 f7 11             	call   0x7b07
    6910:	59                   	pop    %cx
    6911:	5b                   	pop    %bx
    6912:	58                   	pop    %ax
    6913:	c3                   	ret
    6914:	51                   	push   %cx
    6915:	53                   	push   %bx
    6916:	b9 07 00             	mov    $0x7,%cx
    6919:	e8 04 12             	call   0x7b20
    691c:	5b                   	pop    %bx
    691d:	59                   	pop    %cx
    691e:	c3                   	ret
    691f:	66 50                	push   %eax
    6921:	53                   	push   %bx
    6922:	83 c3 06             	add    $0x6,%bx
    6925:	e8 73 15             	call   0x7e9b
    6928:	5b                   	pop    %bx
    6929:	8b c8                	mov    %ax,%cx
    692b:	66 c1 e1 10          	shl    $0x10,%ecx
    692f:	53                   	push   %bx
    6930:	83 c3 02             	add    $0x2,%bx
    6933:	e8 65 15             	call   0x7e9b
    6936:	8b c8                	mov    %ax,%cx
    6938:	5b                   	pop    %bx
    6939:	66 58                	pop    %eax
    693b:	c3                   	ret
    693c:	8d 9c a0 01          	lea    0x1a0(%si),%bx
    6940:	32 c9                	xor    %cl,%cl
    6942:	e8 fa 14             	call   0x7e3f
    6945:	c3                   	ret
    6946:	57                   	push   %di
    6947:	b9 20 00             	mov    $0x20,%cx
    694a:	e8 df 11             	call   0x7b2c
    694d:	5f                   	pop    %di
    694e:	c3                   	ret
    694f:	53                   	push   %bx
    6950:	51                   	push   %cx
    6951:	e8 19 00             	call   0x696d
    6954:	32 e4                	xor    %ah,%ah
    6956:	8a c5                	mov    %ch,%al
    6958:	c1 e0 02             	shl    $0x2,%ax
    695b:	59                   	pop    %cx
    695c:	8d 9c 78 01          	lea    0x178(%si),%bx
    6960:	03 d8                	add    %ax,%bx
    6962:	e8 36 15             	call   0x7e9b
    6965:	5b                   	pop    %bx
    6966:	c3                   	ret
    6967:	b1 02                	mov    $0x2,%cl
    6969:	e8 07 00             	call   0x6973
    696c:	c3                   	ret
    696d:	b1 01                	mov    $0x1,%cl
    696f:	e8 01 00             	call   0x6973
    6972:	c3                   	ret
    6973:	53                   	push   %bx
    6974:	8d 9c 98 01          	lea    0x198(%si),%bx
    6978:	e8 dc 14             	call   0x7e57
    697b:	5b                   	pop    %bx
    697c:	c3                   	ret
    697d:	33 c9                	xor    %cx,%cx
    697f:	e8 38 12             	call   0x7bba
    6982:	75 3c                	jne    0x69c0
    6984:	66 ba 22 f0 ff ff    	mov    $0xfffff022,%edx
    698a:	66 33 c0             	xor    %eax,%eax
    698d:	e8 3c 03             	call   0x6ccc
    6990:	33 c0                	xor    %ax,%ax
    6992:	e8 1a 02             	call   0x6baf
    6995:	74 1c                	je     0x69b3
    6997:	a9 dd 0f             	test   $0xfdd,%ax
    699a:	74 f6                	je     0x6992
    699c:	e8 1e fa             	call   0x63bd
    699f:	f6 c3 04             	test   $0x4,%bl
    69a2:	75 05                	jne    0x69a9
    69a4:	f6 c3 18             	test   $0x18,%bl
    69a7:	74 e9                	je     0x6992
    69a9:	e8 1f 00             	call   0x69cb
    69ac:	50                   	push   %ax
    69ad:	e8 a3 fa             	call   0x6453
    69b0:	58                   	pop    %ax
    69b1:	eb df                	jmp    0x6992
    69b3:	e8 0b 00             	call   0x69c1
    69b6:	75 08                	jne    0x69c0
    69b8:	e8 20 00             	call   0x69db
    69bb:	8b c1                	mov    %cx,%ax
    69bd:	e8 93 fa             	call   0x6453
    69c0:	c3                   	ret
    69c1:	66 50                	push   %eax
    69c3:	e8 1f 03             	call   0x6ce5
    69c6:	8b c8                	mov    %ax,%cx
    69c8:	66 58                	pop    %eax
    69ca:	c3                   	ret
    69cb:	66 52                	push   %edx
    69cd:	66 ba ff ff ff ff    	mov    $0xffffffff,%edx
    69d3:	33 d0                	xor    %ax,%dx
    69d5:	e8 f4 02             	call   0x6ccc
    69d8:	66 5a                	pop    %edx
    69da:	c3                   	ret
    69db:	50                   	push   %ax
    69dc:	53                   	push   %bx
    69dd:	52                   	push   %dx
    69de:	e8 e0 ff             	call   0x69c1
    69e1:	75 09                	jne    0x69ec
    69e3:	33 c0                	xor    %ax,%ax
    69e5:	e8 c7 01             	call   0x6baf
    69e8:	8b c8                	mov    %ax,%cx
    69ea:	eb 10                	jmp    0x69fc
    69ec:	83 f9 02             	cmp    $0x2,%cx
    69ef:	74 0b                	je     0x69fc
    69f1:	e8 12 07             	call   0x7106
    69f4:	80 fb 01             	cmp    $0x1,%bl
    69f7:	75 03                	jne    0x69fc
    69f9:	83 e1 fd             	and    $0xfffd,%cx
    69fc:	5a                   	pop    %dx
    69fd:	5b                   	pop    %bx
    69fe:	58                   	pop    %ax
    69ff:	c3                   	ret
    6a00:	56                   	push   %si
    6a01:	66 33 c0             	xor    %eax,%eax
    6a04:	66 ba 00 f0 ff ff    	mov    $0xfffff000,%edx
    6a0a:	e8 35 06             	call   0x7042
    6a0d:	66 c1 e6 10          	shl    $0x10,%esi
    6a11:	e8 a8 01             	call   0x6bbc
    6a14:	0b c0                	or     %ax,%ax
    6a16:	74 03                	je     0x6a1b
    6a18:	e8 05 00             	call   0x6a20
    6a1b:	e8 15 06             	call   0x7033
    6a1e:	5e                   	pop    %si
    6a1f:	c3                   	ret
    6a20:	50                   	push   %ax
    6a21:	51                   	push   %cx
    6a22:	e8 6c 01             	call   0x6b91
    6a25:	50                   	push   %ax
    6a26:	32 c0                	xor    %al,%al
    6a28:	e8 90 02             	call   0x6cbb
    6a2b:	e8 cc 00             	call   0x6afa
    6a2e:	e8 7f 00             	call   0x6ab0
    6a31:	8d 9c 08 03          	lea    0x308(%si),%bx
    6a35:	e8 63 14             	call   0x7e9b
    6a38:	38 e8                	cmp    %ch,%al
    6a3a:	74 0a                	je     0x6a46
    6a3c:	8a c5                	mov    %ch,%al
    6a3e:	e8 ba 13             	call   0x7dfb
    6a41:	b0 02                	mov    $0x2,%al
    6a43:	e8 75 02             	call   0x6cbb
    6a46:	58                   	pop    %ax
    6a47:	e8 79 00             	call   0x6ac3
    6a4a:	66 51                	push   %ecx
    6a4c:	8d 9c a4 01          	lea    0x1a4(%si),%bx
    6a50:	e8 48 14             	call   0x7e9b
    6a53:	66 8b c8             	mov    %eax,%ecx
    6a56:	8b d3                	mov    %bx,%dx
    6a58:	8d 9c d0 02          	lea    0x2d0(%si),%bx
    6a5c:	e8 3c 14             	call   0x7e9b
    6a5f:	66 3b c1             	cmp    %ecx,%eax
    6a62:	75 16                	jne    0x6a7a
    6a64:	53                   	push   %bx
    6a65:	8d 9c aa 01          	lea    0x1aa(%si),%bx
    6a69:	e8 2f 14             	call   0x7e9b
    6a6c:	8b c8                	mov    %ax,%cx
    6a6e:	8d 9c d6 02          	lea    0x2d6(%si),%bx
    6a72:	e8 26 14             	call   0x7e9b
    6a75:	3b c1                	cmp    %cx,%ax
    6a77:	5b                   	pop    %bx
    6a78:	74 05                	je     0x6a7f
    6a7a:	b0 02                	mov    $0x2,%al
    6a7c:	e8 3c 02             	call   0x6cbb
    6a7f:	66 59                	pop    %ecx
    6a81:	e8 71 fe             	call   0x68f5
    6a84:	e8 ff 01             	call   0x6c86
    6a87:	66 25 ff 0f 00 00    	and    $0xfff,%eax
    6a8d:	59                   	pop    %cx
    6a8e:	58                   	pop    %ax
    6a8f:	66 ba ff ff ff ff    	mov    $0xffffffff,%edx
    6a95:	33 d0                	xor    %ax,%dx
    6a97:	e8 a8 05             	call   0x7042
    6a9a:	33 d2                	xor    %dx,%dx
    6a9c:	c3                   	ret
    6a9d:	53                   	push   %bx
    6a9e:	66 50                	push   %eax
    6aa0:	8d 9c c8 02          	lea    0x2c8(%si),%bx
    6aa4:	e8 f4 13             	call   0x7e9b
    6aa7:	8a c4                	mov    %ah,%al
    6aa9:	e8 4f 13             	call   0x7dfb
    6aac:	66 58                	pop    %eax
    6aae:	5b                   	pop    %bx
    6aaf:	c3                   	ret
    6ab0:	53                   	push   %bx
    6ab1:	66 50                	push   %eax
    6ab3:	8d 9c c8 02          	lea    0x2c8(%si),%bx
    6ab7:	e8 e1 13             	call   0x7e9b
    6aba:	8a e0                	mov    %al,%ah
    6abc:	e8 3c 13             	call   0x7dfb
    6abf:	66 58                	pop    %eax
    6ac1:	5b                   	pop    %bx
    6ac2:	c3                   	ret
    6ac3:	8d 9c c8 02          	lea    0x2c8(%si),%bx
    6ac7:	e8 d1 13             	call   0x7e9b
    6aca:	32 c0                	xor    %al,%al
    6acc:	e8 2c 13             	call   0x7dfb
    6acf:	c3                   	ret
    6ad0:	66 52                	push   %edx
    6ad2:	52                   	push   %dx
    6ad3:	32 ed                	xor    %ch,%ch
    6ad5:	83 c1 02             	add    $0x2,%cx
    6ad8:	b8 06 00             	mov    $0x6,%ax
    6adb:	f7 e1                	mul    %cx
    6add:	66 33 c9             	xor    %ecx,%ecx
    6ae0:	8b c8                	mov    %ax,%cx
    6ae2:	5a                   	pop    %dx
    6ae3:	51                   	push   %cx
    6ae4:	66 8b c2             	mov    %edx,%eax
    6ae7:	8a cf                	mov    %bh,%cl
    6ae9:	66 f7 e1             	mul    %ecx
    6aec:	66 c1 e0 03          	shl    $0x3,%eax
    6af0:	59                   	pop    %cx
    6af1:	66 f7 f1             	div    %ecx
    6af4:	66 8b c8             	mov    %eax,%ecx
    6af7:	66 5a                	pop    %edx
    6af9:	c3                   	ret
    6afa:	53                   	push   %bx
    6afb:	e8 48 01             	call   0x6c46
    6afe:	66 c1 e2 10          	shl    $0x10,%edx
    6b02:	e8 36 01             	call   0x6c3b
    6b05:	8d 9c 98 01          	lea    0x198(%si),%bx
    6b09:	e8 8f 13             	call   0x7e9b
    6b0c:	8a e8                	mov    %al,%ch
    6b0e:	8d 9c ac 02          	lea    0x2ac(%si),%bx
    6b12:	e8 86 13             	call   0x7e9b
    6b15:	8a c8                	mov    %al,%cl
    6b17:	e8 47 0c             	call   0x7761
    6b1a:	8a eb                	mov    %bl,%ch
    6b1c:	5b                   	pop    %bx
    6b1d:	c3                   	ret
    6b1e:	57                   	push   %di
    6b1f:	53                   	push   %bx
    6b20:	53                   	push   %bx
    6b21:	e8 d6 ff             	call   0x6afa
    6b24:	e8 14 01             	call   0x6c3b
    6b27:	5b                   	pop    %bx
    6b28:	e8 5e 0c             	call   0x7789
    6b2b:	74 61                	je     0x6b8e
    6b2d:	80 fd 00             	cmp    $0x0,%ch
    6b30:	75 29                	jne    0x6b5b
    6b32:	53                   	push   %bx
    6b33:	e8 19 fe             	call   0x694f
    6b36:	66 8b d0             	mov    %eax,%edx
    6b39:	e8 57 fa             	call   0x6593
    6b3c:	8a cd                	mov    %ch,%cl
    6b3e:	51                   	push   %cx
    6b3f:	e8 25 fe             	call   0x6967
    6b42:	8a fd                	mov    %ch,%bh
    6b44:	59                   	pop    %cx
    6b45:	e8 88 ff             	call   0x6ad0
    6b48:	5b                   	pop    %bx
    6b49:	e8 4f 13             	call   0x7e9b
    6b4c:	66 25 ff ff 00 00    	and    $0xffff,%eax
    6b52:	66 3b c8             	cmp    %eax,%ecx
    6b55:	73 34                	jae    0x6b8b
    6b57:	32 db                	xor    %bl,%bl
    6b59:	eb 33                	jmp    0x6b8e
    6b5b:	80 fd 02             	cmp    $0x2,%ch
    6b5e:	75 11                	jne    0x6b71
    6b60:	e8 2c 01             	call   0x6c8f
    6b63:	8d 1f                	lea    (%bx),%bx
    6b65:	e8 33 13             	call   0x7e9b
    6b68:	3d 74 40             	cmp    $0x4074,%ax
    6b6b:	76 1e                	jbe    0x6b8b
    6b6d:	32 db                	xor    %bl,%bl
    6b6f:	eb 1d                	jmp    0x6b8e
    6b71:	80 fd 03             	cmp    $0x3,%ch
    6b74:	75 15                	jne    0x6b8b
    6b76:	53                   	push   %bx
    6b77:	e8 c1 00             	call   0x6c3b
    6b7a:	b3 03                	mov    $0x3,%bl
    6b7c:	e8 c1 0b             	call   0x7740
    6b7f:	5b                   	pop    %bx
    6b80:	e8 18 13             	call   0x7e9b
    6b83:	3b c2                	cmp    %dx,%ax
    6b85:	76 04                	jbe    0x6b8b
    6b87:	32 db                	xor    %bl,%bl
    6b89:	eb 03                	jmp    0x6b8e
    6b8b:	80 cb 01             	or     $0x1,%bl
    6b8e:	5b                   	pop    %bx
    6b8f:	5f                   	pop    %di
    6b90:	c3                   	ret
    6b91:	53                   	push   %bx
    6b92:	8b f0                	mov    %ax,%si
    6b94:	e8 fa 0d             	call   0x7991
    6b97:	23 f0                	and    %ax,%si
    6b99:	74 09                	je     0x6ba4
    6b9b:	8b c6                	mov    %si,%ax
    6b9d:	e8 37 0c             	call   0x77d7
    6ba0:	8b f3                	mov    %bx,%si
    6ba2:	0b db                	or     %bx,%bx
    6ba4:	5b                   	pop    %bx
    6ba5:	c3                   	ret
    6ba6:	51                   	push   %cx
    6ba7:	e8 31 fe             	call   0x69db
    6baa:	e8 0f 00             	call   0x6bbc
    6bad:	59                   	pop    %cx
    6bae:	c3                   	ret
    6baf:	51                   	push   %cx
    6bb0:	50                   	push   %ax
    6bb1:	e8 dd 0d             	call   0x7991
    6bb4:	8b c8                	mov    %ax,%cx
    6bb6:	58                   	pop    %ax
    6bb7:	e8 02 00             	call   0x6bbc
    6bba:	59                   	pop    %cx
    6bbb:	c3                   	ret
    6bbc:	57                   	push   %di
    6bbd:	53                   	push   %bx
    6bbe:	e8 1a 0e             	call   0x79db
    6bc1:	0b c0                	or     %ax,%ax
    6bc3:	74 09                	je     0x6bce
    6bc5:	8b 1d                	mov    (%di),%bx
    6bc7:	83 c7 02             	add    $0x2,%di
    6bca:	3b c3                	cmp    %bx,%ax
    6bcc:	75 f7                	jne    0x6bc5
    6bce:	8b 1d                	mov    (%di),%bx
    6bd0:	83 fb ff             	cmp    $0xffff,%bx
    6bd3:	74 0b                	je     0x6be0
    6bd5:	83 c7 02             	add    $0x2,%di
    6bd8:	85 d9                	test   %bx,%cx
    6bda:	74 f2                	je     0x6bce
    6bdc:	8b c3                	mov    %bx,%ax
    6bde:	eb 02                	jmp    0x6be2
    6be0:	33 c0                	xor    %ax,%ax
    6be2:	0b c0                	or     %ax,%ax
    6be4:	5b                   	pop    %bx
    6be5:	5f                   	pop    %di
    6be6:	c3                   	ret
    6be7:	33 c0                	xor    %ax,%ax
    6be9:	e8 c3 ff             	call   0x6baf
    6bec:	74 13                	je     0x6c01
    6bee:	e8 a0 ff             	call   0x6b91
    6bf1:	8b de                	mov    %si,%bx
    6bf3:	b9 00 02             	mov    $0x200,%cx
    6bf6:	e8 f9 0e             	call   0x7af2
    6bf9:	83 c6 08             	add    $0x8,%si
    6bfc:	e8 42 0d             	call   0x7941
    6bff:	eb e8                	jmp    0x6be9
    6c01:	bb f0 46             	mov    $0x46f0,%bx
    6c04:	b8 5a a5             	mov    $0xa55a,%ax
    6c07:	e8 09 12             	call   0x7e13
    6c0a:	c3                   	ret
    6c0b:	53                   	push   %bx
    6c0c:	66 50                	push   %eax
    6c0e:	8d 9c 08 03          	lea    0x308(%si),%bx
    6c12:	e8 86 12             	call   0x7e9b
    6c15:	8a e8                	mov    %al,%ch
    6c17:	66 58                	pop    %eax
    6c19:	5b                   	pop    %bx
    6c1a:	c3                   	ret
    6c1b:	53                   	push   %bx
    6c1c:	66 50                	push   %eax
    6c1e:	8d 9c c8 02          	lea    0x2c8(%si),%bx
    6c22:	e8 76 12             	call   0x7e9b
    6c25:	8a c8                	mov    %al,%cl
    6c27:	66 58                	pop    %eax
    6c29:	5b                   	pop    %bx
    6c2a:	c3                   	ret
    6c2b:	53                   	push   %bx
    6c2c:	66 50                	push   %eax
    6c2e:	8d 9c c9 02          	lea    0x2c9(%si),%bx
    6c32:	e8 66 12             	call   0x7e9b
    6c35:	8a c8                	mov    %al,%cl
    6c37:	66 58                	pop    %eax
    6c39:	5b                   	pop    %bx
    6c3a:	c3                   	ret
    6c3b:	53                   	push   %bx
    6c3c:	8d 5c 14             	lea    0x14(%si),%bx
    6c3f:	e8 59 12             	call   0x7e9b
    6c42:	8b d0                	mov    %ax,%dx
    6c44:	5b                   	pop    %bx
    6c45:	c3                   	ret
    6c46:	53                   	push   %bx
    6c47:	66 50                	push   %eax
    6c49:	8d 5c 16             	lea    0x16(%si),%bx
    6c4c:	e8 4c 12             	call   0x7e9b
    6c4f:	8b d0                	mov    %ax,%dx
    6c51:	66 58                	pop    %eax
    6c53:	5b                   	pop    %bx
    6c54:	c3                   	ret
    6c55:	53                   	push   %bx
    6c56:	66 50                	push   %eax
    6c58:	8d 9c 18 03          	lea    0x318(%si),%bx
    6c5c:	e8 3c 12             	call   0x7e9b
    6c5f:	66 8b d0             	mov    %eax,%edx
    6c62:	66 58                	pop    %eax
    6c64:	5b                   	pop    %bx
    6c65:	c3                   	ret
    6c66:	53                   	push   %bx
    6c67:	66 50                	push   %eax
    6c69:	8d 9c 1c 03          	lea    0x31c(%si),%bx
    6c6d:	e8 2b 12             	call   0x7e9b
    6c70:	66 8b d0             	mov    %eax,%edx
    6c73:	66 58                	pop    %eax
    6c75:	5b                   	pop    %bx
    6c76:	c3                   	ret
    6c77:	53                   	push   %bx
    6c78:	66 50                	push   %eax
    6c7a:	8d 5c 10             	lea    0x10(%si),%bx
    6c7d:	e8 1b 12             	call   0x7e9b
    6c80:	8b c8                	mov    %ax,%cx
    6c82:	66 58                	pop    %eax
    6c84:	5b                   	pop    %bx
    6c85:	c3                   	ret
    6c86:	53                   	push   %bx
    6c87:	8d 5c 08             	lea    0x8(%si),%bx
    6c8a:	e8 0e 12             	call   0x7e9b
    6c8d:	5b                   	pop    %bx
    6c8e:	c3                   	ret
    6c8f:	53                   	push   %bx
    6c90:	66 50                	push   %eax
    6c92:	8d 5c 0c             	lea    0xc(%si),%bx
    6c95:	e8 03 12             	call   0x7e9b
    6c98:	8b d0                	mov    %ax,%dx
    6c9a:	66 58                	pop    %eax
    6c9c:	5b                   	pop    %bx
    6c9d:	c3                   	ret
    6c9e:	8d 5c 04             	lea    0x4(%si),%bx
    6ca1:	e8 f7 11             	call   0x7e9b
    6ca4:	c3                   	ret
    6ca5:	51                   	push   %cx
    6ca6:	8d 5c 04             	lea    0x4(%si),%bx
    6ca9:	32 c9                	xor    %cl,%cl
    6cab:	e8 91 11             	call   0x7e3f
    6cae:	59                   	pop    %cx
    6caf:	c3                   	ret
    6cb0:	8d 9c 18 03          	lea    0x318(%si),%bx
    6cb4:	66 8b c2             	mov    %edx,%eax
    6cb7:	e8 41 11             	call   0x7dfb
    6cba:	c3                   	ret
    6cbb:	53                   	push   %bx
    6cbc:	51                   	push   %cx
    6cbd:	8a e8                	mov    %al,%ch
    6cbf:	e8 dc ff             	call   0x6c9e
    6cc2:	24 fd                	and    $0xfd,%al
    6cc4:	0a e8                	or     %al,%ch
    6cc6:	e8 dc ff             	call   0x6ca5
    6cc9:	59                   	pop    %cx
    6cca:	5b                   	pop    %bx
    6ccb:	c3                   	ret
    6ccc:	53                   	push   %bx
    6ccd:	66 50                	push   %eax
    6ccf:	51                   	push   %cx
    6cd0:	66 8b c8             	mov    %eax,%ecx
    6cd3:	bb 00 00             	mov    $0x0,%bx
    6cd6:	e8 da 0a             	call   0x77b3
    6cd9:	23 c2                	and    %dx,%ax
    6cdb:	0b c1                	or     %cx,%ax
    6cdd:	e8 dc 0a             	call   0x77bc
    6ce0:	59                   	pop    %cx
    6ce1:	66 58                	pop    %eax
    6ce3:	5b                   	pop    %bx
    6ce4:	c3                   	ret
    6ce5:	bb 00 00             	mov    $0x0,%bx
    6ce8:	e8 c8 0a             	call   0x77b3
    6ceb:	66 25 df 0f 00 00    	and    $0xfdf,%eax
    6cf1:	c3                   	ret
    6cf2:	80 fa 14             	cmp    $0x14,%dl
    6cf5:	c3                   	ret
    6cf6:	e8 dd 0d             	call   0x7ad6
    6cf9:	e8 6b 0d             	call   0x7a67
    6cfc:	e8 49 0d             	call   0x7a48
    6cff:	75 06                	jne    0x6d07
    6d01:	e8 9f 0c             	call   0x79a3
    6d04:	e8 4d 0d             	call   0x7a54
    6d07:	c3                   	ret
    6d08:	b0 01                	mov    $0x1,%al
    6d0a:	c3                   	ret
    6d0b:	55                   	push   %bp
    6d0c:	b3 01                	mov    $0x1,%bl
    6d0e:	e8 3d 0f             	call   0x7c4e
    6d11:	5d                   	pop    %bp
    6d12:	c3                   	ret
    6d13:	66 53                	push   %ebx
    6d15:	66 bb 04 00 00 00    	mov    $0x4,%ebx
    6d1b:	e8 05 00             	call   0x6d23
    6d1e:	33 c0                	xor    %ax,%ax
    6d20:	66 5b                	pop    %ebx
    6d22:	c3                   	ret
    6d23:	55                   	push   %bp
    6d24:	66 c1 e3 10          	shl    $0x10,%ebx
    6d28:	bb 00 00             	mov    $0x0,%bx
    6d2b:	e8 20 0f             	call   0x7c4e
    6d2e:	5d                   	pop    %bp
    6d2f:	c3                   	ret
    6d30:	e8 65 0e             	call   0x7b98
    6d33:	bb 0a 00             	mov    $0xa,%bx
    6d36:	e8 83 0a             	call   0x77bc
    6d39:	c3                   	ret
    6d3a:	bb 0a 00             	mov    $0xa,%bx
    6d3d:	e8 73 0a             	call   0x77b3
    6d40:	66 8b c8             	mov    %eax,%ecx
    6d43:	e8 52 0e             	call   0x7b98
    6d46:	bb 0a 00             	mov    $0xa,%bx
    6d49:	66 2b c1             	sub    %ecx,%eax
    6d4c:	e8 6d 0a             	call   0x77bc
    6d4f:	c3                   	ret
    6d50:	e8 29 00             	call   0x6d7c
    6d53:	0b c9                	or     %cx,%cx
    6d55:	74 22                	je     0x6d79
    6d57:	e8 a6 fc             	call   0x6a00
    6d5a:	e8 b4 07             	call   0x7511
    6d5d:	66 51                	push   %ecx
    6d5f:	66 8b c8             	mov    %eax,%ecx
    6d62:	bb 07 00             	mov    $0x7,%bx
    6d65:	e8 4b 0a             	call   0x77b3
    6d68:	66 25 00 fe 00 00    	and    $0xfe00,%eax
    6d6e:	66 0b c1             	or     %ecx,%eax
    6d71:	e8 48 0a             	call   0x77bc
    6d74:	66 59                	pop    %ecx
    6d76:	0c 01                	or     $0x1,%al
    6d78:	c3                   	ret
    6d79:	32 c0                	xor    %al,%al
    6d7b:	c3                   	ret
    6d7c:	e8 e0 02             	call   0x705f
    6d7f:	0b c9                	or     %cx,%cx
    6d81:	75 06                	jne    0x6d89
    6d83:	e8 55 fc             	call   0x69db
    6d86:	e8 e6 02             	call   0x706f
    6d89:	51                   	push   %cx
    6d8a:	e8 4e fc             	call   0x69db
    6d8d:	66 c1 e6 10          	shl    $0x10,%esi
    6d91:	33 c0                	xor    %ax,%ax
    6d93:	e8 10 fe             	call   0x6ba6
    6d96:	74 09                	je     0x6da1
    6d98:	e8 7e 03             	call   0x7119
    6d9b:	75 f6                	jne    0x6d93
    6d9d:	33 c8                	xor    %ax,%cx
    6d9f:	eb f2                	jmp    0x6d93
    6da1:	58                   	pop    %ax
    6da2:	23 c8                	and    %ax,%cx
    6da4:	66 c1 ee 10          	shr    $0x10,%esi
    6da8:	c3                   	ret
    6da9:	66 50                	push   %eax
    6dab:	66 53                	push   %ebx
    6dad:	66 b8 01 00 00 02    	mov    $0x2000001,%eax
    6db3:	bb 08 00             	mov    $0x8,%bx
    6db6:	e8 03 0a             	call   0x77bc
    6db9:	66 5b                	pop    %ebx
    6dbb:	66 58                	pop    %eax
    6dbd:	a8 10                	test   $0x10,%al
    6dbf:	0f 85 a1 00          	jne    0x6e64
    6dc3:	e8 5d 07             	call   0x7523
    6dc6:	66 c1 e6 10          	shl    $0x10,%esi
    6dca:	33 c0                	xor    %ax,%ax
    6dcc:	e8 e0 fd             	call   0x6baf
    6dcf:	74 35                	je     0x6e06
    6dd1:	e8 bd fd             	call   0x6b91
    6dd4:	50                   	push   %ax
    6dd5:	51                   	push   %cx
    6dd6:	8b c8                	mov    %ax,%cx
    6dd8:	e8 58 02             	call   0x7033
    6ddb:	85 c1                	test   %ax,%cx
    6ddd:	59                   	pop    %cx
    6dde:	58                   	pop    %ax
    6ddf:	74 0d                	je     0x6dee
    6de1:	50                   	push   %ax
    6de2:	e8 b9 fe             	call   0x6c9e
    6de5:	24 03                	and    $0x3,%al
    6de7:	3c 03                	cmp    $0x3,%al
    6de9:	58                   	pop    %ax
    6dea:	75 e0                	jne    0x6dcc
    6dec:	eb 0c                	jmp    0x6dfa
    6dee:	50                   	push   %ax
    6def:	e8 ac fe             	call   0x6c9e
    6df2:	a8 01                	test   $0x1,%al
    6df4:	58                   	pop    %ax
    6df5:	74 d5                	je     0x6dcc
    6df7:	e8 b6 fc             	call   0x6ab0
    6dfa:	50                   	push   %ax
    6dfb:	e8 18 08             	call   0x7616
    6dfe:	58                   	pop    %ax
    6dff:	b5 00                	mov    $0x0,%ch
    6e01:	e8 a1 fe             	call   0x6ca5
    6e04:	eb c6                	jmp    0x6dcc
    6e06:	66 50                	push   %eax
    6e08:	66 53                	push   %ebx
    6e0a:	66 b8 02 00 00 02    	mov    $0x2000002,%eax
    6e10:	bb 08 00             	mov    $0x8,%bx
    6e13:	e8 a6 09             	call   0x77bc
    6e16:	66 5b                	pop    %ebx
    6e18:	66 58                	pop    %eax
    6e1a:	e8 16 02             	call   0x7033
    6e1d:	e8 71 fd             	call   0x6b91
    6e20:	e8 80 01             	call   0x6fa3
    6e23:	66 50                	push   %eax
    6e25:	66 53                	push   %ebx
    6e27:	66 b8 03 00 00 02    	mov    $0x2000003,%eax
    6e2d:	bb 08 00             	mov    $0x8,%bx
    6e30:	e8 89 09             	call   0x77bc
    6e33:	66 5b                	pop    %ebx
    6e35:	66 58                	pop    %eax
    6e37:	b1 00                	mov    $0x0,%cl
    6e39:	e8 96 07             	call   0x75d2
    6e3c:	66 c1 ee 10          	shr    $0x10,%esi
    6e40:	e8 d9 06             	call   0x751c
    6e43:	a8 20                	test   $0x20,%al
    6e45:	0f 85 8b 00          	jne    0x6ed4
    6e49:	a8 40                	test   $0x40,%al
    6e4b:	75 17                	jne    0x6e64
    6e4d:	66 50                	push   %eax
    6e4f:	66 53                	push   %ebx
    6e51:	66 b8 0c 00 00 02    	mov    $0x200000c,%eax
    6e57:	bb 08 00             	mov    $0x8,%bx
    6e5a:	e8 5f 09             	call   0x77bc
    6e5d:	66 5b                	pop    %ebx
    6e5f:	66 58                	pop    %eax
    6e61:	e8 68 08             	call   0x76cc
    6e64:	e8 aa 06             	call   0x7511
    6e67:	0a c0                	or     %al,%al
    6e69:	75 14                	jne    0x6e7f
    6e6b:	66 50                	push   %eax
    6e6d:	66 53                	push   %ebx
    6e6f:	66 b8 0e 00 00 02    	mov    $0x200000e,%eax
    6e75:	bb 08 00             	mov    $0x8,%bx
    6e78:	e8 41 09             	call   0x77bc
    6e7b:	66 5b                	pop    %ebx
    6e7d:	66 58                	pop    %eax
    6e7f:	e8 b1 01             	call   0x7033
    6e82:	e8 0c fd             	call   0x6b91
    6e85:	e8 07 fe             	call   0x6c8f
    6e88:	e8 67 fe             	call   0x6cf2
    6e8b:	75 28                	jne    0x6eb5
    6e8d:	e8 76 02             	call   0x7106
    6e90:	0a db                	or     %bl,%bl
    6e92:	74 21                	je     0x6eb5
    6e94:	66 50                	push   %eax
    6e96:	66 53                	push   %ebx
    6e98:	66 b8 0f 00 00 02    	mov    $0x200000f,%eax
    6e9e:	bb 08 00             	mov    $0x8,%bx
    6ea1:	e8 18 09             	call   0x77bc
    6ea4:	66 5b                	pop    %ebx
    6ea6:	66 58                	pop    %eax
    6ea8:	e8 05 fc             	call   0x6ab0
    6eab:	e8 68 07             	call   0x7616
    6eae:	b5 00                	mov    $0x0,%ch
    6eb0:	e8 f2 fd             	call   0x6ca5
    6eb3:	eb 08                	jmp    0x6ebd
    6eb5:	e8 3b 07             	call   0x75f3
    6eb8:	b5 01                	mov    $0x1,%ch
    6eba:	e8 e8 fd             	call   0x6ca5
    6ebd:	66 50                	push   %eax
    6ebf:	66 53                	push   %ebx
    6ec1:	66 b8 15 00 00 02    	mov    $0x2000015,%eax
    6ec7:	bb 08 00             	mov    $0x8,%bx
    6eca:	e8 ef 08             	call   0x77bc
    6ecd:	66 5b                	pop    %ebx
    6ecf:	66 58                	pop    %eax
    6ed1:	e8 d5 00             	call   0x6fa9
    6ed4:	c3                   	ret
    6ed5:	e8 b9 0a             	call   0x7991
    6ed8:	c3                   	ret
    6ed9:	e8 0b fd             	call   0x6be7
    6edc:	e8 a6 06             	call   0x7585
    6edf:	33 c9                	xor    %cx,%cx
    6ee1:	e8 8b 01             	call   0x706f
    6ee4:	66 33 d2             	xor    %edx,%edx
    6ee7:	66 33 c0             	xor    %eax,%eax
    6eea:	e8 df fd             	call   0x6ccc
    6eed:	e8 a1 0a             	call   0x7991
    6ef0:	0b c0                	or     %ax,%ax
    6ef2:	74 1c                	je     0x6f10
    6ef4:	e8 89 07             	call   0x7680
    6ef7:	e8 52 00             	call   0x6f4c
    6efa:	b1 ff                	mov    $0xff,%cl
    6efc:	e8 77 00             	call   0x6f76
    6eff:	33 c0                	xor    %ax,%ax
    6f01:	e8 ab fc             	call   0x6baf
    6f04:	74 0a                	je     0x6f10
    6f06:	e8 88 fc             	call   0x6b91
    6f09:	50                   	push   %ax
    6f0a:	e8 27 07             	call   0x7634
    6f0d:	58                   	pop    %ax
    6f0e:	eb f1                	jmp    0x6f01
    6f10:	32 c9                	xor    %cl,%cl
    6f12:	e8 a6 01             	call   0x70bb
    6f15:	e8 79 0a             	call   0x7991
    6f18:	0b c0                	or     %ax,%ax
    6f1a:	c3                   	ret
    6f1b:	e8 c9 fc             	call   0x6be7
    6f1e:	e8 64 06             	call   0x7585
    6f21:	66 33 c0             	xor    %eax,%eax
    6f24:	66 ba 00 f0 ff ff    	mov    $0xfffff000,%edx
    6f2a:	e8 15 01             	call   0x7042
    6f2d:	51                   	push   %cx
    6f2e:	b1 01                	mov    $0x1,%cl
    6f30:	e8 6e 01             	call   0x70a1
    6f33:	59                   	pop    %cx
    6f34:	e8 5c 07             	call   0x7693
    6f37:	33 c0                	xor    %ax,%ax
    6f39:	e8 73 fc             	call   0x6baf
    6f3c:	74 0a                	je     0x6f48
    6f3e:	e8 50 fc             	call   0x6b91
    6f41:	50                   	push   %ax
    6f42:	e8 e0 06             	call   0x7625
    6f45:	58                   	pop    %ax
    6f46:	eb f1                	jmp    0x6f39
    6f48:	e8 06 07             	call   0x7651
    6f4b:	c3                   	ret
    6f4c:	b8 02 00             	mov    $0x2,%ax
    6f4f:	e8 3f fc             	call   0x6b91
    6f52:	74 21                	je     0x6f75
    6f54:	b8 02 00             	mov    $0x2,%ax
    6f57:	e8 63 f4             	call   0x63bd
    6f5a:	f6 c3 04             	test   $0x4,%bl
    6f5d:	75 0a                	jne    0x6f69
    6f5f:	e8 2f 0a             	call   0x7991
    6f62:	83 e0 fd             	and    $0xfffd,%ax
    6f65:	e8 32 0a             	call   0x799a
    6f68:	c3                   	ret
    6f69:	66 b8 02 00 00 00    	mov    $0x2,%eax
    6f6f:	e8 5a fd             	call   0x6ccc
    6f72:	e8 a9 f5             	call   0x651e
    6f75:	c3                   	ret
    6f76:	e8 4c 08             	call   0x77c5
    6f79:	74 13                	je     0x6f8e
    6f7b:	bb 02 00             	mov    $0x2,%bx
    6f7e:	e8 32 08             	call   0x77b3
    6f81:	8a e1                	mov    %cl,%ah
    6f83:	e8 36 08             	call   0x77bc
    6f86:	e8 e0 06             	call   0x7669
    6f89:	0c 01                	or     $0x1,%al
    6f8b:	c3                   	ret
    6f8c:	0c 01                	or     $0x1,%al
    6f8e:	c3                   	ret
    6f8f:	51                   	push   %cx
    6f90:	e8 32 08             	call   0x77c5
    6f93:	74 0c                	je     0x6fa1
    6f95:	8a cc                	mov    %ah,%cl
    6f97:	bb 02 00             	mov    $0x2,%bx
    6f9a:	e8 16 08             	call   0x77b3
    6f9d:	8a c4                	mov    %ah,%al
    6f9f:	8a e1                	mov    %cl,%ah
    6fa1:	59                   	pop    %cx
    6fa2:	c3                   	ret
    6fa3:	b0 01                	mov    $0x1,%al
    6fa5:	e8 08 06             	call   0x75b0
    6fa8:	c3                   	ret
    6fa9:	b0 00                	mov    $0x0,%al
    6fab:	e8 02 06             	call   0x75b0
    6fae:	c3                   	ret
    6faf:	e8 08 0c             	call   0x7bba
    6fb2:	75 18                	jne    0x6fcc
    6fb4:	e8 7c 00             	call   0x7033
    6fb7:	e8 d7 fb             	call   0x6b91
    6fba:	80 f9 01             	cmp    $0x1,%cl
    6fbd:	75 0e                	jne    0x6fcd
    6fbf:	51                   	push   %cx
    6fc0:	e8 30 06             	call   0x75f3
    6fc3:	b5 01                	mov    $0x1,%ch
    6fc5:	e8 dd fc             	call   0x6ca5
    6fc8:	59                   	pop    %cx
    6fc9:	e8 dd ff             	call   0x6fa9
    6fcc:	c3                   	ret
    6fcd:	e8 d3 ff             	call   0x6fa3
    6fd0:	51                   	push   %cx
    6fd1:	e8 51 06             	call   0x7625
    6fd4:	b5 00                	mov    $0x0,%ch
    6fd6:	e8 cc fc             	call   0x6ca5
    6fd9:	59                   	pop    %cx
    6fda:	c3                   	ret
    6fdb:	b8 02 00             	mov    $0x2,%ax
    6fde:	e8 b0 fb             	call   0x6b91
    6fe1:	74 03                	je     0x6fe6
    6fe3:	e8 75 06             	call   0x765b
    6fe6:	c3                   	ret
    6fe7:	e8 c6 04             	call   0x74b0
    6fea:	3b c1                	cmp    %cx,%ax
    6fec:	7c 35                	jl     0x7023
    6fee:	8b c1                	mov    %cx,%ax
    6ff0:	e8 06 05             	call   0x74f9
    6ff3:	e8 3b 07             	call   0x7731
    6ff6:	8b c8                	mov    %ax,%cx
    6ff8:	51                   	push   %cx
    6ff9:	e8 36 05             	call   0x7532
    6ffc:	e8 fa 04             	call   0x74f9
    6fff:	59                   	pop    %cx
    7000:	e8 2e 07             	call   0x7731
    7003:	3b c8                	cmp    %ax,%cx
    7005:	72 02                	jb     0x7009
    7007:	8b c1                	mov    %cx,%ax
    7009:	8d 5c 04             	lea    0x4(%si),%bx
    700c:	e8 04 0e             	call   0x7e13
    700f:	32 c9                	xor    %cl,%cl
    7011:	e8 d8 0a             	call   0x7aec
    7014:	fe c1                	inc    %cl
    7016:	38 c1                	cmp    %al,%cl
    7018:	72 f7                	jb     0x7011
    701a:	8d 5c 04             	lea    0x4(%si),%bx
    701d:	e8 7b 0e             	call   0x7e9b
    7020:	0b c0                	or     %ax,%ax
    7022:	c3                   	ret
    7023:	33 c0                	xor    %ax,%ax
    7025:	c3                   	ret
    7026:	bb 00 48             	mov    $0x4800,%bx
    7029:	33 c0                	xor    %ax,%ax
    702b:	8a c2                	mov    %dl,%al
    702d:	c1 e0 02             	shl    $0x2,%ax
    7030:	03 d8                	add    %ax,%bx
    7032:	c3                   	ret
    7033:	53                   	push   %bx
    7034:	bb 03 00             	mov    $0x3,%bx
    7037:	e8 79 07             	call   0x77b3
    703a:	66 25 ff 0f 00 00    	and    $0xfff,%eax
    7040:	5b                   	pop    %bx
    7041:	c3                   	ret
    7042:	53                   	push   %bx
    7043:	66 50                	push   %eax
    7045:	66 51                	push   %ecx
    7047:	66 8b c8             	mov    %eax,%ecx
    704a:	bb 03 00             	mov    $0x3,%bx
    704d:	e8 63 07             	call   0x77b3
    7050:	66 23 c2             	and    %edx,%eax
    7053:	66 0b c1             	or     %ecx,%eax
    7056:	e8 63 07             	call   0x77bc
    7059:	66 59                	pop    %ecx
    705b:	66 58                	pop    %eax
    705d:	5b                   	pop    %bx
    705e:	c3                   	ret
    705f:	66 50                	push   %eax
    7061:	bb 05 00             	mov    $0x5,%bx
    7064:	e8 4c 07             	call   0x77b3
    7067:	25 ff 0f             	and    $0xfff,%ax
    706a:	8b c8                	mov    %ax,%cx
    706c:	66 58                	pop    %eax
    706e:	c3                   	ret
    706f:	e8 1f 09             	call   0x7991
    7072:	23 c8                	and    %ax,%cx
    7074:	66 50                	push   %eax
    7076:	bb 05 00             	mov    $0x5,%bx
    7079:	e8 37 07             	call   0x77b3
    707c:	25 00 f0             	and    $0xf000,%ax
    707f:	0b c1                	or     %cx,%ax
    7081:	e8 38 07             	call   0x77bc
    7084:	66 58                	pop    %eax
    7086:	c3                   	ret
    7087:	66 50                	push   %eax
    7089:	53                   	push   %bx
    708a:	bb 06 00             	mov    $0x6,%bx
    708d:	e8 23 07             	call   0x77b3
    7090:	a8 10                	test   $0x10,%al
    7092:	75 09                	jne    0x709d
    7094:	bb f0 46             	mov    $0x46f0,%bx
    7097:	e8 01 0e             	call   0x7e9b
    709a:	3d 5a a5             	cmp    $0xa55a,%ax
    709d:	5b                   	pop    %bx
    709e:	66 58                	pop    %eax
    70a0:	c3                   	ret
    70a1:	66 50                	push   %eax
    70a3:	53                   	push   %bx
    70a4:	bb 06 00             	mov    $0x6,%bx
    70a7:	e8 09 07             	call   0x77b3
    70aa:	80 f1 01             	xor    $0x1,%cl
    70ad:	c0 e1 04             	shl    $0x4,%cl
    70b0:	24 ef                	and    $0xef,%al
    70b2:	0a c1                	or     %cl,%al
    70b4:	e8 05 07             	call   0x77bc
    70b7:	5b                   	pop    %bx
    70b8:	66 58                	pop    %eax
    70ba:	c3                   	ret
    70bb:	53                   	push   %bx
    70bc:	66 50                	push   %eax
    70be:	bb f8 46             	mov    $0x46f8,%bx
    70c1:	e8 d7 0d             	call   0x7e9b
    70c4:	8a c1                	mov    %cl,%al
    70c6:	e8 32 0d             	call   0x7dfb
    70c9:	66 58                	pop    %eax
    70cb:	5b                   	pop    %bx
    70cc:	c3                   	ret
    70cd:	53                   	push   %bx
    70ce:	bb f8 46             	mov    $0x46f8,%bx
    70d1:	e8 c7 0d             	call   0x7e9b
    70d4:	83 e0 01             	and    $0x1,%ax
    70d7:	5b                   	pop    %bx
    70d8:	c3                   	ret
    70d9:	53                   	push   %bx
    70da:	66 50                	push   %eax
    70dc:	bb 07 00             	mov    $0x7,%bx
    70df:	e8 d1 06             	call   0x77b3
    70e2:	f6 c4 01             	test   $0x1,%ah
    70e5:	66 58                	pop    %eax
    70e7:	b0 06                	mov    $0x6,%al
    70e9:	74 02                	je     0x70ed
    70eb:	b0 08                	mov    $0x8,%al
    70ed:	5b                   	pop    %bx
    70ee:	c3                   	ret
    70ef:	53                   	push   %bx
    70f0:	bb 07 00             	mov    $0x7,%bx
    70f3:	e8 bd 06             	call   0x77b3
    70f6:	80 e4 fe             	and    $0xfe,%ah
    70f9:	80 fd 06             	cmp    $0x6,%ch
    70fc:	74 03                	je     0x7101
    70fe:	80 cc 01             	or     $0x1,%ah
    7101:	e8 b8 06             	call   0x77bc
    7104:	5b                   	pop    %bx
    7105:	c3                   	ret
    7106:	66 50                	push   %eax
    7108:	bb 06 00             	mov    $0x6,%bx
    710b:	e8 a5 06             	call   0x77b3
    710e:	24 40                	and    $0x40,%al
    7110:	c0 e8 06             	shr    $0x6,%al
    7113:	8a d8                	mov    %al,%bl
    7115:	66 58                	pop    %eax
    7117:	c3                   	ret
    7118:	c3                   	ret
    7119:	50                   	push   %ax
    711a:	66 51                	push   %ecx
    711c:	e8 72 fa             	call   0x6b91
    711f:	83 ec 04             	sub    $0x4,%sp
    7122:	8b ec                	mov    %sp,%bp
    7124:	66 33 c0             	xor    %eax,%eax
    7127:	66 89 46 00          	mov    %eax,0x0(%bp)
    712b:	33 d2                	xor    %dx,%dx
    712d:	8d bc c0 01          	lea    0x1c0(%si),%di
    7131:	8d 1d                	lea    (%di),%bx
    7133:	e8 65 0d             	call   0x7e9b
    7136:	0b c0                	or     %ax,%ax
    7138:	74 3d                	je     0x7177
    713a:	8b df                	mov    %di,%bx
    713c:	b0 00                	mov    $0x0,%al
    713e:	e8 2d 01             	call   0x726e
    7141:	74 2f                	je     0x7172
    7143:	8b df                	mov    %di,%bx
    7145:	e8 d7 f7             	call   0x691f
    7148:	66 8b 46 00          	mov    0x0(%bp),%eax
    714c:	3b c8                	cmp    %ax,%cx
    714e:	7f 10                	jg     0x7160
    7150:	72 20                	jb     0x7172
    7152:	66 c1 c8 10          	ror    $0x10,%eax
    7156:	66 c1 c9 10          	ror    $0x10,%ecx
    715a:	3b c8                	cmp    %ax,%cx
    715c:	7f 0e                	jg     0x716c
    715e:	eb 12                	jmp    0x7172
    7160:	66 c1 c8 10          	ror    $0x10,%eax
    7164:	66 c1 c9 10          	ror    $0x10,%ecx
    7168:	3b c8                	cmp    %ax,%cx
    716a:	72 06                	jb     0x7172
    716c:	8b d7                	mov    %di,%dx
    716e:	66 89 4e 00          	mov    %ecx,0x0(%bp)
    7172:	83 c7 1c             	add    $0x1c,%di
    7175:	eb ba                	jmp    0x7131
    7177:	0b d2                	or     %dx,%dx
    7179:	74 0a                	je     0x7185
    717b:	8d 9c a4 01          	lea    0x1a4(%si),%bx
    717f:	e8 73 f7             	call   0x68f5
    7182:	e9 88 00             	jmp    0x720d
    7185:	66 33 c0             	xor    %eax,%eax
    7188:	66 89 46 00          	mov    %eax,0x0(%bp)
    718c:	8d bc 4c 02          	lea    0x24c(%si),%di
    7190:	33 d2                	xor    %dx,%dx
    7192:	8d 1d                	lea    (%di),%bx
    7194:	e8 04 0d             	call   0x7e9b
    7197:	0b c0                	or     %ax,%ax
    7199:	74 58                	je     0x71f3
    719b:	66 50                	push   %eax
    719d:	e8 e1 f3             	call   0x6581
    71a0:	3c 01                	cmp    $0x1,%al
    71a2:	66 58                	pop    %eax
    71a4:	74 05                	je     0x71ab
    71a6:	3d 40 06             	cmp    $0x640,%ax
    71a9:	73 43                	jae    0x71ee
    71ab:	66 52                	push   %edx
    71ad:	66 8b d0             	mov    %eax,%edx
    71b0:	8d 5d 04             	lea    0x4(%di),%bx
    71b3:	e8 e5 0c             	call   0x7e9b
    71b6:	e8 5d 00             	call   0x7216
    71b9:	8b ca                	mov    %dx,%cx
    71bb:	66 5a                	pop    %edx
    71bd:	74 2f                	je     0x71ee
    71bf:	56                   	push   %si
    71c0:	8d 9c a4 01          	lea    0x1a4(%si),%bx
    71c4:	8b f1                	mov    %cx,%si
    71c6:	e8 4b f7             	call   0x6914
    71c9:	5e                   	pop    %si
    71ca:	b0 00                	mov    $0x0,%al
    71cc:	e8 9f 00             	call   0x726e
    71cf:	74 1d                	je     0x71ee
    71d1:	8d 1d                	lea    (%di),%bx
    71d3:	e8 c5 0c             	call   0x7e9b
    71d6:	8b d9                	mov    %cx,%bx
    71d8:	8b 47 06             	mov    0x6(%bx),%ax
    71db:	66 c1 e0 10          	shl    $0x10,%eax
    71df:	8b 47 02             	mov    0x2(%bx),%ax
    71e2:	66 3b 46 00          	cmp    0x0(%bp),%eax
    71e6:	72 06                	jb     0x71ee
    71e8:	8b d1                	mov    %cx,%dx
    71ea:	66 89 46 00          	mov    %eax,0x0(%bp)
    71ee:	83 c7 08             	add    $0x8,%di
    71f1:	eb 9f                	jmp    0x7192
    71f3:	0b d2                	or     %dx,%dx
    71f5:	74 16                	je     0x720d
    71f7:	56                   	push   %si
    71f8:	8d 9c a4 01          	lea    0x1a4(%si),%bx
    71fc:	8b f2                	mov    %dx,%si
    71fe:	e8 13 f7             	call   0x6914
    7201:	5e                   	pop    %si
    7202:	53                   	push   %bx
    7203:	8d 9c ba 01          	lea    0x1ba(%si),%bx
    7207:	33 c0                	xor    %ax,%ax
    7209:	e8 07 0c             	call   0x7e13
    720c:	5b                   	pop    %bx
    720d:	83 c4 04             	add    $0x4,%sp
    7210:	0b d2                	or     %dx,%dx
    7212:	66 59                	pop    %ecx
    7214:	58                   	pop    %ax
    7215:	c3                   	ret
    7216:	57                   	push   %di
    7217:	53                   	push   %bx
    7218:	51                   	push   %cx
    7219:	e8 e6 07             	call   0x7a02
    721c:	3b 55 02             	cmp    0x2(%di),%dx
    721f:	75 18                	jne    0x7239
    7221:	66 c1 ca 10          	ror    $0x10,%edx
    7225:	8b da                	mov    %dx,%bx
    7227:	66 c1 ca 10          	ror    $0x10,%edx
    722b:	3b 5d 06             	cmp    0x6(%di),%bx
    722e:	75 09                	jne    0x7239
    7230:	0a c0                	or     %al,%al
    7232:	74 0e                	je     0x7242
    7234:	3a 45 1b             	cmp    0x1b(%di),%al
    7237:	74 09                	je     0x7242
    7239:	83 c7 1c             	add    $0x1c,%di
    723c:	e2 de                	loop   0x721c
    723e:	33 d2                	xor    %dx,%dx
    7240:	eb 02                	jmp    0x7244
    7242:	8b d7                	mov    %di,%dx
    7244:	0b d2                	or     %dx,%dx
    7246:	59                   	pop    %cx
    7247:	5b                   	pop    %bx
    7248:	5f                   	pop    %di
    7249:	c3                   	ret
    724a:	51                   	push   %cx
    724b:	66 52                	push   %edx
    724d:	e8 b2 07             	call   0x7a02
    7250:	3a 65 1a             	cmp    0x1a(%di),%ah
    7253:	75 09                	jne    0x725e
    7255:	0a c0                	or     %al,%al
    7257:	74 0e                	je     0x7267
    7259:	3a 45 1b             	cmp    0x1b(%di),%al
    725c:	74 09                	je     0x7267
    725e:	83 c7 1c             	add    $0x1c,%di
    7261:	e2 ed                	loop   0x7250
    7263:	33 ff                	xor    %di,%di
    7265:	eb 00                	jmp    0x7267
    7267:	0b ff                	or     %di,%di
    7269:	66 5a                	pop    %edx
    726b:	59                   	pop    %cx
    726c:	c3                   	ret
    726d:	c3                   	ret
    726e:	66 51                	push   %ecx
    7270:	66 52                	push   %edx
    7272:	53                   	push   %bx
    7273:	53                   	push   %bx
    7274:	66 c1 ce 10          	ror    $0x10,%esi
    7278:	8b de                	mov    %si,%bx
    727a:	66 c1 ce 10          	ror    $0x10,%esi
    727e:	e8 1a 0c             	call   0x7e9b
    7281:	5b                   	pop    %bx
    7282:	66 8b d0             	mov    %eax,%edx
    7285:	e8 97 f6             	call   0x691f
    7288:	3b ca                	cmp    %dx,%cx
    728a:	72 0a                	jb     0x7296
    728c:	66 3b ca             	cmp    %edx,%ecx
    728f:	72 05                	jb     0x7296
    7291:	e8 8a f8             	call   0x6b1e
    7294:	75 02                	jne    0x7298
    7296:	32 c0                	xor    %al,%al
    7298:	5b                   	pop    %bx
    7299:	66 5a                	pop    %edx
    729b:	66 59                	pop    %ecx
    729d:	c3                   	ret
    729e:	56                   	push   %si
    729f:	57                   	push   %di
    72a0:	e8 a7 ff             	call   0x724a
    72a3:	8b f7                	mov    %di,%si
    72a5:	e8 6c f6             	call   0x6914
    72a8:	5f                   	pop    %di
    72a9:	5e                   	pop    %si
    72aa:	c3                   	ret
    72ab:	66 50                	push   %eax
    72ad:	53                   	push   %bx
    72ae:	66 51                	push   %ecx
    72b0:	52                   	push   %dx
    72b1:	57                   	push   %di
    72b2:	56                   	push   %si
    72b3:	51                   	push   %cx
    72b4:	8b de                	mov    %si,%bx
    72b6:	b9 08 00             	mov    $0x8,%cx
    72b9:	e8 36 08             	call   0x7af2
    72bc:	59                   	pop    %cx
    72bd:	8d 5c 08             	lea    0x8(%si),%bx
    72c0:	8b c1                	mov    %cx,%ax
    72c2:	66 c1 e0 10          	shl    $0x10,%eax
    72c6:	8a c2                	mov    %dl,%al
    72c8:	e8 30 0b             	call   0x7dfb
    72cb:	f6 c2 03             	test   $0x3,%dl
    72ce:	75 24                	jne    0x72f4
    72d0:	8b c1                	mov    %cx,%ax
    72d2:	24 7f                	and    $0x7f,%al
    72d4:	bf f6 73             	mov    $0x73f6,%di
    72d7:	80 3d ff             	cmpb   $0xff,(%di)
    72da:	0f 84 0f 01          	je     0x73ed
    72de:	3a 05                	cmp    (%di),%al
    72e0:	75 0d                	jne    0x72ef
    72e2:	66 8b 45 01          	mov    0x1(%di),%eax
    72e6:	66 b9 00 05 02 00    	mov    $0x20500,%ecx
    72ec:	e9 96 00             	jmp    0x7385
    72ef:	83 c7 05             	add    $0x5,%di
    72f2:	eb e3                	jmp    0x72d7
    72f4:	f6 c2 01             	test   $0x1,%dl
    72f7:	74 25                	je     0x731e
    72f9:	8b c1                	mov    %cx,%ax
    72fb:	e8 70 01             	call   0x746e
    72fe:	0f 84 eb 00          	je     0x73ed
    7302:	33 c9                	xor    %cx,%cx
    7304:	8a cc                	mov    %ah,%cl
    7306:	8a d0                	mov    %al,%dl
    7308:	0a c0                	or     %al,%al
    730a:	75 12                	jne    0x731e
    730c:	8d 5c 08             	lea    0x8(%si),%bx
    730f:	66 25 ff ff 00 00    	and    $0xffff,%eax
    7315:	66 c1 e0 08          	shl    $0x8,%eax
    7319:	e8 df 0a             	call   0x7dfb
    731c:	eb b2                	jmp    0x72d0
    731e:	8a e1                	mov    %cl,%ah
    7320:	8a ca                	mov    %dl,%cl
    7322:	80 e1 0c             	and    $0xc,%cl
    7325:	c0 e9 02             	shr    $0x2,%cl
    7328:	80 e2 f0             	and    $0xf0,%dl
    732b:	c0 ea 04             	shr    $0x4,%dl
    732e:	8a ea                	mov    %dl,%ch
    7330:	80 fc 70             	cmp    $0x70,%ah
    7333:	72 2a                	jb     0x735f
    7335:	80 fc 75             	cmp    $0x75,%ah
    7338:	73 25                	jae    0x735f
    733a:	80 ec 70             	sub    $0x70,%ah
    733d:	8a c4                	mov    %ah,%al
    733f:	32 e4                	xor    %ah,%ah
    7341:	50                   	push   %ax
    7342:	e8 30 02             	call   0x7575
    7345:	8b d8                	mov    %ax,%bx
    7347:	58                   	pop    %ax
    7348:	38 d8                	cmp    %bl,%al
    734a:	72 05                	jb     0x7351
    734c:	33 c0                	xor    %ax,%ax
    734e:	e9 9c 00             	jmp    0x73ed
    7351:	e8 28 02             	call   0x757c
    7354:	e8 44 0b             	call   0x7e9b
    7357:	0b c0                	or     %ax,%ax
    7359:	0f 84 90 00          	je     0x73ed
    735d:	eb 1b                	jmp    0x737a
    735f:	32 c0                	xor    %al,%al
    7361:	e8 e6 fe             	call   0x724a
    7364:	0f 84 85 00          	je     0x73ed
    7368:	8d 5c 16             	lea    0x16(%si),%bx
    736b:	8b 05                	mov    (%di),%ax
    736d:	e8 a3 0a             	call   0x7e13
    7370:	8b 45 06             	mov    0x6(%di),%ax
    7373:	66 c1 e0 10          	shl    $0x10,%eax
    7377:	8b 45 02             	mov    0x2(%di),%ax
    737a:	50                   	push   %ax
    737b:	e8 b3 03             	call   0x7731
    737e:	66 c1 e1 10          	shl    $0x10,%ecx
    7382:	8b c8                	mov    %ax,%cx
    7384:	58                   	pop    %ax
    7385:	8d 1c                	lea    (%si),%bx
    7387:	e8 71 0a             	call   0x7dfb
    738a:	66 50                	push   %eax
    738c:	8d 5c 04             	lea    0x4(%si),%bx
    738f:	66 8b c1             	mov    %ecx,%eax
    7392:	e8 66 0a             	call   0x7dfb
    7395:	66 58                	pop    %eax
    7397:	66 c1 e8 10          	shr    $0x10,%eax
    739b:	66 81 e1 ff ff 00 00 	and    $0xffff,%ecx
    73a2:	66 f7 e1             	mul    %ecx
    73a5:	66 50                	push   %eax
    73a7:	8d 5c 06             	lea    0x6(%si),%bx
    73aa:	e8 ee 0a             	call   0x7e9b
    73ad:	8b c8                	mov    %ax,%cx
    73af:	66 58                	pop    %eax
    73b1:	66 d3 e0             	shl    %cl,%eax
    73b4:	66 c1 e8 10          	shr    $0x10,%eax
    73b8:	40                   	inc    %ax
    73b9:	8d 5c 14             	lea    0x14(%si),%bx
    73bc:	e8 54 0a             	call   0x7e13
    73bf:	bf 56 74             	mov    $0x7456,%di
    73c2:	83 f9 01             	cmp    $0x1,%cx
    73c5:	74 11                	je     0x73d8
    73c7:	bf 5e 74             	mov    $0x745e,%di
    73ca:	81 f9 01 01          	cmp    $0x101,%cx
    73ce:	74 08                	je     0x73d8
    73d0:	bf 66 74             	mov    $0x7466,%di
    73d3:	83 f9 02             	cmp    $0x2,%cx
    73d6:	75 15                	jne    0x73ed
    73d8:	8d 5c 0c             	lea    0xc(%si),%bx
    73db:	66 8b 05             	mov    (%di),%eax
    73de:	e8 1a 0a             	call   0x7dfb
    73e1:	8d 5c 10             	lea    0x10(%si),%bx
    73e4:	66 8b 45 04          	mov    0x4(%di),%eax
    73e8:	e8 10 0a             	call   0x7dfb
    73eb:	0b db                	or     %bx,%bx
    73ed:	5e                   	pop    %si
    73ee:	5f                   	pop    %di
    73ef:	5a                   	pop    %dx
    73f0:	66 59                	pop    %ecx
    73f2:	5b                   	pop    %bx
    73f3:	66 58                	pop    %eax
    73f5:	c3                   	ret
    73f6:	00 40 01             	add    %al,0x1(%bx,%si)
    73f9:	90                   	nop
    73fa:	01 01                	add    %ax,(%bx,%di)
    73fc:	40                   	inc    %ax
    73fd:	01 90 01 02          	add    %dx,0x201(%bx,%si)
    7401:	80 02 90             	addb   $0x90,(%bp,%si)
    7404:	01 03                	add    %ax,(%bp,%di)
    7406:	80 02 90             	addb   $0x90,(%bp,%si)
    7409:	01 04                	add    %ax,(%si)
    740b:	40                   	inc    %ax
    740c:	01 90 01 05          	add    %dx,0x501(%bx,%si)
    7410:	40                   	inc    %ax
    7411:	01 90 01 06          	add    %dx,0x601(%bx,%si)
    7415:	80 02 90             	addb   $0x90,(%bp,%si)
    7418:	01 07                	add    %ax,(%bx)
    741a:	d0 02                	rolb   $1,(%bp,%si)
    741c:	5e                   	pop    %si
    741d:	01 0d                	add    %cx,(%di)
    741f:	40                   	inc    %ax
    7420:	01 90 01 0e          	add    %dx,0xe01(%bx,%si)
    7424:	80 02 90             	addb   $0x90,(%bp,%si)
    7427:	01 0f                	add    %cx,(%bx)
    7429:	80 02 5e             	addb   $0x5e,(%bp,%si)
    742c:	01 10                	add    %dx,(%bx,%si)
    742e:	80 02 5e             	addb   $0x5e,(%bp,%si)
    7431:	01 11                	add    %dx,(%bx,%di)
    7433:	80 02 e0             	addb   $0xe0,(%bp,%si)
    7436:	01 12                	add    %dx,(%bp,%si)
    7438:	80 02 e0             	addb   $0xe0,(%bp,%si)
    743b:	01 13                	add    %dx,(%bp,%di)
    743d:	80 02 90             	addb   $0x90,(%bp,%si)
    7440:	01 23                	add    %sp,(%bp,%di)
    7442:	20 04                	and    %al,(%si)
    7444:	90                   	nop
    7445:	01 32                	add    %si,(%bp,%si)
    7447:	20 04                	and    %al,(%si)
    7449:	b0 02                	mov    $0x2,%al
    744b:	33 20                	xor    (%bx,%si),%sp
    744d:	04 c0                	add    $0xc0,%al
    744f:	02 62 80             	add    -0x80(%bp,%si),%ah
    7452:	02 e0                	add    %al,%ah
    7454:	01 ff                	add    %di,%di
    7456:	05 0a 05             	add    $0x50a,%ax
    7459:	05 05 00             	add    $0x5,%ax
    745c:	00 00                	add    %al,(%bx,%si)
    745e:	05 0b 06             	add    $0x60b,%ax
    7461:	05 05 00             	add    $0x5,%ax
    7464:	00 00                	add    %al,(%bx,%si)
    7466:	08 10                	or     %dl,(%bx,%si)
    7468:	08 08                	or     %cl,(%bx,%si)
    746a:	08 00                	or     %al,(%bx,%si)
    746c:	00 00                	add    %al,(%bx,%si)
    746e:	56                   	push   %si
    746f:	e8 9b 07             	call   0x7c0d
    7472:	80 e4 01             	and    $0x1,%ah
    7475:	3b 04                	cmp    (%si),%ax
    7477:	74 09                	je     0x7482
    7479:	83 c6 04             	add    $0x4,%si
    747c:	e2 f7                	loop   0x7475
    747e:	33 c0                	xor    %ax,%ax
    7480:	eb 05                	jmp    0x7487
    7482:	8b 44 02             	mov    0x2(%si),%ax
    7485:	0b c0                	or     %ax,%ax
    7487:	5e                   	pop    %si
    7488:	c3                   	ret
    7489:	57                   	push   %di
    748a:	53                   	push   %bx
    748b:	50                   	push   %ax
    748c:	e8 7e 07             	call   0x7c0d
    748f:	83 e9 0a             	sub    $0xa,%cx
    7492:	e8 e0 00             	call   0x7575
    7495:	83 f8 05             	cmp    $0x5,%ax
    7498:	76 03                	jbe    0x749d
    749a:	b8 05 00             	mov    $0x5,%ax
    749d:	d1 e0                	shl    $1,%ax
    749f:	03 c8                	add    %ax,%cx
    74a1:	fb                   	sti
    74a2:	a5                   	movsw  %ds:(%si),%es:(%di)
    74a3:	83 c6 02             	add    $0x2,%si
    74a6:	e2 fa                	loop   0x74a2
    74a8:	b8 ff ff             	mov    $0xffff,%ax
    74ab:	ab                   	stos   %ax,%es:(%di)
    74ac:	58                   	pop    %ax
    74ad:	5b                   	pop    %bx
    74ae:	5f                   	pop    %di
    74af:	c3                   	ret
    74b0:	66 53                	push   %ebx
    74b2:	51                   	push   %cx
    74b3:	66 52                	push   %edx
    74b5:	e8 41 00             	call   0x74f9
    74b8:	e8 77 00             	call   0x7532
    74bb:	66 c1 e8 10          	shr    $0x10,%eax
    74bf:	66 0f b7 d8          	movzwl %ax,%ebx
    74c3:	66 b8 00 00 00 03    	mov    $0x3000000,%eax
    74c9:	66 d3 e8             	shr    %cl,%eax
    74cc:	66 33 d2             	xor    %edx,%edx
    74cf:	66 f7 f3             	div    %ebx
    74d2:	e8 5c 02             	call   0x7731
    74d5:	66 5a                	pop    %edx
    74d7:	59                   	pop    %cx
    74d8:	66 5b                	pop    %ebx
    74da:	c3                   	ret
    74db:	53                   	push   %bx
    74dc:	66 50                	push   %eax
    74de:	bb 07 00             	mov    $0x7,%bx
    74e1:	e8 cf 02             	call   0x77b3
    74e4:	0a c0                	or     %al,%al
    74e6:	66 58                	pop    %eax
    74e8:	5b                   	pop    %bx
    74e9:	c3                   	ret
    74ea:	53                   	push   %bx
    74eb:	66 50                	push   %eax
    74ed:	bb 07 00             	mov    $0x7,%bx
    74f0:	e8 c0 02             	call   0x77b3
    74f3:	a8 01                	test   $0x1,%al
    74f5:	66 58                	pop    %eax
    74f7:	5b                   	pop    %bx
    74f8:	c3                   	ret
    74f9:	53                   	push   %bx
    74fa:	66 50                	push   %eax
    74fc:	8d 5c 06             	lea    0x6(%si),%bx
    74ff:	e8 99 09             	call   0x7e9b
    7502:	8a c8                	mov    %al,%cl
    7504:	66 58                	pop    %eax
    7506:	5b                   	pop    %bx
    7507:	c3                   	ret
    7508:	51                   	push   %cx
    7509:	b9 08 00             	mov    $0x8,%cx
    750c:	e8 f8 05             	call   0x7b07
    750f:	59                   	pop    %cx
    7510:	c3                   	ret
    7511:	53                   	push   %bx
    7512:	8d 5c 08             	lea    0x8(%si),%bx
    7515:	e8 83 09             	call   0x7e9b
    7518:	24 03                	and    $0x3,%al
    751a:	5b                   	pop    %bx
    751b:	c3                   	ret
    751c:	8d 5c 09             	lea    0x9(%si),%bx
    751f:	e8 79 09             	call   0x7e9b
    7522:	c3                   	ret
    7523:	51                   	push   %cx
    7524:	53                   	push   %bx
    7525:	b1 01                	mov    $0x1,%cl
    7527:	8a e8                	mov    %al,%ch
    7529:	8d 5c 08             	lea    0x8(%si),%bx
    752c:	e8 10 09             	call   0x7e3f
    752f:	5b                   	pop    %bx
    7530:	59                   	pop    %cx
    7531:	c3                   	ret
    7532:	53                   	push   %bx
    7533:	8d 1c                	lea    (%si),%bx
    7535:	e8 63 09             	call   0x7e9b
    7538:	5b                   	pop    %bx
    7539:	c3                   	ret
    753a:	53                   	push   %bx
    753b:	8d 5c 04             	lea    0x4(%si),%bx
    753e:	e8 5a 09             	call   0x7e9b
    7541:	5b                   	pop    %bx
    7542:	c3                   	ret
    7543:	53                   	push   %bx
    7544:	8d 5c 16             	lea    0x16(%si),%bx
    7547:	e8 51 09             	call   0x7e9b
    754a:	5b                   	pop    %bx
    754b:	c3                   	ret
    754c:	53                   	push   %bx
    754d:	66 52                	push   %edx
    754f:	33 c0                	xor    %ax,%ax
    7551:	e8 c2 fc             	call   0x7216
    7554:	66 5a                	pop    %edx
    7556:	75 1b                	jne    0x7573
    7558:	e8 34 00             	call   0x758f
    755b:	74 16                	je     0x7573
    755d:	e8 15 00             	call   0x7575
    7560:	40                   	inc    %ax
    7561:	83 f8 05             	cmp    $0x5,%ax
    7564:	73 0d                	jae    0x7573
    7566:	e8 92 08             	call   0x7dfb
    7569:	48                   	dec    %ax
    756a:	e8 0f 00             	call   0x757c
    756d:	66 8b c2             	mov    %edx,%eax
    7570:	e8 88 08             	call   0x7dfb
    7573:	5b                   	pop    %bx
    7574:	c3                   	ret
    7575:	bb 00 4e             	mov    $0x4e00,%bx
    7578:	e8 20 09             	call   0x7e9b
    757b:	c3                   	ret
    757c:	bb 08 4e             	mov    $0x4e08,%bx
    757f:	c1 e0 03             	shl    $0x3,%ax
    7582:	03 d8                	add    %ax,%bx
    7584:	c3                   	ret
    7585:	bb 00 4e             	mov    $0x4e00,%bx
    7588:	b9 32 00             	mov    $0x32,%cx
    758b:	e8 64 05             	call   0x7af2
    758e:	c3                   	ret
    758f:	51                   	push   %cx
    7590:	e8 e2 ff             	call   0x7575
    7593:	0b c0                	or     %ax,%ax
    7595:	74 12                	je     0x75a9
    7597:	8b c8                	mov    %ax,%cx
    7599:	bb 08 4e             	mov    $0x4e08,%bx
    759c:	e8 fc 08             	call   0x7e9b
    759f:	66 3b c2             	cmp    %edx,%eax
    75a2:	74 07                	je     0x75ab
    75a4:	83 c3 08             	add    $0x8,%bx
    75a7:	e2 f3                	loop   0x759c
    75a9:	0b db                	or     %bx,%bx
    75ab:	59                   	pop    %cx
    75ac:	c3                   	ret
    75ad:	c3                   	ret
    75ae:	c3                   	ret
    75af:	00 8a e8 bb          	add    %cl,-0x4418(%bp,%si)
    75b3:	20 df                	and    %bl,%bh
    75b5:	3c 01                	cmp    $0x1,%al
    75b7:	74 02                	je     0x75bb
    75b9:	32 db                	xor    %bl,%bl
    75bb:	e8 23 29             	call   0x9ee1
    75be:	e8 5a f6             	call   0x6c1b
    75c1:	66 b8 80 06 00 08    	mov    $0x8000680,%eax
    75c7:	66 33 db             	xor    %ebx,%ebx
    75ca:	8a d9                	mov    %cl,%bl
    75cc:	8a cd                	mov    %ch,%cl
    75ce:	e8 cc 00             	call   0x769d
    75d1:	c3                   	ret
    75d2:	66 51                	push   %ecx
    75d4:	66 52                	push   %edx
    75d6:	66 57                	push   %edi
    75d8:	66 b8 80 05 00 08    	mov    $0x8000580,%eax
    75de:	66 bb 00 4c 00 00    	mov    $0x4c00,%ebx
    75e4:	66 33 c9             	xor    %ecx,%ecx
    75e7:	8b ce                	mov    %si,%cx
    75e9:	e8 b1 00             	call   0x769d
    75ec:	66 5f                	pop    %edi
    75ee:	66 5a                	pop    %edx
    75f0:	66 59                	pop    %ecx
    75f2:	c3                   	ret
    75f3:	66 50                	push   %eax
    75f5:	66 53                	push   %ebx
    75f7:	66 b8 10 00 00 02    	mov    $0x2000010,%eax
    75fd:	bb 08 00             	mov    $0x8,%bx
    7600:	e8 b9 01             	call   0x77bc
    7603:	66 5b                	pop    %ebx
    7605:	66 58                	pop    %eax
    7607:	66 b8 80 07 00 04    	mov    $0x4000780,%eax
    760d:	66 33 db             	xor    %ebx,%ebx
    7610:	8b de                	mov    %si,%bx
    7612:	e8 88 00             	call   0x769d
    7615:	c3                   	ret
    7616:	66 b8 80 08 00 04    	mov    $0x4000880,%eax
    761c:	66 33 db             	xor    %ebx,%ebx
    761f:	8b de                	mov    %si,%bx
    7621:	e8 79 00             	call   0x769d
    7624:	c3                   	ret
    7625:	66 b8 80 09 00 04    	mov    $0x4000980,%eax
    762b:	66 33 db             	xor    %ebx,%ebx
    762e:	8b de                	mov    %si,%bx
    7630:	e8 6a 00             	call   0x769d
    7633:	c3                   	ret
    7634:	c3                   	ret
    7635:	66 b8 80 0a 00 04    	mov    $0x4000a80,%eax
    763b:	66 33 db             	xor    %ebx,%ebx
    763e:	8b de                	mov    %si,%bx
    7640:	e8 5a 00             	call   0x769d
    7643:	e8 57 ef             	call   0x659d
    7646:	f6 c3 02             	test   $0x2,%bl
    7649:	74 03                	je     0x764e
    764b:	b0 00                	mov    $0x0,%al
    764d:	c3                   	ret
    764e:	b0 01                	mov    $0x1,%al
    7650:	c3                   	ret
    7651:	66 b8 80 0d 00 00    	mov    $0xd80,%eax
    7657:	e8 43 00             	call   0x769d
    765a:	c3                   	ret
    765b:	66 b8 80 0f 00 04    	mov    $0x4000f80,%eax
    7661:	66 33 db             	xor    %ebx,%ebx
    7664:	8a d9                	mov    %cl,%bl
    7666:	e8 34 00             	call   0x769d
    7669:	66 b8 80 0f 00 04    	mov    $0x4000f80,%eax
    766f:	66 33 db             	xor    %ebx,%ebx
    7672:	56                   	push   %si
    7673:	e8 59 03             	call   0x79cf
    7676:	03 74 04             	add    0x4(%si),%si
    7679:	8b 1c                	mov    (%si),%bx
    767b:	5e                   	pop    %si
    767c:	e8 1e 00             	call   0x769d
    767f:	c3                   	ret
    7680:	66 b8 00 00 00 00    	mov    $0x0,%eax
    7686:	e8 14 00             	call   0x769d
    7689:	66 b8 80 0c 00 04    	mov    $0x4000c80,%eax
    768f:	e8 0b 00             	call   0x769d
    7692:	c3                   	ret
    7693:	66 b8 00 01 00 00    	mov    $0x100,%eax
    7699:	e8 01 00             	call   0x769d
    769c:	c3                   	ret
    769d:	83 ec 1c             	sub    $0x1c,%sp
    76a0:	8b ec                	mov    %sp,%bp
    76a2:	66 89 46 00          	mov    %eax,0x0(%bp)
    76a6:	66 89 5e 04          	mov    %ebx,0x4(%bp)
    76aa:	66 89 4e 08          	mov    %ecx,0x8(%bp)
    76ae:	66 89 56 0c          	mov    %edx,0xc(%bp)
    76b2:	66 89 7e 10          	mov    %edi,0x10(%bp)
    76b6:	66 89 76 14          	mov    %esi,0x14(%bp)
    76ba:	8c d0                	mov    %ss,%ax
    76bc:	66 c1 e0 10          	shl    $0x10,%eax
    76c0:	8b c4                	mov    %sp,%ax
    76c2:	bb 42 00             	mov    $0x42,%bx
    76c5:	e8 5f 03             	call   0x7a27
    76c8:	83 c4 1c             	add    $0x1c,%sp
    76cb:	c3                   	ret
    76cc:	51                   	push   %cx
    76cd:	8d 5c 14             	lea    0x14(%si),%bx
    76d0:	e8 c8 07             	call   0x7e9b
    76d3:	66 c1 e0 10          	shl    $0x10,%eax
    76d7:	e8 02 00             	call   0x76dc
    76da:	59                   	pop    %cx
    76db:	c3                   	ret
    76dc:	83 ec 1c             	sub    $0x1c,%sp
    76df:	8b ec                	mov    %sp,%bp
    76e1:	66 3d f0 ff ff 03    	cmp    $0x3fffff0,%eax
    76e7:	76 06                	jbe    0x76ef
    76e9:	66 b8 f0 ff ff 03    	mov    $0x3fffff0,%eax
    76ef:	66 8b c8             	mov    %eax,%ecx
    76f2:	66 33 c0             	xor    %eax,%eax
    76f5:	66 89 46 08          	mov    %eax,0x8(%bp)
    76f9:	66 89 46 0c          	mov    %eax,0xc(%bp)
    76fd:	66 89 46 00          	mov    %eax,0x0(%bp)
    7701:	66 89 46 04          	mov    %eax,0x4(%bp)
    7705:	66 89 46 10          	mov    %eax,0x10(%bp)
    7709:	66 89 46 18          	mov    %eax,0x18(%bp)
    770d:	b0 01                	mov    $0x1,%al
    770f:	88 46 10             	mov    %al,0x10(%bp)
    7712:	66 b8 00 00 00 80    	mov    $0x80000000,%eax
    7718:	66 0b c1             	or     %ecx,%eax
    771b:	66 89 46 14          	mov    %eax,0x14(%bp)
    771f:	8c d0                	mov    %ss,%ax
    7721:	66 c1 e0 10          	shl    $0x10,%eax
    7725:	8b c4                	mov    %sp,%ax
    7727:	bb 35 00             	mov    $0x35,%bx
    772a:	e8 fa 02             	call   0x7a27
    772d:	83 c4 1c             	add    $0x1c,%sp
    7730:	c3                   	ret
    7731:	3d c0 7f             	cmp    $0x7fc0,%ax
    7734:	76 04                	jbe    0x773a
    7736:	b8 c0 7f             	mov    $0x7fc0,%ax
    7739:	c3                   	ret
    773a:	83 c0 3f             	add    $0x3f,%ax
    773d:	24 c0                	and    $0xc0,%al
    773f:	c3                   	ret
    7740:	53                   	push   %bx
    7741:	51                   	push   %cx
    7742:	66 50                	push   %eax
    7744:	b9 d0 84             	mov    $0x84d0,%cx
    7747:	80 fb 03             	cmp    $0x3,%bl
    774a:	74 0b                	je     0x7757
    774c:	b9 a0 8c             	mov    $0x8ca0,%cx
    774f:	80 fb 00             	cmp    $0x0,%bl
    7752:	75 03                	jne    0x7757
    7754:	b9 f0 d2             	mov    $0xd2f0,%cx
    7757:	66 33 d2             	xor    %edx,%edx
    775a:	8b d1                	mov    %cx,%dx
    775c:	66 58                	pop    %eax
    775e:	59                   	pop    %cx
    775f:	5b                   	pop    %bx
    7760:	c3                   	ret
    7761:	66 52                	push   %edx
    7763:	b3 00                	mov    $0x0,%bl
    7765:	66 f7 c2 00 00 ff ff 	test   $0xffff0000,%edx
    776c:	75 18                	jne    0x7786
    776e:	80 fd 13             	cmp    $0x13,%ch
    7771:	74 13                	je     0x7786
    7773:	80 fd 17             	cmp    $0x17,%ch
    7776:	74 0e                	je     0x7786
    7778:	80 fd 14             	cmp    $0x14,%ch
    777b:	74 09                	je     0x7786
    777d:	b3 03                	mov    $0x3,%bl
    777f:	80 f9 03             	cmp    $0x3,%cl
    7782:	74 02                	je     0x7786
    7784:	b3 02                	mov    $0x2,%bl
    7786:	66 5a                	pop    %edx
    7788:	c3                   	ret
    7789:	e8 0f 07             	call   0x7e9b
    778c:	66 c1 e8 10          	shr    $0x10,%eax
    7790:	0b c0                	or     %ax,%ax
    7792:	74 1c                	je     0x77b0
    7794:	53                   	push   %bx
    7795:	83 c3 06             	add    $0x6,%bx
    7798:	e8 00 07             	call   0x7e9b
    779b:	5b                   	pop    %bx
    779c:	3d e0 01             	cmp    $0x1e0,%ax
    779f:	72 0f                	jb     0x77b0
    77a1:	53                   	push   %bx
    77a2:	83 c3 18             	add    $0x18,%bx
    77a5:	e8 f3 06             	call   0x7e9b
    77a8:	5b                   	pop    %bx
    77a9:	a8 80                	test   $0x80,%al
    77ab:	75 03                	jne    0x77b0
    77ad:	0c 01                	or     $0x1,%al
    77af:	c3                   	ret
    77b0:	32 c0                	xor    %al,%al
    77b2:	c3                   	ret
    77b3:	53                   	push   %bx
    77b4:	83 c3 4c             	add    $0x4c,%bx
    77b7:	e8 af 06             	call   0x7e69
    77ba:	5b                   	pop    %bx
    77bb:	c3                   	ret
    77bc:	53                   	push   %bx
    77bd:	83 c3 4c             	add    $0x4c,%bx
    77c0:	e8 01 06             	call   0x7dc4
    77c3:	5b                   	pop    %bx
    77c4:	c3                   	ret
    77c5:	56                   	push   %si
    77c6:	e8 06 02             	call   0x79cf
    77c9:	83 c6 04             	add    $0x4,%si
    77cc:	8a 64 10             	mov    0x10(%si),%ah
    77cf:	8a 44 10             	mov    0x10(%si),%al
    77d2:	83 3c 00             	cmpw   $0x0,(%si)
    77d5:	5e                   	pop    %si
    77d6:	c3                   	ret
    77d7:	bb 00 50             	mov    $0x5000,%bx
    77da:	83 f8 02             	cmp    $0x2,%ax
    77dd:	74 5a                	je     0x7839
    77df:	bb 00 58             	mov    $0x5800,%bx
    77e2:	83 f8 20             	cmp    $0x20,%ax
    77e5:	74 52                	je     0x7839
    77e7:	bb 00 60             	mov    $0x6000,%bx
    77ea:	83 f8 08             	cmp    $0x8,%ax
    77ed:	74 4a                	je     0x7839
    77ef:	bb 00 68             	mov    $0x6800,%bx
    77f2:	3d 80 00             	cmp    $0x80,%ax
    77f5:	74 42                	je     0x7839
    77f7:	bb 00 70             	mov    $0x7000,%bx
    77fa:	3d 00 02             	cmp    $0x200,%ax
    77fd:	74 3a                	je     0x7839
    77ff:	bb 00 78             	mov    $0x7800,%bx
    7802:	3d 00 04             	cmp    $0x400,%ax
    7805:	74 32                	je     0x7839
    7807:	bb 00 80             	mov    $0x8000,%bx
    780a:	3d 00 08             	cmp    $0x800,%ax
    780d:	74 2a                	je     0x7839
    780f:	bb 00 88             	mov    $0x8800,%bx
    7812:	83 f8 40             	cmp    $0x40,%ax
    7815:	74 22                	je     0x7839
    7817:	bb 00 90             	mov    $0x9000,%bx
    781a:	83 f8 01             	cmp    $0x1,%ax
    781d:	74 1a                	je     0x7839
    781f:	bb 00 98             	mov    $0x9800,%bx
    7822:	83 f8 04             	cmp    $0x4,%ax
    7825:	74 12                	je     0x7839
    7827:	bb 00 a0             	mov    $0xa000,%bx
    782a:	83 f8 10             	cmp    $0x10,%ax
    782d:	74 0a                	je     0x7839
    782f:	bb 00 a8             	mov    $0xa800,%bx
    7832:	3d 00 01             	cmp    $0x100,%ax
    7835:	74 02                	je     0x7839
    7837:	33 db                	xor    %bx,%bx
    7839:	c3                   	ret
    783a:	57                   	push   %di
    783b:	e8 56 00             	call   0x7894
    783e:	74 0a                	je     0x784a
    7840:	8b 5d 02             	mov    0x2(%di),%bx
    7843:	e8 08 00             	call   0x784e
    7846:	0b db                	or     %bx,%bx
    7848:	5f                   	pop    %di
    7849:	c3                   	ret
    784a:	33 db                	xor    %bx,%bx
    784c:	5f                   	pop    %di
    784d:	c3                   	ret
    784e:	52                   	push   %dx
    784f:	51                   	push   %cx
    7850:	0b db                	or     %bx,%bx
    7852:	74 1b                	je     0x786f
    7854:	56                   	push   %si
    7855:	e8 58 01             	call   0x79b0
    7858:	03 de                	add    %si,%bx
    785a:	5e                   	pop    %si
    785b:	33 c9                	xor    %cx,%cx
    785d:	8a 4f 01             	mov    0x1(%bx),%cl
    7860:	80 3f ff             	cmpb   $0xff,(%bx)
    7863:	74 08                	je     0x786d
    7865:	3a 07                	cmp    (%bx),%al
    7867:	74 06                	je     0x786f
    7869:	03 d9                	add    %cx,%bx
    786b:	eb f0                	jmp    0x785d
    786d:	33 db                	xor    %bx,%bx
    786f:	0b db                	or     %bx,%bx
    7871:	59                   	pop    %cx
    7872:	5a                   	pop    %dx
    7873:	c3                   	ret
    7874:	56                   	push   %si
    7875:	51                   	push   %cx
    7876:	e8 37 01             	call   0x79b0
    7879:	32 c9                	xor    %cl,%cl
    787b:	8d 7c 08             	lea    0x8(%si),%di
    787e:	3b 5d 04             	cmp    0x4(%di),%bx
    7881:	74 0c                	je     0x788f
    7883:	83 c7 10             	add    $0x10,%di
    7886:	fe c1                	inc    %cl
    7888:	3a 4c 06             	cmp    0x6(%si),%cl
    788b:	72 f1                	jb     0x787e
    788d:	33 ff                	xor    %di,%di
    788f:	0b ff                	or     %di,%di
    7891:	59                   	pop    %cx
    7892:	5e                   	pop    %si
    7893:	c3                   	ret
    7894:	56                   	push   %si
    7895:	51                   	push   %cx
    7896:	e8 17 01             	call   0x79b0
    7899:	32 c9                	xor    %cl,%cl
    789b:	8d 7c 08             	lea    0x8(%si),%di
    789e:	3b 1d                	cmp    (%di),%bx
    78a0:	74 0c                	je     0x78ae
    78a2:	83 c7 10             	add    $0x10,%di
    78a5:	fe c1                	inc    %cl
    78a7:	3a 4c 06             	cmp    0x6(%si),%cl
    78aa:	72 f2                	jb     0x789e
    78ac:	33 ff                	xor    %di,%di
    78ae:	0b ff                	or     %di,%di
    78b0:	59                   	pop    %cx
    78b1:	5e                   	pop    %si
    78b2:	c3                   	ret
    78b3:	56                   	push   %si
    78b4:	51                   	push   %cx
    78b5:	e8 f8 00             	call   0x79b0
    78b8:	32 c9                	xor    %cl,%cl
    78ba:	8d 7c 08             	lea    0x8(%si),%di
    78bd:	3a 1d                	cmp    (%di),%bl
    78bf:	74 0c                	je     0x78cd
    78c1:	83 c7 10             	add    $0x10,%di
    78c4:	fe c1                	inc    %cl
    78c6:	3a 4c 06             	cmp    0x6(%si),%cl
    78c9:	72 f2                	jb     0x78bd
    78cb:	33 ff                	xor    %di,%di
    78cd:	0b ff                	or     %di,%di
    78cf:	59                   	pop    %cx
    78d0:	5e                   	pop    %si
    78d1:	c3                   	ret
    78d2:	56                   	push   %si
    78d3:	51                   	push   %cx
    78d4:	e8 d9 00             	call   0x79b0
    78d7:	32 c9                	xor    %cl,%cl
    78d9:	8d 7c 08             	lea    0x8(%si),%di
    78dc:	3b 45 0c             	cmp    0xc(%di),%ax
    78df:	74 0c                	je     0x78ed
    78e1:	83 c7 10             	add    $0x10,%di
    78e4:	fe c1                	inc    %cl
    78e6:	3a 4c 06             	cmp    0x6(%si),%cl
    78e9:	72 f1                	jb     0x78dc
    78eb:	33 ff                	xor    %di,%di
    78ed:	0b ff                	or     %di,%di
    78ef:	59                   	pop    %cx
    78f0:	5e                   	pop    %si
    78f1:	c3                   	ret
    78f2:	57                   	push   %di
    78f3:	50                   	push   %ax
    78f4:	e8 db ff             	call   0x78d2
    78f7:	8a c3                	mov    %bl,%al
    78f9:	8b 5d 02             	mov    0x2(%di),%bx
    78fc:	e8 4f ff             	call   0x784e
    78ff:	58                   	pop    %ax
    7900:	5f                   	pop    %di
    7901:	c3                   	ret
    7902:	53                   	push   %bx
    7903:	32 c9                	xor    %cl,%cl
    7905:	b3 01                	mov    $0x1,%bl
    7907:	e8 e8 ff             	call   0x78f2
    790a:	74 03                	je     0x790f
    790c:	8a 4f 02             	mov    0x2(%bx),%cl
    790f:	0a c9                	or     %cl,%cl
    7911:	5b                   	pop    %bx
    7912:	c3                   	ret
    7913:	53                   	push   %bx
    7914:	32 ed                	xor    %ch,%ch
    7916:	b3 02                	mov    $0x2,%bl
    7918:	e8 d7 ff             	call   0x78f2
    791b:	74 03                	je     0x7920
    791d:	8a 6f 02             	mov    0x2(%bx),%ch
    7920:	0a ed                	or     %ch,%ch
    7922:	5b                   	pop    %bx
    7923:	c3                   	ret
    7924:	50                   	push   %ax
    7925:	57                   	push   %di
    7926:	8b da                	mov    %dx,%bx
    7928:	e8 49 ff             	call   0x7874
    792b:	75 04                	jne    0x7931
    792d:	33 db                	xor    %bx,%bx
    792f:	eb 0d                	jmp    0x793e
    7931:	b0 14                	mov    $0x14,%al
    7933:	8b 5d 08             	mov    0x8(%di),%bx
    7936:	e8 15 ff             	call   0x784e
    7939:	74 f2                	je     0x792d
    793b:	8b 5f 02             	mov    0x2(%bx),%bx
    793e:	5f                   	pop    %di
    793f:	58                   	pop    %ax
    7940:	c3                   	ret
    7941:	66 50                	push   %eax
    7943:	53                   	push   %bx
    7944:	51                   	push   %cx
    7945:	57                   	push   %di
    7946:	8d 1c                	lea    (%si),%bx
    7948:	66 25 ff ff 00 00    	and    $0xffff,%eax
    794e:	e8 aa 04             	call   0x7dfb
    7951:	8b d8                	mov    %ax,%bx
    7953:	e8 3b 00             	call   0x7991
    7956:	23 c3                	and    %bx,%ax
    7958:	74 31                	je     0x798b
    795a:	e8 75 ff             	call   0x78d2
    795d:	0b ff                	or     %di,%di
    795f:	74 2a                	je     0x798b
    7961:	66 50                	push   %eax
    7963:	66 8b 45 04          	mov    0x4(%di),%eax
    7967:	8d 5c 0c             	lea    0xc(%si),%bx
    796a:	e8 8e 04             	call   0x7dfb
    796d:	66 33 c0             	xor    %eax,%eax
    7970:	8b 05                	mov    (%di),%ax
    7972:	8d 5c 04             	lea    0x4(%si),%bx
    7975:	e8 83 04             	call   0x7dfb
    7978:	66 58                	pop    %eax
    797a:	e8 85 ff             	call   0x7902
    797d:	e8 93 ff             	call   0x7913
    7980:	8d 5c 08             	lea    0x8(%si),%bx
    7983:	66 33 c0             	xor    %eax,%eax
    7986:	8b c1                	mov    %cx,%ax
    7988:	e8 70 04             	call   0x7dfb
    798b:	5f                   	pop    %di
    798c:	59                   	pop    %cx
    798d:	5b                   	pop    %bx
    798e:	66 58                	pop    %eax
    7990:	c3                   	ret
    7991:	56                   	push   %si
    7992:	e8 1b 00             	call   0x79b0
    7995:	8b 44 04             	mov    0x4(%si),%ax
    7998:	5e                   	pop    %si
    7999:	c3                   	ret
    799a:	56                   	push   %si
    799b:	e8 12 00             	call   0x79b0
    799e:	89 44 04             	mov    %ax,0x4(%si)
    79a1:	5e                   	pop    %si
    79a2:	c3                   	ret
    79a3:	c3                   	ret
    79a4:	bf 48 00             	mov    $0x48,%di
    79a7:	8b 3d                	mov    (%di),%di
    79a9:	8b 7d 20             	mov    0x20(%di),%di
    79ac:	8b 7d 0c             	mov    0xc(%di),%di
    79af:	c3                   	ret
    79b0:	be 48 00             	mov    $0x48,%si
    79b3:	8b 34                	mov    (%si),%si
    79b5:	8b 74 20             	mov    0x20(%si),%si
    79b8:	8b 74 30             	mov    0x30(%si),%si
    79bb:	c3                   	ret
    79bc:	1e                   	push   %ds
    79bd:	0e                   	push   %cs
    79be:	1f                   	pop    %ds
    79bf:	bf 48 00             	mov    $0x48,%di
    79c2:	8b 3d                	mov    (%di),%di
    79c4:	8b 7d 20             	mov    0x20(%di),%di
    79c7:	8b 7d 0e             	mov    0xe(%di),%di
    79ca:	83 c7 04             	add    $0x4,%di
    79cd:	1f                   	pop    %ds
    79ce:	c3                   	ret
    79cf:	be 48 00             	mov    $0x48,%si
    79d2:	8b 34                	mov    (%si),%si
    79d4:	8b 74 20             	mov    0x20(%si),%si
    79d7:	8b 74 10             	mov    0x10(%si),%si
    79da:	c3                   	ret
    79db:	bf 48 00             	mov    $0x48,%di
    79de:	8b 3d                	mov    (%di),%di
    79e0:	8b 7d 20             	mov    0x20(%di),%di
    79e3:	8b 7d 26             	mov    0x26(%di),%di
    79e6:	83 c7 04             	add    $0x4,%di
    79e9:	c3                   	ret
    79ea:	be 48 00             	mov    $0x48,%si
    79ed:	8b 34                	mov    (%si),%si
    79ef:	8b 74 20             	mov    0x20(%si),%si
    79f2:	8b 74 1a             	mov    0x1a(%si),%si
    79f5:	c3                   	ret
    79f6:	be 48 00             	mov    $0x48,%si
    79f9:	8b 34                	mov    (%si),%si
    79fb:	8b 74 20             	mov    0x20(%si),%si
    79fe:	8b 74 3a             	mov    0x3a(%si),%si
    7a01:	c3                   	ret
    7a02:	50                   	push   %ax
    7a03:	52                   	push   %dx
    7a04:	bf 48 00             	mov    $0x48,%di
    7a07:	8b 3d                	mov    (%di),%di
    7a09:	8b 7d 20             	mov    0x20(%di),%di
    7a0c:	8b 7d 0a             	mov    0xa(%di),%di
    7a0f:	8b 05                	mov    (%di),%ax
    7a11:	83 e8 04             	sub    $0x4,%ax
    7a14:	33 d2                	xor    %dx,%dx
    7a16:	b9 1c 00             	mov    $0x1c,%cx
    7a19:	f7 f1                	div    %cx
    7a1b:	8b c8                	mov    %ax,%cx
    7a1d:	83 c7 04             	add    $0x4,%di
    7a20:	5a                   	pop    %dx
    7a21:	58                   	pop    %ax
    7a22:	c3                   	ret
    7a23:	e8 01 00             	call   0x7a27
    7a26:	cb                   	lret
    7a27:	83 ec 06             	sub    $0x6,%sp
    7a2a:	8b ec                	mov    %sp,%bp
    7a2c:	89 46 00             	mov    %ax,0x0(%bp)
    7a2f:	66 33 c0             	xor    %eax,%eax
    7a32:	c6 46 04 00          	movb   $0x0,0x4(%bp)
    7a36:	89 46 02             	mov    %ax,0x2(%bp)
    7a39:	06                   	push   %es
    7a3a:	52                   	push   %dx
    7a3b:	8a d3                	mov    %bl,%dl
    7a3d:	8b c5                	mov    %bp,%ax
    7a3f:	e8 e0 16             	call   0x9122
    7a42:	5a                   	pop    %dx
    7a43:	07                   	pop    %es
    7a44:	83 c4 06             	add    $0x6,%sp
    7a47:	c3                   	ret
    7a48:	e8 59 ff             	call   0x79a4
    7a4b:	66 f7 45 10 01 00 00 	testl  $0x1,0x10(%di)
    7a52:	00 
    7a53:	c3                   	ret
    7a54:	50                   	push   %ax
    7a55:	e8 4c ff             	call   0x79a4
    7a58:	b8 01 00             	mov    $0x1,%ax
    7a5b:	09 45 10             	or     %ax,0x10(%di)
    7a5e:	58                   	pop    %ax
    7a5f:	c3                   	ret
    7a60:	e8 41 ff             	call   0x79a4
    7a63:	88 45 10             	mov    %al,0x10(%di)
    7a66:	c3                   	ret
    7a67:	66 53                	push   %ebx
    7a69:	83 ec 48             	sub    $0x48,%sp
    7a6c:	8b ec                	mov    %sp,%bp
    7a6e:	66 89 5e 00          	mov    %ebx,0x0(%bp)
    7a72:	66 89 4e 04          	mov    %ecx,0x4(%bp)
    7a76:	8c d0                	mov    %ss,%ax
    7a78:	66 c1 e0 10          	shl    $0x10,%eax
    7a7c:	8b c4                	mov    %sp,%ax
    7a7e:	bb 00 00             	mov    $0x0,%bx
    7a81:	e8 a3 ff             	call   0x7a27
    7a84:	83 c4 48             	add    $0x48,%sp
    7a87:	66 5b                	pop    %ebx
    7a89:	e8 43 01             	call   0x7bcf
    7a8c:	e8 7d 01             	call   0x7c0c
    7a8f:	e8 0e 00             	call   0x7aa0
    7a92:	bb 04 00             	mov    $0x4,%bx
    7a95:	e8 1b fd             	call   0x77b3
    7a98:	66 c1 e8 10          	shr    $0x10,%eax
    7a9c:	e8 c1 ff             	call   0x7a60
    7a9f:	c3                   	ret
    7aa0:	83 ec 0c             	sub    $0xc,%sp
    7aa3:	8b ec                	mov    %sp,%bp
    7aa5:	8c d0                	mov    %ss,%ax
    7aa7:	66 c1 e0 10          	shl    $0x10,%eax
    7aab:	8b c4                	mov    %sp,%ax
    7aad:	bb 16 00             	mov    $0x16,%bx
    7ab0:	e8 74 ff             	call   0x7a27
    7ab3:	66 bb 00 00 00 00    	mov    $0x0,%ebx
    7ab9:	83 c4 0c             	add    $0xc,%sp
    7abc:	e8 e5 fe             	call   0x79a4
    7abf:	66 8b c3             	mov    %ebx,%eax
    7ac2:	66 c1 e8 08          	shr    $0x8,%eax
    7ac6:	66 89 45 28          	mov    %eax,0x28(%di)
    7aca:	66 8b c3             	mov    %ebx,%eax
    7acd:	66 c1 e0 18          	shl    $0x18,%eax
    7ad1:	66 89 45 2c          	mov    %eax,0x2c(%di)
    7ad5:	c3                   	ret
    7ad6:	e8 cb fe             	call   0x79a4
    7ad9:	66 8b 5d 08          	mov    0x8(%di),%ebx
    7add:	66 8b 4d 0c          	mov    0xc(%di),%ecx
    7ae1:	c3                   	ret
    7ae2:	56                   	push   %si
    7ae3:	e8 10 ff             	call   0x79f6
    7ae6:	66 8b 44 08          	mov    0x8(%si),%eax
    7aea:	5e                   	pop    %si
    7aeb:	c3                   	ret
    7aec:	b0 01                	mov    $0x1,%al
    7aee:	c3                   	ret
    7aef:	b0 08                	mov    $0x8,%al
    7af1:	c3                   	ret
    7af2:	53                   	push   %bx
    7af3:	66 50                	push   %eax
    7af5:	66 33 c0             	xor    %eax,%eax
    7af8:	e8 00 03             	call   0x7dfb
    7afb:	83 c3 04             	add    $0x4,%bx
    7afe:	e2 f8                	loop   0x7af8
    7b00:	66 58                	pop    %eax
    7b02:	5b                   	pop    %bx
    7b03:	c3                   	ret
    7b04:	32 c0                	xor    %al,%al
    7b06:	c3                   	ret
    7b07:	fc                   	cld
    7b08:	e8 90 03             	call   0x7e9b
    7b0b:	66 c1 cb 10          	ror    $0x10,%ebx
    7b0f:	e8 e9 02             	call   0x7dfb
    7b12:	66 c1 cb 10          	ror    $0x10,%ebx
    7b16:	66 81 c3 04 00 04 00 	add    $0x40004,%ebx
    7b1d:	e2 e9                	loop   0x7b08
    7b1f:	c3                   	ret
    7b20:	fc                   	cld
    7b21:	66 ad                	lods   %ds:(%si),%eax
    7b23:	e8 d5 02             	call   0x7dfb
    7b26:	83 c3 04             	add    $0x4,%bx
    7b29:	e2 f6                	loop   0x7b21
    7b2b:	c3                   	ret
    7b2c:	fc                   	cld
    7b2d:	e8 6b 03             	call   0x7e9b
    7b30:	66 ab                	stos   %eax,%es:(%di)
    7b32:	83 c3 04             	add    $0x4,%bx
    7b35:	e2 f6                	loop   0x7b2d
    7b37:	c3                   	ret
    7b38:	66 50                	push   %eax
    7b3a:	b8 64 00             	mov    $0x64,%ax
    7b3d:	e8 10 00             	call   0x7b50
    7b40:	66 58                	pop    %eax
    7b42:	c3                   	ret
    7b43:	66 50                	push   %eax
    7b45:	b8 50 c3             	mov    $0xc350,%ax
    7b48:	d1 e1                	shl    $1,%cx
    7b4a:	e8 03 00             	call   0x7b50
    7b4d:	66 58                	pop    %eax
    7b4f:	c3                   	ret
    7b50:	52                   	push   %dx
    7b51:	f7 e1                	mul    %cx
    7b53:	8b ca                	mov    %dx,%cx
    7b55:	e8 5c 01             	call   0x7cb4
    7b58:	66 53                	push   %ebx
    7b5a:	8b d9                	mov    %cx,%bx
    7b5c:	66 c1 e3 10          	shl    $0x10,%ebx
    7b60:	8b d8                	mov    %ax,%bx
    7b62:	66 b8 b8 a8 05 00    	mov    $0x5a8b8,%eax
    7b68:	b2 30                	mov    $0x30,%dl
    7b6a:	66 ef                	out    %eax,(%dx)
    7b6c:	b2 34                	mov    $0x34,%dl
    7b6e:	66 ed                	in     (%dx),%eax
    7b70:	33 c9                	xor    %cx,%cx
    7b72:	66 03 d8             	add    %eax,%ebx
    7b75:	73 0a                	jae    0x7b81
    7b77:	66 ed                	in     (%dx),%eax
    7b79:	66 a9 00 00 00 80    	test   $0x80000000,%eax
    7b7f:	75 f6                	jne    0x7b77
    7b81:	66 ed                	in     (%dx),%eax
    7b83:	66 3b c3             	cmp    %ebx,%eax
    7b86:	73 0c                	jae    0x7b94
    7b88:	66 c1 e8 10          	shr    $0x10,%eax
    7b8c:	3b c1                	cmp    %cx,%ax
    7b8e:	72 04                	jb     0x7b94
    7b90:	8b c8                	mov    %ax,%cx
    7b92:	eb ed                	jmp    0x7b81
    7b94:	66 5b                	pop    %ebx
    7b96:	5a                   	pop    %dx
    7b97:	c3                   	ret
    7b98:	66 52                	push   %edx
    7b9a:	e8 17 01             	call   0x7cb4
    7b9d:	66 b8 b8 a8 05 00    	mov    $0x5a8b8,%eax
    7ba3:	b2 30                	mov    $0x30,%dl
    7ba5:	66 ef                	out    %eax,(%dx)
    7ba7:	b2 34                	mov    $0x34,%dl
    7ba9:	66 ed                	in     (%dx),%eax
    7bab:	66 33 d2             	xor    %edx,%edx
    7bae:	66 bb 64 00 00 00    	mov    $0x64,%ebx
    7bb4:	66 f7 f3             	div    %ebx
    7bb7:	66 5a                	pop    %edx
    7bb9:	c3                   	ret
    7bba:	66 50                	push   %eax
    7bbc:	53                   	push   %bx
    7bbd:	bb 07 00             	mov    $0x7,%bx
    7bc0:	e8 f0 fb             	call   0x77b3
    7bc3:	25 00 02             	and    $0x200,%ax
    7bc6:	35 00 02             	xor    $0x200,%ax
    7bc9:	0b c0                	or     %ax,%ax
    7bcb:	5b                   	pop    %bx
    7bcc:	66 58                	pop    %eax
    7bce:	c3                   	ret
    7bcf:	66 51                	push   %ecx
    7bd1:	b3 01                	mov    $0x1,%bl
    7bd3:	e8 78 00             	call   0x7c4e
    7bd6:	e8 11 fe             	call   0x79ea
    7bd9:	66 33 c9             	xor    %ecx,%ecx
    7bdc:	8b 4c 08             	mov    0x8(%si),%cx
    7bdf:	66 c1 e0 0a          	shl    $0xa,%eax
    7be3:	0b c9                	or     %cx,%cx
    7be5:	75 03                	jne    0x7bea
    7be7:	b9 00 10             	mov    $0x1000,%cx
    7bea:	66 2b c1             	sub    %ecx,%eax
    7bed:	e8 fa fd             	call   0x79ea
    7bf0:	66 89 44 04          	mov    %eax,0x4(%si)
    7bf4:	89 4c 08             	mov    %cx,0x8(%si)
    7bf7:	66 59                	pop    %ecx
    7bf9:	c3                   	ret
    7bfa:	56                   	push   %si
    7bfb:	1e                   	push   %ds
    7bfc:	0e                   	push   %cs
    7bfd:	1f                   	pop    %ds
    7bfe:	e8 e9 fd             	call   0x79ea
    7c01:	66 8b 44 04          	mov    0x4(%si),%eax
    7c05:	66 c1 e0 0a          	shl    $0xa,%eax
    7c09:	1f                   	pop    %ds
    7c0a:	5e                   	pop    %si
    7c0b:	c3                   	ret
    7c0c:	c3                   	ret
    7c0d:	50                   	push   %ax
    7c0e:	52                   	push   %dx
    7c0f:	be 48 00             	mov    $0x48,%si
    7c12:	8b 34                	mov    (%si),%si
    7c14:	8b 74 20             	mov    0x20(%si),%si
    7c17:	8b 74 1e             	mov    0x1e(%si),%si
    7c1a:	8b 04                	mov    (%si),%ax
    7c1c:	83 e8 04             	sub    $0x4,%ax
    7c1f:	33 d2                	xor    %dx,%dx
    7c21:	b9 04 00             	mov    $0x4,%cx
    7c24:	f7 f1                	div    %cx
    7c26:	8b c8                	mov    %ax,%cx
    7c28:	83 c6 04             	add    $0x4,%si
    7c2b:	5a                   	pop    %dx
    7c2c:	58                   	pop    %ax
    7c2d:	c3                   	ret
    7c2e:	56                   	push   %si
    7c2f:	e8 9d fd             	call   0x79cf
    7c32:	83 c6 04             	add    $0x4,%si
    7c35:	8a 6c 0f             	mov    0xf(%si),%ch
    7c38:	5e                   	pop    %si
    7c39:	c3                   	ret
    7c3a:	56                   	push   %si
    7c3b:	e8 91 fd             	call   0x79cf
    7c3e:	80 fd 00             	cmp    $0x0,%ch
    7c41:	74 06                	je     0x7c49
    7c43:	83 c6 04             	add    $0x4,%si
    7c46:	88 6c 0f             	mov    %ch,0xf(%si)
    7c49:	5e                   	pop    %si
    7c4a:	c3                   	ret
    7c4b:	32 c0                	xor    %al,%al
    7c4d:	c3                   	ret
    7c4e:	66 53                	push   %ebx
    7c50:	83 ec 04             	sub    $0x4,%sp
    7c53:	8b ec                	mov    %sp,%bp
    7c55:	8c d0                	mov    %ss,%ax
    7c57:	66 c1 e0 10          	shl    $0x10,%eax
    7c5b:	8b c4                	mov    %sp,%ax
    7c5d:	66 89 5e 00          	mov    %ebx,0x0(%bp)
    7c61:	bb 06 00             	mov    $0x6,%bx
    7c64:	e8 c0 fd             	call   0x7a27
    7c67:	8b ec                	mov    %sp,%bp
    7c69:	66 8b 46 00          	mov    0x0(%bp),%eax
    7c6d:	83 c4 04             	add    $0x4,%sp
    7c70:	66 5b                	pop    %ebx
    7c72:	c3                   	ret
    7c73:	83 ec 0c             	sub    $0xc,%sp
    7c76:	8b ec                	mov    %sp,%bp
    7c78:	8c d0                	mov    %ss,%ax
    7c7a:	66 c1 e0 10          	shl    $0x10,%eax
    7c7e:	8b c4                	mov    %sp,%ax
    7c80:	bb 16 00             	mov    $0x16,%bx
    7c83:	e8 a1 fd             	call   0x7a27
    7c86:	8b ec                	mov    %sp,%bp
    7c88:	66 8b 5e 00          	mov    0x0(%bp),%ebx
    7c8c:	66 8b 4e 00          	mov    0x0(%bp),%ecx
    7c90:	66 8b 56 08          	mov    0x8(%bp),%edx
    7c94:	83 c4 0c             	add    $0xc,%sp
    7c97:	c3                   	ret
    7c98:	bf 48 00             	mov    $0x48,%di
    7c9b:	8b 3d                	mov    (%di),%di
    7c9d:	8b 7d 20             	mov    0x20(%di),%di
    7ca0:	8b 7d 12             	mov    0x12(%di),%di
    7ca3:	c3                   	ret
    7ca4:	bf 48 00             	mov    $0x48,%di
    7ca7:	8b 3d                	mov    (%di),%di
    7ca9:	c3                   	ret
    7caa:	57                   	push   %di
    7cab:	bf 18 00             	mov    $0x18,%di
    7cae:	2e 8b 55 06          	mov    %cs:0x6(%di),%dx
    7cb2:	5f                   	pop    %di
    7cb3:	c3                   	ret
    7cb4:	66 50                	push   %eax
    7cb6:	8c c8                	mov    %cs,%ax
    7cb8:	3d 00 c0             	cmp    $0xc000,%ax
    7cbb:	75 0c                	jne    0x7cc9
    7cbd:	ba c3 03             	mov    $0x3c3,%dx
    7cc0:	ec                   	in     (%dx),%al
    7cc1:	8a f0                	mov    %al,%dh
    7cc3:	0a f6                	or     %dh,%dh
    7cc5:	74 02                	je     0x7cc9
    7cc7:	eb 0e                	jmp    0x7cd7
    7cc9:	53                   	push   %bx
    7cca:	2e 8b 1e 14 00       	mov    %cs:0x14,%bx
    7ccf:	b2 20                	mov    $0x20,%dl
    7cd1:	e8 d6 00             	call   0x7daa
    7cd4:	8a f4                	mov    %ah,%dh
    7cd6:	5b                   	pop    %bx
    7cd7:	32 d2                	xor    %dl,%dl
    7cd9:	66 ed                	in     (%dx),%eax
    7cdb:	66 58                	pop    %eax
    7cdd:	c3                   	ret
    7cde:	2e 8b 1e 14 00       	mov    %cs:0x14,%bx
    7ce3:	c3                   	ret
    7ce4:	0b c9                	or     %cx,%cx
    7ce6:	75 1a                	jne    0x7d02
    7ce8:	4b                   	dec    %bx
    7ce9:	74 16                	je     0x7d01
    7ceb:	43                   	inc    %bx
    7cec:	3b da                	cmp    %dx,%bx
    7cee:	77 09                	ja     0x7cf9
    7cf0:	8b c8                	mov    %ax,%cx
    7cf2:	8b c2                	mov    %dx,%ax
    7cf4:	2b d2                	sub    %dx,%dx
    7cf6:	f7 f3                	div    %bx
    7cf8:	91                   	xchg   %ax,%cx
    7cf9:	f7 f3                	div    %bx
    7cfb:	8b da                	mov    %dx,%bx
    7cfd:	8b d1                	mov    %cx,%dx
    7cff:	2b c9                	sub    %cx,%cx
    7d01:	c3                   	ret
    7d02:	3b ca                	cmp    %dx,%cx
    7d04:	72 1a                	jb     0x7d20
    7d06:	75 10                	jne    0x7d18
    7d08:	3b d8                	cmp    %ax,%bx
    7d0a:	77 0c                	ja     0x7d18
    7d0c:	2b c3                	sub    %bx,%ax
    7d0e:	8b d8                	mov    %ax,%bx
    7d10:	2b c9                	sub    %cx,%cx
    7d12:	2b d2                	sub    %dx,%dx
    7d14:	b8 01 00             	mov    $0x1,%ax
    7d17:	c3                   	ret
    7d18:	2b c9                	sub    %cx,%cx
    7d1a:	2b db                	sub    %bx,%bx
    7d1c:	93                   	xchg   %ax,%bx
    7d1d:	87 ca                	xchg   %cx,%dx
    7d1f:	c3                   	ret
    7d20:	55                   	push   %bp
    7d21:	56                   	push   %si
    7d22:	2b f6                	sub    %si,%si
    7d24:	8b ee                	mov    %si,%bp
    7d26:	03 db                	add    %bx,%bx
    7d28:	13 c9                	adc    %cx,%cx
    7d2a:	72 11                	jb     0x7d3d
    7d2c:	45                   	inc    %bp
    7d2d:	3b ca                	cmp    %dx,%cx
    7d2f:	72 f5                	jb     0x7d26
    7d31:	77 04                	ja     0x7d37
    7d33:	3b d8                	cmp    %ax,%bx
    7d35:	76 ef                	jbe    0x7d26
    7d37:	f8                   	clc
    7d38:	13 f6                	adc    %si,%si
    7d3a:	4d                   	dec    %bp
    7d3b:	78 20                	js     0x7d5d
    7d3d:	d1 d9                	rcr    $1,%cx
    7d3f:	d1 db                	rcr    $1,%bx
    7d41:	2b c3                	sub    %bx,%ax
    7d43:	1b d1                	sbb    %cx,%dx
    7d45:	f5                   	cmc
    7d46:	72 f0                	jb     0x7d38
    7d48:	03 f6                	add    %si,%si
    7d4a:	4d                   	dec    %bp
    7d4b:	78 0c                	js     0x7d59
    7d4d:	d1 e9                	shr    $1,%cx
    7d4f:	d1 db                	rcr    $1,%bx
    7d51:	03 c3                	add    %bx,%ax
    7d53:	13 d1                	adc    %cx,%dx
    7d55:	73 f1                	jae    0x7d48
    7d57:	eb df                	jmp    0x7d38
    7d59:	03 c3                	add    %bx,%ax
    7d5b:	13 d1                	adc    %cx,%dx
    7d5d:	8b d8                	mov    %ax,%bx
    7d5f:	8b ca                	mov    %dx,%cx
    7d61:	8b c6                	mov    %si,%ax
    7d63:	33 d2                	xor    %dx,%dx
    7d65:	5e                   	pop    %si
    7d66:	5d                   	pop    %bp
    7d67:	c3                   	ret
    7d68:	93                   	xchg   %ax,%bx
    7d69:	50                   	push   %ax
    7d6a:	92                   	xchg   %ax,%dx
    7d6b:	0b c0                	or     %ax,%ax
    7d6d:	74 02                	je     0x7d71
    7d6f:	f7 e2                	mul    %dx
    7d71:	91                   	xchg   %ax,%cx
    7d72:	0b c0                	or     %ax,%ax
    7d74:	74 04                	je     0x7d7a
    7d76:	f7 e3                	mul    %bx
    7d78:	03 c8                	add    %ax,%cx
    7d7a:	58                   	pop    %ax
    7d7b:	f7 e3                	mul    %bx
    7d7d:	03 d1                	add    %cx,%dx
    7d7f:	c3                   	ret
    7d80:	52                   	push   %dx
    7d81:	66 50                	push   %eax
    7d83:	b4 80                	mov    $0x80,%ah
    7d85:	8a c7                	mov    %bh,%al
    7d87:	66 c1 e0 10          	shl    $0x10,%eax
    7d8b:	8a e3                	mov    %bl,%ah
    7d8d:	8a c2                	mov    %dl,%al
    7d8f:	24 fc                	and    $0xfc,%al
    7d91:	ba f8 0c             	mov    $0xcf8,%dx
    7d94:	66 ef                	out    %eax,(%dx)
    7d96:	66 58                	pop    %eax
    7d98:	5a                   	pop    %dx
    7d99:	c3                   	ret
    7d9a:	52                   	push   %dx
    7d9b:	ba fc 0c             	mov    $0xcfc,%dx
    7d9e:	66 ed                	in     (%dx),%eax
    7da0:	5a                   	pop    %dx
    7da1:	c3                   	ret
    7da2:	52                   	push   %dx
    7da3:	ba fc 0c             	mov    $0xcfc,%dx
    7da6:	66 ef                	out    %eax,(%dx)
    7da8:	5a                   	pop    %dx
    7da9:	c3                   	ret
    7daa:	e8 31 ff             	call   0x7cde
    7dad:	9c                   	pushf
    7dae:	fa                   	cli
    7daf:	e8 ce ff             	call   0x7d80
    7db2:	e8 e5 ff             	call   0x7d9a
    7db5:	9d                   	popf
    7db6:	c3                   	ret
    7db7:	e8 24 ff             	call   0x7cde
    7dba:	9c                   	pushf
    7dbb:	fa                   	cli
    7dbc:	e8 c1 ff             	call   0x7d80
    7dbf:	e8 e0 ff             	call   0x7da2
    7dc2:	9d                   	popf
    7dc3:	c3                   	ret
    7dc4:	52                   	push   %dx
    7dc5:	66 53                	push   %ebx
    7dc7:	66 50                	push   %eax
    7dc9:	e8 06 00             	call   0x7dd2
    7dcc:	66 58                	pop    %eax
    7dce:	66 5b                	pop    %ebx
    7dd0:	5a                   	pop    %dx
    7dd1:	c3                   	ret
    7dd2:	66 c1 e3 10          	shl    $0x10,%ebx
    7dd6:	66 c1 eb 0e          	shr    $0xe,%ebx
    7dda:	e8 d7 fe             	call   0x7cb4
    7ddd:	e8 bf 01             	call   0x7f9f
    7de0:	c3                   	ret
    7de1:	66 50                	push   %eax
    7de3:	66 c1 e3 10          	shl    $0x10,%ebx
    7de7:	66 c1 eb 10          	shr    $0x10,%ebx
    7deb:	e8 0c fe             	call   0x7bfa
    7dee:	66 03 d8             	add    %eax,%ebx
    7df1:	66 81 cb 00 00 00 80 	or     $0x80000000,%ebx
    7df8:	66 58                	pop    %eax
    7dfa:	c3                   	ret
    7dfb:	52                   	push   %dx
    7dfc:	66 53                	push   %ebx
    7dfe:	e8 04 00             	call   0x7e05
    7e01:	66 5b                	pop    %ebx
    7e03:	5a                   	pop    %dx
    7e04:	c3                   	ret
    7e05:	66 50                	push   %eax
    7e07:	e8 aa fe             	call   0x7cb4
    7e0a:	e8 d4 ff             	call   0x7de1
    7e0d:	e8 b5 01             	call   0x7fc5
    7e10:	66 58                	pop    %eax
    7e12:	c3                   	ret
    7e13:	52                   	push   %dx
    7e14:	51                   	push   %cx
    7e15:	66 53                	push   %ebx
    7e17:	66 50                	push   %eax
    7e19:	8a cb                	mov    %bl,%cl
    7e1b:	80 e3 fc             	and    $0xfc,%bl
    7e1e:	80 e1 03             	and    $0x3,%cl
    7e21:	c0 e1 03             	shl    $0x3,%cl
    7e24:	e8 8d fe             	call   0x7cb4
    7e27:	e8 b7 ff             	call   0x7de1
    7e2a:	e8 8c 01             	call   0x7fb9
    7e2d:	66 d3 c8             	ror    %cl,%eax
    7e30:	58                   	pop    %ax
    7e31:	50                   	push   %ax
    7e32:	66 d3 c0             	rol    %cl,%eax
    7e35:	e8 8d 01             	call   0x7fc5
    7e38:	66 58                	pop    %eax
    7e3a:	66 5b                	pop    %ebx
    7e3c:	59                   	pop    %cx
    7e3d:	5a                   	pop    %dx
    7e3e:	c3                   	ret
    7e3f:	66 50                	push   %eax
    7e41:	51                   	push   %cx
    7e42:	c0 e1 03             	shl    $0x3,%cl
    7e45:	e8 53 00             	call   0x7e9b
    7e48:	66 d3 c8             	ror    %cl,%eax
    7e4b:	8a c5                	mov    %ch,%al
    7e4d:	66 d3 c0             	rol    %cl,%eax
    7e50:	e8 a8 ff             	call   0x7dfb
    7e53:	59                   	pop    %cx
    7e54:	66 58                	pop    %eax
    7e56:	c3                   	ret
    7e57:	66 50                	push   %eax
    7e59:	51                   	push   %cx
    7e5a:	c0 e1 03             	shl    $0x3,%cl
    7e5d:	e8 3b 00             	call   0x7e9b
    7e60:	66 d3 c8             	ror    %cl,%eax
    7e63:	59                   	pop    %cx
    7e64:	8a e8                	mov    %al,%ch
    7e66:	66 58                	pop    %eax
    7e68:	c3                   	ret
    7e69:	e8 5f 00             	call   0x7ecb
    7e6c:	c3                   	ret
    7e6d:	e8 44 fe             	call   0x7cb4
    7e70:	66 c1 e3 10          	shl    $0x10,%ebx
    7e74:	66 c1 eb 0e          	shr    $0xe,%ebx
    7e78:	e8 0b 01             	call   0x7f86
    7e7b:	c3                   	ret
    7e7c:	e8 35 fe             	call   0x7cb4
    7e7f:	66 c1 e3 02          	shl    $0x2,%ebx
    7e83:	e8 00 01             	call   0x7f86
    7e86:	c3                   	ret
    7e87:	52                   	push   %dx
    7e88:	66 53                	push   %ebx
    7e8a:	e8 04 00             	call   0x7e91
    7e8d:	66 5b                	pop    %ebx
    7e8f:	5a                   	pop    %dx
    7e90:	c3                   	ret
    7e91:	e8 20 fe             	call   0x7cb4
    7e94:	e8 4a ff             	call   0x7de1
    7e97:	e8 1f 01             	call   0x7fb9
    7e9a:	c3                   	ret
    7e9b:	51                   	push   %cx
    7e9c:	66 52                	push   %edx
    7e9e:	8a eb                	mov    %bl,%ch
    7ea0:	8a cb                	mov    %bl,%cl
    7ea2:	80 e1 03             	and    $0x3,%cl
    7ea5:	c0 e1 03             	shl    $0x3,%cl
    7ea8:	80 e3 fc             	and    $0xfc,%bl
    7eab:	e8 d9 ff             	call   0x7e87
    7eae:	80 f9 00             	cmp    $0x0,%cl
    7eb1:	74 14                	je     0x7ec7
    7eb3:	66 8b d0             	mov    %eax,%edx
    7eb6:	83 c3 04             	add    $0x4,%bx
    7eb9:	e8 cb ff             	call   0x7e87
    7ebc:	83 eb 04             	sub    $0x4,%bx
    7ebf:	66 92                	xchg   %eax,%edx
    7ec1:	66 0f ad d0          	shrd   %cl,%edx,%eax
    7ec5:	8a dd                	mov    %ch,%bl
    7ec7:	66 5a                	pop    %edx
    7ec9:	59                   	pop    %cx
    7eca:	c3                   	ret
    7ecb:	52                   	push   %dx
    7ecc:	66 53                	push   %ebx
    7ece:	e8 9c ff             	call   0x7e6d
    7ed1:	66 5b                	pop    %ebx
    7ed3:	5a                   	pop    %dx
    7ed4:	c3                   	ret
    7ed5:	52                   	push   %dx
    7ed6:	66 53                	push   %ebx
    7ed8:	e8 a1 ff             	call   0x7e7c
    7edb:	66 5b                	pop    %ebx
    7edd:	5a                   	pop    %dx
    7ede:	c3                   	ret
    7edf:	66 50                	push   %eax
    7ee1:	55                   	push   %bp
    7ee2:	52                   	push   %dx
    7ee3:	66 50                	push   %eax
    7ee5:	8b ec                	mov    %sp,%bp
    7ee7:	8b 56 0c             	mov    0xc(%bp),%dx
    7eea:	89 56 08             	mov    %dx,0x8(%bp)
    7eed:	e8 c4 fd             	call   0x7cb4
    7ef0:	b2 30                	mov    $0x30,%dl
    7ef2:	66 ed                	in     (%dx),%eax
    7ef4:	66 89 46 0a          	mov    %eax,0xa(%bp)
    7ef8:	66 58                	pop    %eax
    7efa:	5a                   	pop    %dx
    7efb:	5d                   	pop    %bp
    7efc:	c3                   	ret
    7efd:	66 50                	push   %eax
    7eff:	55                   	push   %bp
    7f00:	52                   	push   %dx
    7f01:	66 50                	push   %eax
    7f03:	8b ec                	mov    %sp,%bp
    7f05:	8b 56 0c             	mov    0xc(%bp),%dx
    7f08:	89 56 08             	mov    %dx,0x8(%bp)
    7f0b:	e8 a6 fd             	call   0x7cb4
    7f0e:	2e a1 26 63          	mov    %cs:0x6326,%ax
    7f12:	b2 18                	mov    $0x18,%dl
    7f14:	ef                   	out    %ax,(%dx)
    7f15:	b2 30                	mov    $0x30,%dl
    7f17:	66 ed                	in     (%dx),%eax
    7f19:	66 89 46 0a          	mov    %eax,0xa(%bp)
    7f1d:	66 58                	pop    %eax
    7f1f:	5a                   	pop    %dx
    7f20:	5d                   	pop    %bp
    7f21:	c3                   	ret
    7f22:	66 50                	push   %eax
    7f24:	55                   	push   %bp
    7f25:	52                   	push   %dx
    7f26:	8b ec                	mov    %sp,%bp
    7f28:	e8 89 fd             	call   0x7cb4
    7f2b:	b2 30                	mov    $0x30,%dl
    7f2d:	66 8b 46 0a          	mov    0xa(%bp),%eax
    7f31:	66 ef                	out    %eax,(%dx)
    7f33:	8b 56 08             	mov    0x8(%bp),%dx
    7f36:	89 56 0c             	mov    %dx,0xc(%bp)
    7f39:	66 8b 46 04          	mov    0x4(%bp),%eax
    7f3d:	66 89 46 08          	mov    %eax,0x8(%bp)
    7f41:	5a                   	pop    %dx
    7f42:	5d                   	pop    %bp
    7f43:	66 58                	pop    %eax
    7f45:	66 58                	pop    %eax
    7f47:	c3                   	ret
    7f48:	66 50                	push   %eax
    7f4a:	52                   	push   %dx
    7f4b:	e8 66 fd             	call   0x7cb4
    7f4e:	b2 18                	mov    $0x18,%dl
    7f50:	66 ed                	in     (%dx),%eax
    7f52:	2e a3 26 63          	mov    %ax,%cs:0x6326
    7f56:	5a                   	pop    %dx
    7f57:	66 58                	pop    %eax
    7f59:	c3                   	ret
    7f5a:	66 52                	push   %edx
    7f5c:	66 53                	push   %ebx
    7f5e:	e8 53 fd             	call   0x7cb4
    7f61:	66 81 cb 00 00 00 80 	or     $0x80000000,%ebx
    7f68:	e8 4e 00             	call   0x7fb9
    7f6b:	66 5b                	pop    %ebx
    7f6d:	66 5a                	pop    %edx
    7f6f:	c3                   	ret
    7f70:	66 52                	push   %edx
    7f72:	66 53                	push   %ebx
    7f74:	e8 3d fd             	call   0x7cb4
    7f77:	66 81 cb 00 00 00 80 	or     $0x80000000,%ebx
    7f7e:	e8 44 00             	call   0x7fc5
    7f81:	66 5b                	pop    %ebx
    7f83:	66 5a                	pop    %edx
    7f85:	c3                   	ret
    7f86:	66 81 fb ff 00 00 00 	cmp    $0xff,%ebx
    7f8d:	77 04                	ja     0x7f93
    7f8f:	8a d3                	mov    %bl,%dl
    7f91:	eb 09                	jmp    0x7f9c
    7f93:	66 8b c3             	mov    %ebx,%eax
    7f96:	b2 30                	mov    $0x30,%dl
    7f98:	66 ef                	out    %eax,(%dx)
    7f9a:	b2 34                	mov    $0x34,%dl
    7f9c:	66 ed                	in     (%dx),%eax
    7f9e:	c3                   	ret
    7f9f:	66 81 fb ff 00 00 00 	cmp    $0xff,%ebx
    7fa6:	77 04                	ja     0x7fac
    7fa8:	8a d3                	mov    %bl,%dl
    7faa:	eb 0a                	jmp    0x7fb6
    7fac:	66 93                	xchg   %eax,%ebx
    7fae:	b2 30                	mov    $0x30,%dl
    7fb0:	66 ef                	out    %eax,(%dx)
    7fb2:	66 93                	xchg   %eax,%ebx
    7fb4:	b2 34                	mov    $0x34,%dl
    7fb6:	66 ef                	out    %eax,(%dx)
    7fb8:	c3                   	ret
    7fb9:	66 8b c3             	mov    %ebx,%eax
    7fbc:	b2 00                	mov    $0x0,%dl
    7fbe:	66 ef                	out    %eax,(%dx)
    7fc0:	b2 04                	mov    $0x4,%dl
    7fc2:	66 ed                	in     (%dx),%eax
    7fc4:	c3                   	ret
    7fc5:	66 93                	xchg   %eax,%ebx
    7fc7:	b2 00                	mov    $0x0,%dl
    7fc9:	66 ef                	out    %eax,(%dx)
    7fcb:	66 93                	xchg   %eax,%ebx
    7fcd:	b2 04                	mov    $0x4,%dl
    7fcf:	66 ef                	out    %eax,(%dx)
    7fd1:	c3                   	ret
    7fd2:	c3                   	ret
    7fd3:	c3                   	ret
    7fd4:	55                   	push   %bp
    7fd5:	8b ec                	mov    %sp,%bp
    7fd7:	53                   	push   %bx
    7fd8:	51                   	push   %cx
    7fd9:	8b f0                	mov    %ax,%si
    7fdb:	26 8b 5c 14          	mov    %es:0x14(%si),%bx
    7fdf:	26 8b 4c 16          	mov    %es:0x16(%si),%cx
    7fe3:	e8 28 00             	call   0x800e
    7fe6:	8d 66 fc             	lea    -0x4(%bp),%sp
    7fe9:	59                   	pop    %cx
    7fea:	5b                   	pop    %bx
    7feb:	5d                   	pop    %bp
    7fec:	c3                   	ret
    7fed:	53                   	push   %bx
    7fee:	51                   	push   %cx
    7fef:	8b f0                	mov    %ax,%si
    7ff1:	26 8b 5c 24          	mov    %es:0x24(%si),%bx
    7ff5:	33 c9                	xor    %cx,%cx
    7ff7:	e8 14 00             	call   0x800e
    7ffa:	59                   	pop    %cx
    7ffb:	5b                   	pop    %bx
    7ffc:	c3                   	ret
    7ffd:	55                   	push   %bp
    7ffe:	8b ec                	mov    %sp,%bp
    8000:	53                   	push   %bx
    8001:	51                   	push   %cx
    8002:	8b f0                	mov    %ax,%si
    8004:	26 8b 5c 08          	mov    %es:0x8(%si),%bx
    8008:	26 8b 4c 0a          	mov    %es:0xa(%si),%cx
    800c:	eb d5                	jmp    0x7fe3
    800e:	52                   	push   %dx
    800f:	56                   	push   %si
    8010:	57                   	push   %di
    8011:	c8 06 00 00          	enter  $0x6,$0x0
    8015:	8b f0                	mov    %ax,%si
    8017:	89 4e fe             	mov    %cx,-0x2(%bp)
    801a:	8c d0                	mov    %ss,%ax
    801c:	8e c0                	mov    %ax,%es
    801e:	26 8b 7c 26          	mov    %es:0x26(%si),%di
    8022:	8a 45 01             	mov    0x1(%di),%al
    8025:	32 e4                	xor    %ah,%ah
    8027:	b9 20 00             	mov    $0x20,%cx
    802a:	2b c8                	sub    %ax,%cx
    802c:	b8 ff ff             	mov    $0xffff,%ax
    802f:	8b d0                	mov    %ax,%dx
    8031:	e3 06                	jcxz   0x8039
    8033:	d1 ea                	shr    $1,%dx
    8035:	d1 d8                	rcr    $1,%ax
    8037:	e2 fa                	loop   0x8033
    8039:	8a 4d 03             	mov    0x3(%di),%cl
    803c:	32 ed                	xor    %ch,%ch
    803e:	8b fa                	mov    %dx,%di
    8040:	e3 06                	jcxz   0x8048
    8042:	d1 e0                	shl    $1,%ax
    8044:	d1 d7                	rcl    $1,%di
    8046:	e2 fa                	loop   0x8042
    8048:	f7 d0                	not    %ax
    804a:	f7 d7                	not    %di
    804c:	26 21 44 1c          	and    %ax,%es:0x1c(%si)
    8050:	26 21 7c 1e          	and    %di,%es:0x1e(%si)
    8054:	8c d0                	mov    %ss,%ax
    8056:	8e c0                	mov    %ax,%es
    8058:	26 8b 7c 26          	mov    %es:0x26(%si),%di
    805c:	8a 4d 01             	mov    0x1(%di),%cl
    805f:	32 ed                	xor    %ch,%ch
    8061:	b8 20 00             	mov    $0x20,%ax
    8064:	2b c1                	sub    %cx,%ax
    8066:	8b c8                	mov    %ax,%cx
    8068:	66 c7 46 fa ff ff ff 	movl   $0xffffffff,-0x6(%bp)
    806f:	ff 
    8070:	e3 08                	jcxz   0x807a
    8072:	d1 6e fc             	shrw   $1,-0x4(%bp)
    8075:	d1 5e fa             	rcrw   $1,-0x6(%bp)
    8078:	e2 f8                	loop   0x8072
    807a:	8a 4d 02             	mov    0x2(%di),%cl
    807d:	32 ed                	xor    %ch,%ch
    807f:	8b c3                	mov    %bx,%ax
    8081:	8b 56 fe             	mov    -0x2(%bp),%dx
    8084:	e3 06                	jcxz   0x808c
    8086:	d1 ea                	shr    $1,%dx
    8088:	d1 d8                	rcr    $1,%ax
    808a:	e2 fa                	loop   0x8086
    808c:	23 46 fa             	and    -0x6(%bp),%ax
    808f:	23 56 fc             	and    -0x4(%bp),%dx
    8092:	8a 4d 03             	mov    0x3(%di),%cl
    8095:	32 ed                	xor    %ch,%ch
    8097:	e3 06                	jcxz   0x809f
    8099:	d1 e0                	shl    $1,%ax
    809b:	d1 d2                	rcl    $1,%dx
    809d:	e2 fa                	loop   0x8099
    809f:	26 09 44 1c          	or     %ax,%es:0x1c(%si)
    80a3:	26 09 54 1e          	or     %dx,%es:0x1e(%si)
    80a7:	c9                   	leave
    80a8:	5f                   	pop    %di
    80a9:	5e                   	pop    %si
    80aa:	5a                   	pop    %dx
    80ab:	c3                   	ret
    80ac:	55                   	push   %bp
    80ad:	8b ec                	mov    %sp,%bp
    80af:	53                   	push   %bx
    80b0:	51                   	push   %cx
    80b1:	52                   	push   %dx
    80b2:	57                   	push   %di
    80b3:	50                   	push   %ax
    80b4:	8b d8                	mov    %ax,%bx
    80b6:	26 8b 7f 26          	mov    %es:0x26(%bx),%di
    80ba:	8a 45 01             	mov    0x1(%di),%al
    80bd:	32 e4                	xor    %ah,%ah
    80bf:	b9 20 00             	mov    $0x20,%cx
    80c2:	2b c8                	sub    %ax,%cx
    80c4:	b8 ff ff             	mov    $0xffff,%ax
    80c7:	8b d0                	mov    %ax,%dx
    80c9:	e3 06                	jcxz   0x80d1
    80cb:	d1 ea                	shr    $1,%dx
    80cd:	d1 d8                	rcr    $1,%ax
    80cf:	e2 fa                	loop   0x80cb
    80d1:	8a 4d 02             	mov    0x2(%di),%cl
    80d4:	88 4e f6             	mov    %cl,-0xa(%bp)
    80d7:	c6 46 f7 00          	movb   $0x0,-0x9(%bp)
    80db:	8b fa                	mov    %dx,%di
    80dd:	8b 4e f6             	mov    -0xa(%bp),%cx
    80e0:	e3 06                	jcxz   0x80e8
    80e2:	d1 e0                	shl    $1,%ax
    80e4:	d1 d7                	rcl    $1,%di
    80e6:	e2 fa                	loop   0x80e2
    80e8:	26 09 47 1c          	or     %ax,%es:0x1c(%bx)
    80ec:	26 09 7f 1e          	or     %di,%es:0x1e(%bx)
    80f0:	8d 66 f8             	lea    -0x8(%bp),%sp
    80f3:	5f                   	pop    %di
    80f4:	5a                   	pop    %dx
    80f5:	e9 f1 fe             	jmp    0x7fe9
    80f8:	53                   	push   %bx
    80f9:	51                   	push   %cx
    80fa:	52                   	push   %dx
    80fb:	57                   	push   %di
    80fc:	8b d8                	mov    %ax,%bx
    80fe:	8c d0                	mov    %ss,%ax
    8100:	8e c0                	mov    %ax,%es
    8102:	26 8b 77 26          	mov    %es:0x26(%bx),%si
    8106:	8a 4c 01             	mov    0x1(%si),%cl
    8109:	32 ed                	xor    %ch,%ch
    810b:	b8 20 00             	mov    $0x20,%ax
    810e:	2b c1                	sub    %cx,%ax
    8110:	8b c8                	mov    %ax,%cx
    8112:	be ff ff             	mov    $0xffff,%si
    8115:	8b d6                	mov    %si,%dx
    8117:	e3 06                	jcxz   0x811f
    8119:	d1 ea                	shr    $1,%dx
    811b:	d1 de                	rcr    $1,%si
    811d:	e2 fa                	loop   0x8119
    811f:	26 8b 7f 26          	mov    %es:0x26(%bx),%di
    8123:	8a 4d 02             	mov    0x2(%di),%cl
    8126:	32 ed                	xor    %ch,%ch
    8128:	8b c6                	mov    %si,%ax
    812a:	e3 06                	jcxz   0x8132
    812c:	d1 e0                	shl    $1,%ax
    812e:	d1 d2                	rcl    $1,%dx
    8130:	e2 fa                	loop   0x812c
    8132:	f7 d0                	not    %ax
    8134:	f7 d2                	not    %dx
    8136:	26 21 47 1c          	and    %ax,%es:0x1c(%bx)
    813a:	26 21 57 1e          	and    %dx,%es:0x1e(%bx)
    813e:	5f                   	pop    %di
    813f:	e9 cc 05             	jmp    0x870e
    8142:	53                   	push   %bx
    8143:	56                   	push   %si
    8144:	8b d8                	mov    %ax,%bx
    8146:	8c d2                	mov    %ss,%dx
    8148:	8e c2                	mov    %dx,%es
    814a:	26 8b 77 26          	mov    %es:0x26(%bx),%si
    814e:	80 3c 00             	cmpb   $0x0,(%si)
    8151:	74 73                	je     0x81c6
    8153:	80 3c 01             	cmpb   $0x1,(%si)
    8156:	75 58                	jne    0x81b0
    8158:	8a 44 01             	mov    0x1(%si),%al
    815b:	32 e4                	xor    %ah,%ah
    815d:	26 83 7f 1e 00       	cmpw   $0x0,%es:0x1e(%bx)
    8162:	75 4c                	jne    0x81b0
    8164:	26 3b 47 1c          	cmp    %es:0x1c(%bx),%ax
    8168:	75 46                	jne    0x81b0
    816a:	8a 04                	mov    (%si),%al
    816c:	6b f0 03             	imul   $0x3,%ax,%si
    816f:	8a 84 4a de          	mov    -0x21b6(%si),%al
    8173:	26 01 47 26          	add    %ax,%es:0x26(%bx)
    8177:	8c d0                	mov    %ss,%ax
    8179:	8e c0                	mov    %ax,%es
    817b:	26 8b 77 26          	mov    %es:0x26(%bx),%si
    817f:	80 3c 09             	cmpb   $0x9,(%si)
    8182:	74 17                	je     0x819b
    8184:	8a 04                	mov    (%si),%al
    8186:	32 e4                	xor    %ah,%ah
    8188:	6b f0 03             	imul   $0x3,%ax,%si
    818b:	8b c3                	mov    %bx,%ax
    818d:	ff 94 48 de          	call   *-0x21b8(%si)
    8191:	26 8b 77 26          	mov    %es:0x26(%bx),%si
    8195:	8a 04                	mov    (%si),%al
    8197:	32 e4                	xor    %ah,%ah
    8199:	eb d1                	jmp    0x816c
    819b:	8b 44 01             	mov    0x1(%si),%ax
    819e:	26 29 47 26          	sub    %ax,%es:0x26(%bx)
    81a2:	26 ff 47 26          	incw   %es:0x26(%bx)
    81a6:	26 8b 47 1c          	mov    %es:0x1c(%bx),%ax
    81aa:	26 8b 77 1e          	mov    %es:0x1e(%bx),%si
    81ae:	eb 1a                	jmp    0x81ca
    81b0:	26 8b 77 26          	mov    %es:0x26(%bx),%si
    81b4:	8a 04                	mov    (%si),%al
    81b6:	32 e4                	xor    %ah,%ah
    81b8:	6b f0 03             	imul   $0x3,%ax,%si
    81bb:	8a 84 4a de          	mov    -0x21b6(%si),%al
    81bf:	26 01 47 26          	add    %ax,%es:0x26(%bx)
    81c3:	e9 80 ff             	jmp    0x8146
    81c6:	33 c0                	xor    %ax,%ax
    81c8:	33 f6                	xor    %si,%si
    81ca:	8b d6                	mov    %si,%dx
    81cc:	5e                   	pop    %si
    81cd:	5b                   	pop    %bx
    81ce:	c3                   	ret
    81cf:	53                   	push   %bx
    81d0:	51                   	push   %cx
    81d1:	52                   	push   %dx
    81d2:	56                   	push   %si
    81d3:	8b d8                	mov    %ax,%bx
    81d5:	8d 77 35             	lea    0x35(%bx),%si
    81d8:	26 8b 54 02          	mov    %es:0x2(%si),%dx
    81dc:	26 89 57 14          	mov    %dx,%es:0x14(%bx)
    81e0:	26 c7 47 16 00 00    	movw   $0x0,%es:0x16(%bx)
    81e6:	8b f0                	mov    %ax,%si
    81e8:	26 8b 47 20          	mov    %es:0x20(%bx),%ax
    81ec:	33 d2                	xor    %dx,%dx
    81ee:	26 01 47 14          	add    %ax,%es:0x14(%bx)
    81f2:	26 11 54 16          	adc    %dx,%es:0x16(%si)
    81f6:	8c d1                	mov    %ss,%cx
    81f8:	8e c1                	mov    %cx,%es
    81fa:	26 f6 47 2f 06       	testb  $0x6,%es:0x2f(%bx)
    81ff:	0f 85 0a 05          	jne    0x870d
    8203:	26 80 7f 34 00       	cmpb   $0x0,%es:0x34(%bx)
    8208:	75 22                	jne    0x822c
    820a:	26 8b 77 16          	mov    %es:0x16(%bx),%si
    820e:	26 0b 77 14          	or     %es:0x14(%bx),%si
    8212:	75 10                	jne    0x8224
    8214:	26 d1 67 08          	shlw   $1,%es:0x8(%bx)
    8218:	26 d1 57 0a          	rclw   $1,%es:0xa(%bx)
    821c:	26 d1 67 08          	shlw   $1,%es:0x8(%bx)
    8220:	26 d1 57 0a          	rclw   $1,%es:0xa(%bx)
    8224:	8b c3                	mov    %bx,%ax
    8226:	e8 79 11             	call   0x93a2
    8229:	e9 e1 04             	jmp    0x870d
    822c:	26 8a 47 34          	mov    %es:0x34(%bx),%al
    8230:	32 e4                	xor    %ah,%ah
    8232:	05 80 00             	add    $0x80,%ax
    8235:	99                   	cwtd
    8236:	26 89 47 1c          	mov    %ax,%es:0x1c(%bx)
    823a:	26 89 57 1e          	mov    %dx,%es:0x1e(%bx)
    823e:	8b c3                	mov    %bx,%ax
    8240:	e8 ff fe             	call   0x8142
    8243:	e9 c7 04             	jmp    0x870d
    8246:	53                   	push   %bx
    8247:	56                   	push   %si
    8248:	8b d8                	mov    %ax,%bx
    824a:	8d 77 35             	lea    0x35(%bx),%si
    824d:	26 8a 44 02          	mov    %es:0x2(%si),%al
    8251:	32 e4                	xor    %ah,%ah
    8253:	c1 e0 02             	shl    $0x2,%ax
    8256:	26 8b 37             	mov    %es:(%bx),%si
    8259:	26 8b 34             	mov    %es:(%si),%si
    825c:	03 f0                	add    %ax,%si
    825e:	26 8b 47 08          	mov    %es:0x8(%bx),%ax
    8262:	26 8b 5f 0a          	mov    %es:0xa(%bx),%bx
    8266:	26 89 04             	mov    %ax,%es:(%si)
    8269:	26 89 5c 02          	mov    %bx,%es:0x2(%si)
    826d:	5e                   	pop    %si
    826e:	5b                   	pop    %bx
    826f:	c3                   	ret
    8270:	53                   	push   %bx
    8271:	52                   	push   %dx
    8272:	56                   	push   %si
    8273:	8b d8                	mov    %ax,%bx
    8275:	8c d0                	mov    %ss,%ax
    8277:	8d 77 35             	lea    0x35(%bx),%si
    827a:	8e c0                	mov    %ax,%es
    827c:	26 8a 54 02          	mov    %es:0x2(%si),%dl
    8280:	80 fa 40             	cmp    $0x40,%dl
    8283:	73 21                	jae    0x82a6
    8285:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    8289:	32 f6                	xor    %dh,%dh
    828b:	c1 e2 02             	shl    $0x2,%dx
    828e:	26 8b 74 04          	mov    %es:0x4(%si),%si
    8292:	03 f2                	add    %dx,%si
    8294:	26 8b 57 08          	mov    %es:0x8(%bx),%dx
    8298:	26 8b 47 0a          	mov    %es:0xa(%bx),%ax
    829c:	26 89 14             	mov    %dx,%es:(%si)
    829f:	26 89 44 02          	mov    %ax,%es:0x2(%si)
    82a3:	e9 7f 00             	jmp    0x8325
    82a6:	80 fa 41             	cmp    $0x41,%dl
    82a9:	75 12                	jne    0x82bd
    82ab:	26 8b 47 08          	mov    %es:0x8(%bx),%ax
    82af:	26 8b 57 0a          	mov    %es:0xa(%bx),%dx
    82b3:	26 89 47 10          	mov    %ax,%es:0x10(%bx)
    82b7:	26 89 57 12          	mov    %dx,%es:0x12(%bx)
    82bb:	eb 68                	jmp    0x8325
    82bd:	80 fa 40             	cmp    $0x40,%dl
    82c0:	75 12                	jne    0x82d4
    82c2:	26 8b 47 08          	mov    %es:0x8(%bx),%ax
    82c6:	26 8b 57 0a          	mov    %es:0xa(%bx),%dx
    82ca:	26 89 47 0c          	mov    %ax,%es:0xc(%bx)
    82ce:	26 89 57 0e          	mov    %dx,%es:0xe(%bx)
    82d2:	eb 51                	jmp    0x8325
    82d4:	80 fa 42             	cmp    $0x42,%dl
    82d7:	75 0a                	jne    0x82e3
    82d9:	26 8b 47 08          	mov    %es:0x8(%bx),%ax
    82dd:	26 89 47 22          	mov    %ax,%es:0x22(%bx)
    82e1:	eb 42                	jmp    0x8325
    82e3:	80 fa 43             	cmp    $0x43,%dl
    82e6:	75 0a                	jne    0x82f2
    82e8:	26 8a 47 08          	mov    %es:0x8(%bx),%al
    82ec:	26 88 47 33          	mov    %al,%es:0x33(%bx)
    82f0:	eb 33                	jmp    0x8325
    82f2:	80 fa 46             	cmp    $0x46,%dl
    82f5:	75 12                	jne    0x8309
    82f7:	26 8b 57 08          	mov    %es:0x8(%bx),%dx
    82fb:	26 8b 47 0a          	mov    %es:0xa(%bx),%ax
    82ff:	26 89 57 18          	mov    %dx,%es:0x18(%bx)
    8303:	26 89 47 1a          	mov    %ax,%es:0x1a(%bx)
    8307:	eb 1c                	jmp    0x8325
    8309:	80 fa 47             	cmp    $0x47,%dl
    830c:	75 0a                	jne    0x8318
    830e:	26 8b 47 08          	mov    %es:0x8(%bx),%ax
    8312:	26 89 47 24          	mov    %ax,%es:0x24(%bx)
    8316:	eb 0d                	jmp    0x8325
    8318:	80 fa 48             	cmp    $0x48,%dl
    831b:	75 08                	jne    0x8325
    831d:	26 8b 47 08          	mov    %es:0x8(%bx),%ax
    8321:	26 89 47 20          	mov    %ax,%es:0x20(%bx)
    8325:	5e                   	pop    %si
    8326:	5a                   	pop    %dx
    8327:	5b                   	pop    %bx
    8328:	c3                   	ret
    8329:	53                   	push   %bx
    832a:	56                   	push   %si
    832b:	8b d8                	mov    %ax,%bx
    832d:	8d 77 35             	lea    0x35(%bx),%si
    8330:	26 8a 44 02          	mov    %es:0x2(%si),%al
    8334:	32 e4                	xor    %ah,%ah
    8336:	26 89 47 14          	mov    %ax,%es:0x14(%bx)
    833a:	26 c7 47 16 00 00    	movw   $0x0,%es:0x16(%bx)
    8340:	5e                   	pop    %si
    8341:	5b                   	pop    %bx
    8342:	c3                   	ret
    8343:	53                   	push   %bx
    8344:	56                   	push   %si
    8345:	8b d8                	mov    %ax,%bx
    8347:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    834b:	26 8b 74 02          	mov    %es:0x2(%si),%si
    834f:	8a 04                	mov    (%si),%al
    8351:	32 e4                	xor    %ah,%ah
    8353:	26 89 47 14          	mov    %ax,%es:0x14(%bx)
    8357:	26 c7 47 16 00 00    	movw   $0x0,%es:0x16(%bx)
    835d:	26 8b 5f 02          	mov    %es:0x2(%bx),%bx
    8361:	26 ff 47 02          	incw   %es:0x2(%bx)
    8365:	5e                   	pop    %si
    8366:	5b                   	pop    %bx
    8367:	c3                   	ret
    8368:	53                   	push   %bx
    8369:	56                   	push   %si
    836a:	8b d8                	mov    %ax,%bx
    836c:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    8370:	26 8b 74 02          	mov    %es:0x2(%si),%si
    8374:	8b 34                	mov    (%si),%si
    8376:	26 89 77 14          	mov    %si,%es:0x14(%bx)
    837a:	26 c7 47 16 00 00    	movw   $0x0,%es:0x16(%bx)
    8380:	26 8b 5f 02          	mov    %es:0x2(%bx),%bx
    8384:	26 83 47 02 02       	addw   $0x2,%es:0x2(%bx)
    8389:	5e                   	pop    %si
    838a:	5b                   	pop    %bx
    838b:	c3                   	ret
    838c:	53                   	push   %bx
    838d:	56                   	push   %si
    838e:	8b d8                	mov    %ax,%bx
    8390:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    8394:	26 8b 74 02          	mov    %es:0x2(%si),%si
    8398:	8b 04                	mov    (%si),%ax
    839a:	8b 74 02             	mov    0x2(%si),%si
    839d:	26 89 47 14          	mov    %ax,%es:0x14(%bx)
    83a1:	26 89 77 16          	mov    %si,%es:0x16(%bx)
    83a5:	26 8b 5f 02          	mov    %es:0x2(%bx),%bx
    83a9:	26 83 47 02 04       	addw   $0x4,%es:0x2(%bx)
    83ae:	5e                   	pop    %si
    83af:	5b                   	pop    %bx
    83b0:	c3                   	ret
    83b1:	53                   	push   %bx
    83b2:	52                   	push   %dx
    83b3:	56                   	push   %si
    83b4:	8b d8                	mov    %ax,%bx
    83b6:	e8 70 ff             	call   0x8329
    83b9:	8b f3                	mov    %bx,%si
    83bb:	26 8b 47 18          	mov    %es:0x18(%bx),%ax
    83bf:	26 8b 57 1a          	mov    %es:0x1a(%bx),%dx
    83c3:	d1 ea                	shr    $1,%dx
    83c5:	d1 d8                	rcr    $1,%ax
    83c7:	d1 ea                	shr    $1,%dx
    83c9:	d1 d8                	rcr    $1,%ax
    83cb:	26 01 47 14          	add    %ax,%es:0x14(%bx)
    83cf:	26 11 54 16          	adc    %dx,%es:0x16(%si)
    83d3:	8b c3                	mov    %bx,%ax
    83d5:	e8 2b 10             	call   0x9403
    83d8:	e9 4a ff             	jmp    0x8325
    83db:	53                   	push   %bx
    83dc:	8b d8                	mov    %ax,%bx
    83de:	26 8b 5f 02          	mov    %es:0x2(%bx),%bx
    83e2:	26 ff 47 02          	incw   %es:0x2(%bx)
    83e6:	5b                   	pop    %bx
    83e7:	c3                   	ret
    83e8:	53                   	push   %bx
    83e9:	8b d8                	mov    %ax,%bx
    83eb:	26 8b 5f 02          	mov    %es:0x2(%bx),%bx
    83ef:	26 83 47 02 02       	addw   $0x2,%es:0x2(%bx)
    83f4:	5b                   	pop    %bx
    83f5:	c3                   	ret
    83f6:	53                   	push   %bx
    83f7:	56                   	push   %si
    83f8:	8b d8                	mov    %ax,%bx
    83fa:	e8 6b ff             	call   0x8368
    83fd:	8b f3                	mov    %bx,%si
    83ff:	26 8b 57 20          	mov    %es:0x20(%bx),%dx
    8403:	33 c0                	xor    %ax,%ax
    8405:	26 01 57 14          	add    %dx,%es:0x14(%bx)
    8409:	26 11 44 16          	adc    %ax,%es:0x16(%si)
    840d:	8c d2                	mov    %ss,%dx
    840f:	8e c2                	mov    %dx,%es
    8411:	26 8b 47 2e          	mov    %es:0x2e(%bx),%ax
    8415:	32 c0                	xor    %al,%al
    8417:	80 e4 06             	and    $0x6,%ah
    841a:	3d 00 02             	cmp    $0x200,%ax
    841d:	75 07                	jne    0x8426
    841f:	32 e4                	xor    %ah,%ah
    8421:	33 d2                	xor    %dx,%dx
    8423:	5e                   	pop    %si
    8424:	5b                   	pop    %bx
    8425:	c3                   	ret
    8426:	26 8b 47 2e          	mov    %es:0x2e(%bx),%ax
    842a:	32 c0                	xor    %al,%al
    842c:	80 e4 06             	and    $0x6,%ah
    842f:	3d 00 04             	cmp    $0x400,%ax
    8432:	74 eb                	je     0x841f
    8434:	26 80 7f 34 00       	cmpb   $0x0,%es:0x34(%bx)
    8439:	75 08                	jne    0x8443
    843b:	8b c3                	mov    %bx,%ax
    843d:	e8 2f 0f             	call   0x936f
    8440:	5e                   	pop    %si
    8441:	5b                   	pop    %bx
    8442:	c3                   	ret
    8443:	26 8a 47 34          	mov    %es:0x34(%bx),%al
    8447:	32 e4                	xor    %ah,%ah
    8449:	26 89 47 1c          	mov    %ax,%es:0x1c(%bx)
    844d:	26 c7 47 1e 00 00    	movw   $0x0,%es:0x1e(%bx)
    8453:	8b c3                	mov    %bx,%ax
    8455:	e8 ea fc             	call   0x8142
    8458:	5e                   	pop    %si
    8459:	5b                   	pop    %bx
    845a:	c3                   	ret
    845b:	53                   	push   %bx
    845c:	8b d8                	mov    %ax,%bx
    845e:	e8 e2 fe             	call   0x8343
    8461:	26 8b 47 14          	mov    %es:0x14(%bx),%ax
    8465:	c1 e0 02             	shl    $0x2,%ax
    8468:	26 8b 1f             	mov    %es:(%bx),%bx
    846b:	26 8b 1f             	mov    %es:(%bx),%bx
    846e:	03 d8                	add    %ax,%bx
    8470:	26 8b 07             	mov    %es:(%bx),%ax
    8473:	26 8b 57 02          	mov    %es:0x2(%bx),%dx
    8477:	5b                   	pop    %bx
    8478:	c3                   	ret
    8479:	e7 84                	out    %ax,$0x84
    847b:	dc 84 f2 84          	faddl  -0x7b0e(%si)
    847f:	41                   	inc    %cx
    8480:	85 f8                	test   %di,%ax
    8482:	84 10                	test   %dl,(%bx,%si)
    8484:	85 2a                	test   %bp,(%bp,%si)
    8486:	85 35                	test   %si,(%di)
    8488:	85 3b                	test   %di,(%bp,%di)
    848a:	85 53 51             	test   %dx,0x51(%bp,%di)
    848d:	56                   	push   %si
    848e:	8b d8                	mov    %ax,%bx
    8490:	e8 b0 fe             	call   0x8343
    8493:	8c d2                	mov    %ss,%dx
    8495:	8e c2                	mov    %dx,%es
    8497:	26 83 7f 16 00       	cmpw   $0x0,%es:0x16(%bx)
    849c:	75 22                	jne    0x84c0
    849e:	26 83 7f 14 40       	cmpw   $0x40,%es:0x14(%bx)
    84a3:	73 1b                	jae    0x84c0
    84a5:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    84a9:	26 8b 5f 14          	mov    %es:0x14(%bx),%bx
    84ad:	c1 e3 02             	shl    $0x2,%bx
    84b0:	26 8b 44 04          	mov    %es:0x4(%si),%ax
    84b4:	03 d8                	add    %ax,%bx
    84b6:	26 8b 07             	mov    %es:(%bx),%ax
    84b9:	26 8b 57 02          	mov    %es:0x2(%bx),%dx
    84bd:	e9 7b 05             	jmp    0x8a3b
    84c0:	26 8b 77 14          	mov    %es:0x14(%bx),%si
    84c4:	26 8b 47 16          	mov    %es:0x16(%bx),%ax
    84c8:	83 c6 c0             	add    $0xffc0,%si
    84cb:	83 d0 ff             	adc    $0xffff,%ax
    84ce:	75 71                	jne    0x8541
    84d0:	83 fe 08             	cmp    $0x8,%si
    84d3:	77 6c                	ja     0x8541
    84d5:	03 f6                	add    %si,%si
    84d7:	2e ff a4 79 84       	jmp    *%cs:-0x7b87(%si)
    84dc:	26 8b 47 10          	mov    %es:0x10(%bx),%ax
    84e0:	26 8b 57 12          	mov    %es:0x12(%bx),%dx
    84e4:	e9 54 05             	jmp    0x8a3b
    84e7:	26 8b 47 0c          	mov    %es:0xc(%bx),%ax
    84eb:	26 8b 57 0e          	mov    %es:0xe(%bx),%dx
    84ef:	e9 49 05             	jmp    0x8a3b
    84f2:	26 8b 47 22          	mov    %es:0x22(%bx),%ax
    84f6:	eb 4b                	jmp    0x8543
    84f8:	26 8a 4f 33          	mov    %es:0x33(%bx),%cl
    84fc:	32 ed                	xor    %ch,%ch
    84fe:	bb 01 00             	mov    $0x1,%bx
    8501:	33 d2                	xor    %dx,%dx
    8503:	e3 06                	jcxz   0x850b
    8505:	d1 e3                	shl    $1,%bx
    8507:	d1 d2                	rcl    $1,%dx
    8509:	e2 fa                	loop   0x8505
    850b:	8b c3                	mov    %bx,%ax
    850d:	e9 2b 05             	jmp    0x8a3b
    8510:	26 8a 4f 33          	mov    %es:0x33(%bx),%cl
    8514:	32 ed                	xor    %ch,%ch
    8516:	b8 01 00             	mov    $0x1,%ax
    8519:	33 d2                	xor    %dx,%dx
    851b:	e3 06                	jcxz   0x8523
    851d:	d1 e0                	shl    $1,%ax
    851f:	d1 d2                	rcl    $1,%dx
    8521:	e2 fa                	loop   0x851d
    8523:	f7 d0                	not    %ax
    8525:	f7 d2                	not    %dx
    8527:	e9 11 05             	jmp    0x8a3b
    852a:	26 8b 47 18          	mov    %es:0x18(%bx),%ax
    852e:	26 8b 57 1a          	mov    %es:0x1a(%bx),%dx
    8532:	e9 06 05             	jmp    0x8a3b
    8535:	26 8b 47 24          	mov    %es:0x24(%bx),%ax
    8539:	eb 08                	jmp    0x8543
    853b:	26 8b 47 20          	mov    %es:0x20(%bx),%ax
    853f:	eb 02                	jmp    0x8543
    8541:	33 c0                	xor    %ax,%ax
    8543:	33 d2                	xor    %dx,%dx
    8545:	e9 f3 04             	jmp    0x8a3b
    8548:	53                   	push   %bx
    8549:	56                   	push   %si
    854a:	8b d8                	mov    %ax,%bx
    854c:	e8 f4 fd             	call   0x8343
    854f:	8b f3                	mov    %bx,%si
    8551:	26 8b 47 18          	mov    %es:0x18(%bx),%ax
    8555:	26 8b 57 1a          	mov    %es:0x1a(%bx),%dx
    8559:	d1 ea                	shr    $1,%dx
    855b:	d1 d8                	rcr    $1,%ax
    855d:	d1 ea                	shr    $1,%dx
    855f:	d1 d8                	rcr    $1,%ax
    8561:	26 01 47 14          	add    %ax,%es:0x14(%bx)
    8565:	26 11 54 16          	adc    %dx,%es:0x16(%si)
    8569:	8b c3                	mov    %bx,%ax
    856b:	e8 16 0e             	call   0x9384
    856e:	5e                   	pop    %si
    856f:	5b                   	pop    %bx
    8570:	c3                   	ret
    8571:	33 c0                	xor    %ax,%ax
    8573:	33 d2                	xor    %dx,%dx
    8575:	c3                   	ret
    8576:	53                   	push   %bx
    8577:	56                   	push   %si
    8578:	8b d8                	mov    %ax,%bx
    857a:	e8 eb fd             	call   0x8368
    857d:	26 8b 77 14          	mov    %es:0x14(%bx),%si
    8581:	26 03 77 22          	add    %es:0x22(%bx),%si
    8585:	8b 04                	mov    (%si),%ax
    8587:	8b 54 02             	mov    0x2(%si),%dx
    858a:	5e                   	pop    %si
    858b:	5b                   	pop    %bx
    858c:	c3                   	ret
    858d:	53                   	push   %bx
    858e:	8b d8                	mov    %ax,%bx
    8590:	26 c6 47 2b 04       	movb   $0x4,%es:0x2b(%bx)
    8595:	e8 ab fd             	call   0x8343
    8598:	26 8b 47 14          	mov    %es:0x14(%bx),%ax
    859c:	26 8b 57 16          	mov    %es:0x16(%bx),%dx
    85a0:	5b                   	pop    %bx
    85a1:	c3                   	ret
    85a2:	53                   	push   %bx
    85a3:	8b d8                	mov    %ax,%bx
    85a5:	26 c6 47 2b 01       	movb   $0x1,%es:0x2b(%bx)
    85aa:	e8 bb fd             	call   0x8368
    85ad:	eb e9                	jmp    0x8598
    85af:	53                   	push   %bx
    85b0:	8b d8                	mov    %ax,%bx
    85b2:	26 c6 47 2b 00       	movb   $0x0,%es:0x2b(%bx)
    85b7:	e8 d2 fd             	call   0x838c
    85ba:	eb dc                	jmp    0x8598
    85bc:	53                   	push   %bx
    85bd:	8b d8                	mov    %ax,%bx
    85bf:	83 c3 35             	add    $0x35,%bx
    85c2:	26 8a 5f 01          	mov    %es:0x1(%bx),%bl
    85c6:	c0 eb 03             	shr    $0x3,%bl
    85c9:	80 e3 07             	and    $0x7,%bl
    85cc:	32 ff                	xor    %bh,%bh
    85ce:	03 db                	add    %bx,%bx
    85d0:	ff 97 d8 dd          	call   *-0x2228(%bx)
    85d4:	5b                   	pop    %bx
    85d5:	c3                   	ret
    85d6:	53                   	push   %bx
    85d7:	52                   	push   %dx
    85d8:	56                   	push   %si
    85d9:	8b d8                	mov    %ax,%bx
    85db:	26 8a 47 2c          	mov    %es:0x2c(%bx),%al
    85df:	32 e4                	xor    %ah,%ah
    85e1:	8b f0                	mov    %ax,%si
    85e3:	03 f0                	add    %ax,%si
    85e5:	8b c3                	mov    %bx,%ax
    85e7:	ff 94 f4 dd          	call   *-0x220c(%si)
    85eb:	26 89 47 08          	mov    %ax,%es:0x8(%bx)
    85ef:	26 89 57 0a          	mov    %dx,%es:0xa(%bx)
    85f3:	26 8a 47 2d          	mov    %es:0x2d(%bx),%al
    85f7:	32 e4                	xor    %ah,%ah
    85f9:	8b f0                	mov    %ax,%si
    85fb:	03 f0                	add    %ax,%si
    85fd:	8b c3                	mov    %bx,%ax
    85ff:	ff 94 0c de          	call   *-0x21f4(%si)
    8603:	26 89 47 04          	mov    %ax,%es:0x4(%bx)
    8607:	26 89 57 06          	mov    %dx,%es:0x6(%bx)
    860b:	e9 17 fd             	jmp    0x8325
    860e:	53                   	push   %bx
    860f:	51                   	push   %cx
    8610:	56                   	push   %si
    8611:	8b d8                	mov    %ax,%bx
    8613:	26 8a 4f 2b          	mov    %es:0x2b(%bx),%cl
    8617:	32 ed                	xor    %ch,%ch
    8619:	8b f1                	mov    %cx,%si
    861b:	8a 8c 3c de          	mov    -0x21c4(%si),%cl
    861f:	e3 0a                	jcxz   0x862b
    8621:	26 d1 6f 06          	shrw   $1,%es:0x6(%bx)
    8625:	26 d1 5f 04          	rcrw   $1,%es:0x4(%bx)
    8629:	e2 f6                	loop   0x8621
    862b:	26 8a 4f 2b          	mov    %es:0x2b(%bx),%cl
    862f:	32 ed                	xor    %ch,%ch
    8631:	8b f1                	mov    %cx,%si
    8633:	c1 e6 02             	shl    $0x2,%si
    8636:	8b 8c 1c de          	mov    -0x21e4(%si),%cx
    863a:	8b b4 1e de          	mov    -0x21e2(%si),%si
    863e:	26 21 4f 04          	and    %cx,%es:0x4(%bx)
    8642:	26 21 77 06          	and    %si,%es:0x6(%bx)
    8646:	26 8a 4f 2a          	mov    %es:0x2a(%bx),%cl
    864a:	32 ed                	xor    %ch,%ch
    864c:	8b f1                	mov    %cx,%si
    864e:	8a 8c 44 de          	mov    -0x21bc(%si),%cl
    8652:	e3 0a                	jcxz   0x865e
    8654:	26 d1 67 04          	shlw   $1,%es:0x4(%bx)
    8658:	26 d1 57 06          	rclw   $1,%es:0x6(%bx)
    865c:	e2 f6                	loop   0x8654
    865e:	26 8b 4f 08          	mov    %es:0x8(%bx),%cx
    8662:	26 8b 77 0a          	mov    %es:0xa(%bx),%si
    8666:	26 89 4f 14          	mov    %cx,%es:0x14(%bx)
    866a:	26 89 77 16          	mov    %si,%es:0x16(%bx)
    866e:	e9 ca 03             	jmp    0x8a3b
    8671:	53                   	push   %bx
    8672:	51                   	push   %cx
    8673:	52                   	push   %dx
    8674:	56                   	push   %si
    8675:	57                   	push   %di
    8676:	8b d8                	mov    %ax,%bx
    8678:	8c d0                	mov    %ss,%ax
    867a:	8e c0                	mov    %ax,%es
    867c:	26 8a 47 2b          	mov    %es:0x2b(%bx),%al
    8680:	32 e4                	xor    %ah,%ah
    8682:	8b f0                	mov    %ax,%si
    8684:	c1 e6 02             	shl    $0x2,%si
    8687:	26 8a 47 2a          	mov    %es:0x2a(%bx),%al
    868b:	8b f8                	mov    %ax,%di
    868d:	8a 8d 44 de          	mov    -0x21bc(%di),%cl
    8691:	32 ed                	xor    %ch,%ch
    8693:	8b 84 1c de          	mov    -0x21e4(%si),%ax
    8697:	8b 94 1e de          	mov    -0x21e2(%si),%dx
    869b:	e3 06                	jcxz   0x86a3
    869d:	d1 e0                	shl    $1,%ax
    869f:	d1 d2                	rcl    $1,%dx
    86a1:	e2 fa                	loop   0x869d
    86a3:	f7 d0                	not    %ax
    86a5:	f7 d2                	not    %dx
    86a7:	26 21 47 14          	and    %ax,%es:0x14(%bx)
    86ab:	26 21 57 16          	and    %dx,%es:0x16(%bx)
    86af:	26 8a 47 2a          	mov    %es:0x2a(%bx),%al
    86b3:	32 e4                	xor    %ah,%ah
    86b5:	8b f0                	mov    %ax,%si
    86b7:	8a 8c 44 de          	mov    -0x21bc(%si),%cl
    86bb:	32 ed                	xor    %ch,%ch
    86bd:	e3 0a                	jcxz   0x86c9
    86bf:	26 d1 6f 0a          	shrw   $1,%es:0xa(%bx)
    86c3:	26 d1 5f 08          	rcrw   $1,%es:0x8(%bx)
    86c7:	e2 f6                	loop   0x86bf
    86c9:	26 8a 47 2b          	mov    %es:0x2b(%bx),%al
    86cd:	8b f0                	mov    %ax,%si
    86cf:	c1 e6 02             	shl    $0x2,%si
    86d2:	8b 84 1c de          	mov    -0x21e4(%si),%ax
    86d6:	8b 94 1e de          	mov    -0x21e2(%si),%dx
    86da:	26 21 47 08          	and    %ax,%es:0x8(%bx)
    86de:	26 21 57 0a          	and    %dx,%es:0xa(%bx)
    86e2:	26 8a 47 2a          	mov    %es:0x2a(%bx),%al
    86e6:	32 e4                	xor    %ah,%ah
    86e8:	8b f0                	mov    %ax,%si
    86ea:	8a 8c 44 de          	mov    -0x21bc(%si),%cl
    86ee:	32 ed                	xor    %ch,%ch
    86f0:	e3 0a                	jcxz   0x86fc
    86f2:	26 d1 67 08          	shlw   $1,%es:0x8(%bx)
    86f6:	26 d1 57 0a          	rclw   $1,%es:0xa(%bx)
    86fa:	e2 f6                	loop   0x86f2
    86fc:	26 8b 47 14          	mov    %es:0x14(%bx),%ax
    8700:	26 8b 57 16          	mov    %es:0x16(%bx),%dx
    8704:	26 09 47 08          	or     %ax,%es:0x8(%bx)
    8708:	26 09 57 0a          	or     %dx,%es:0xa(%bx)
    870c:	5f                   	pop    %di
    870d:	5e                   	pop    %si
    870e:	5a                   	pop    %dx
    870f:	59                   	pop    %cx
    8710:	5b                   	pop    %bx
    8711:	c3                   	ret
    8712:	53                   	push   %bx
    8713:	51                   	push   %cx
    8714:	56                   	push   %si
    8715:	8b d8                	mov    %ax,%bx
    8717:	26 8a 4f 2b          	mov    %es:0x2b(%bx),%cl
    871b:	32 ed                	xor    %ch,%ch
    871d:	8b f1                	mov    %cx,%si
    871f:	8a 8c 3c de          	mov    -0x21c4(%si),%cl
    8723:	e3 0a                	jcxz   0x872f
    8725:	26 d1 6f 06          	shrw   $1,%es:0x6(%bx)
    8729:	26 d1 5f 04          	rcrw   $1,%es:0x4(%bx)
    872d:	e2 f6                	loop   0x8725
    872f:	26 8a 4f 2b          	mov    %es:0x2b(%bx),%cl
    8733:	32 ed                	xor    %ch,%ch
    8735:	8b f1                	mov    %cx,%si
    8737:	c1 e6 02             	shl    $0x2,%si
    873a:	8b 8c 1c de          	mov    -0x21e4(%si),%cx
    873e:	8b b4 1e de          	mov    -0x21e2(%si),%si
    8742:	26 21 4f 04          	and    %cx,%es:0x4(%bx)
    8746:	26 21 77 06          	and    %si,%es:0x6(%bx)
    874a:	26 8a 4f 2a          	mov    %es:0x2a(%bx),%cl
    874e:	32 ed                	xor    %ch,%ch
    8750:	8b f1                	mov    %cx,%si
    8752:	8a 8c 44 de          	mov    -0x21bc(%si),%cl
    8756:	e3 0a                	jcxz   0x8762
    8758:	26 d1 6f 0a          	shrw   $1,%es:0xa(%bx)
    875c:	26 d1 5f 08          	rcrw   $1,%es:0x8(%bx)
    8760:	e2 f6                	loop   0x8758
    8762:	26 8a 4f 2b          	mov    %es:0x2b(%bx),%cl
    8766:	32 ed                	xor    %ch,%ch
    8768:	8b f1                	mov    %cx,%si
    876a:	c1 e6 02             	shl    $0x2,%si
    876d:	8b 8c 1c de          	mov    -0x21e4(%si),%cx
    8771:	8b b4 1e de          	mov    -0x21e2(%si),%si
    8775:	26 21 4f 08          	and    %cx,%es:0x8(%bx)
    8779:	26 21 77 0a          	and    %si,%es:0xa(%bx)
    877d:	e9 bb 02             	jmp    0x8a3b
    8780:	51                   	push   %cx
    8781:	52                   	push   %dx
    8782:	57                   	push   %di
    8783:	8b d8                	mov    %ax,%bx
    8785:	8c d0                	mov    %ss,%ax
    8787:	8e c0                	mov    %ax,%es
    8789:	26 80 7f 2b 00       	cmpb   $0x0,%es:0x2b(%bx)
    878e:	74 1a                	je     0x87aa
    8790:	26 8a 47 2c          	mov    %es:0x2c(%bx),%al
    8794:	32 e4                	xor    %ah,%ah
    8796:	8b f0                	mov    %ax,%si
    8798:	03 f0                	add    %ax,%si
    879a:	8b c3                	mov    %bx,%ax
    879c:	ff 94 f4 dd          	call   *-0x220c(%si)
    87a0:	26 89 47 08          	mov    %ax,%es:0x8(%bx)
    87a4:	26 89 57 0a          	mov    %dx,%es:0xa(%bx)
    87a8:	eb 10                	jmp    0x87ba
    87aa:	26 8a 47 2c          	mov    %es:0x2c(%bx),%al
    87ae:	32 e4                	xor    %ah,%ah
    87b0:	8b f0                	mov    %ax,%si
    87b2:	03 f0                	add    %ax,%si
    87b4:	8b c3                	mov    %bx,%ax
    87b6:	ff 94 00 de          	call   *-0x2200(%si)
    87ba:	26 8a 47 2d          	mov    %es:0x2d(%bx),%al
    87be:	32 e4                	xor    %ah,%ah
    87c0:	8b f0                	mov    %ax,%si
    87c2:	03 f0                	add    %ax,%si
    87c4:	8b c3                	mov    %bx,%ax
    87c6:	ff 94 0c de          	call   *-0x21f4(%si)
    87ca:	26 89 47 04          	mov    %ax,%es:0x4(%bx)
    87ce:	26 89 57 06          	mov    %dx,%es:0x6(%bx)
    87d2:	8c d2                	mov    %ss,%dx
    87d4:	8e c2                	mov    %dx,%es
    87d6:	26 80 7f 2b 00       	cmpb   $0x0,%es:0x2b(%bx)
    87db:	74 4a                	je     0x8827
    87dd:	26 8a 47 2b          	mov    %es:0x2b(%bx),%al
    87e1:	32 e4                	xor    %ah,%ah
    87e3:	8b f0                	mov    %ax,%si
    87e5:	c1 e6 02             	shl    $0x2,%si
    87e8:	26 8a 47 2a          	mov    %es:0x2a(%bx),%al
    87ec:	8b f8                	mov    %ax,%di
    87ee:	8a 8d 44 de          	mov    -0x21bc(%di),%cl
    87f2:	32 ed                	xor    %ch,%ch
    87f4:	8b 84 1c de          	mov    -0x21e4(%si),%ax
    87f8:	8b 94 1e de          	mov    -0x21e2(%si),%dx
    87fc:	e3 06                	jcxz   0x8804
    87fe:	d1 e0                	shl    $1,%ax
    8800:	d1 d2                	rcl    $1,%dx
    8802:	e2 fa                	loop   0x87fe
    8804:	f7 d0                	not    %ax
    8806:	f7 d2                	not    %dx
    8808:	26 21 47 08          	and    %ax,%es:0x8(%bx)
    880c:	26 21 57 0a          	and    %dx,%es:0xa(%bx)
    8810:	8b c3                	mov    %bx,%ax
    8812:	e8 f9 fd             	call   0x860e
    8815:	26 8b 47 04          	mov    %es:0x4(%bx),%ax
    8819:	26 8b 57 06          	mov    %es:0x6(%bx),%dx
    881d:	26 09 47 08          	or     %ax,%es:0x8(%bx)
    8821:	26 09 57 0a          	or     %dx,%es:0xa(%bx)
    8825:	eb 10                	jmp    0x8837
    8827:	26 8b 57 04          	mov    %es:0x4(%bx),%dx
    882b:	26 8b 47 06          	mov    %es:0x6(%bx),%ax
    882f:	26 89 57 08          	mov    %dx,%es:0x8(%bx)
    8833:	26 89 47 0a          	mov    %ax,%es:0xa(%bx)
    8837:	26 8a 47 2c          	mov    %es:0x2c(%bx),%al
    883b:	32 e4                	xor    %ah,%ah
    883d:	8b f0                	mov    %ax,%si
    883f:	03 f0                	add    %ax,%si
    8841:	8b c3                	mov    %bx,%ax
    8843:	ff 94 e8 dd          	call   *-0x2218(%si)
    8847:	5f                   	pop    %di
    8848:	5a                   	pop    %dx
    8849:	59                   	pop    %cx
    884a:	c3                   	ret
    884b:	53                   	push   %bx
    884c:	51                   	push   %cx
    884d:	52                   	push   %dx
    884e:	56                   	push   %si
    884f:	57                   	push   %di
    8850:	8b d8                	mov    %ax,%bx
    8852:	26 8a 47 2a          	mov    %es:0x2a(%bx),%al
    8856:	32 e4                	xor    %ah,%ah
    8858:	8b f0                	mov    %ax,%si
    885a:	8a 8c 44 de          	mov    -0x21bc(%si),%cl
    885e:	32 ed                	xor    %ch,%ch
    8860:	e3 0a                	jcxz   0x886c
    8862:	26 d1 67 04          	shlw   $1,%es:0x4(%bx)
    8866:	26 d1 57 06          	rclw   $1,%es:0x6(%bx)
    886a:	e2 f6                	loop   0x8862
    886c:	8c d0                	mov    %ss,%ax
    886e:	8e c0                	mov    %ax,%es
    8870:	26 8a 47 2b          	mov    %es:0x2b(%bx),%al
    8874:	32 e4                	xor    %ah,%ah
    8876:	8b f0                	mov    %ax,%si
    8878:	c1 e6 02             	shl    $0x2,%si
    887b:	26 8a 47 2a          	mov    %es:0x2a(%bx),%al
    887f:	8b f8                	mov    %ax,%di
    8881:	8a 8d 44 de          	mov    -0x21bc(%di),%cl
    8885:	32 ed                	xor    %ch,%ch
    8887:	8b 84 1c de          	mov    -0x21e4(%si),%ax
    888b:	8b 94 1e de          	mov    -0x21e2(%si),%dx
    888f:	e3 06                	jcxz   0x8897
    8891:	d1 e0                	shl    $1,%ax
    8893:	d1 d2                	rcl    $1,%dx
    8895:	e2 fa                	loop   0x8891
    8897:	f7 d0                	not    %ax
    8899:	f7 d2                	not    %dx
    889b:	26 09 47 04          	or     %ax,%es:0x4(%bx)
    889f:	26 09 57 06          	or     %dx,%es:0x6(%bx)
    88a3:	26 8b 47 04          	mov    %es:0x4(%bx),%ax
    88a7:	26 8b 57 06          	mov    %es:0x6(%bx),%dx
    88ab:	26 21 47 08          	and    %ax,%es:0x8(%bx)
    88af:	26 21 57 0a          	and    %dx,%es:0xa(%bx)
    88b3:	e9 56 fe             	jmp    0x870c
    88b6:	55                   	push   %bp
    88b7:	8b ec                	mov    %sp,%bp
    88b9:	51                   	push   %cx
    88ba:	52                   	push   %dx
    88bb:	50                   	push   %ax
    88bc:	8b d8                	mov    %ax,%bx
    88be:	26 8a 47 2c          	mov    %es:0x2c(%bx),%al
    88c2:	32 e4                	xor    %ah,%ah
    88c4:	8b f0                	mov    %ax,%si
    88c6:	03 f0                	add    %ax,%si
    88c8:	8b c3                	mov    %bx,%ax
    88ca:	ff 94 f4 dd          	call   *-0x220c(%si)
    88ce:	26 89 47 08          	mov    %ax,%es:0x8(%bx)
    88d2:	26 89 57 0a          	mov    %dx,%es:0xa(%bx)
    88d6:	26 8a 47 2b          	mov    %es:0x2b(%bx),%al
    88da:	88 46 fa             	mov    %al,-0x6(%bp)
    88dd:	8b c3                	mov    %bx,%ax
    88df:	e8 da fc             	call   0x85bc
    88e2:	26 89 47 04          	mov    %ax,%es:0x4(%bx)
    88e6:	26 89 57 06          	mov    %dx,%es:0x6(%bx)
    88ea:	26 8a 4f 2d          	mov    %es:0x2d(%bx),%cl
    88ee:	32 ed                	xor    %ch,%ch
    88f0:	8b f1                	mov    %cx,%si
    88f2:	03 f1                	add    %cx,%si
    88f4:	8b c3                	mov    %bx,%ax
    88f6:	ff 94 0c de          	call   *-0x21f4(%si)
    88fa:	26 89 47 14          	mov    %ax,%es:0x14(%bx)
    88fe:	26 89 57 16          	mov    %dx,%es:0x16(%bx)
    8902:	8b c3                	mov    %bx,%ax
    8904:	e8 44 ff             	call   0x884b
    8907:	8a 46 fa             	mov    -0x6(%bp),%al
    890a:	32 e4                	xor    %ah,%ah
    890c:	8b f0                	mov    %ax,%si
    890e:	8a 8c 3c de          	mov    -0x21c4(%si),%cl
    8912:	e3 0a                	jcxz   0x891e
    8914:	26 d1 6f 16          	shrw   $1,%es:0x16(%bx)
    8918:	26 d1 5f 14          	rcrw   $1,%es:0x14(%bx)
    891c:	e2 f6                	loop   0x8914
    891e:	26 8a 57 2b          	mov    %es:0x2b(%bx),%dl
    8922:	32 f6                	xor    %dh,%dh
    8924:	8b f2                	mov    %dx,%si
    8926:	c1 e6 02             	shl    $0x2,%si
    8929:	8b 84 1c de          	mov    -0x21e4(%si),%ax
    892d:	8b 94 1e de          	mov    -0x21e2(%si),%dx
    8931:	26 21 47 14          	and    %ax,%es:0x14(%bx)
    8935:	26 21 57 16          	and    %dx,%es:0x16(%bx)
    8939:	26 8a 47 2a          	mov    %es:0x2a(%bx),%al
    893d:	32 e4                	xor    %ah,%ah
    893f:	8b f0                	mov    %ax,%si
    8941:	8a 8c 44 de          	mov    -0x21bc(%si),%cl
    8945:	32 ed                	xor    %ch,%ch
    8947:	e3 0a                	jcxz   0x8953
    8949:	26 d1 67 14          	shlw   $1,%es:0x14(%bx)
    894d:	26 d1 57 16          	rclw   $1,%es:0x16(%bx)
    8951:	e2 f6                	loop   0x8949
    8953:	26 8b 47 14          	mov    %es:0x14(%bx),%ax
    8957:	26 8b 57 16          	mov    %es:0x16(%bx),%dx
    895b:	26 09 47 08          	or     %ax,%es:0x8(%bx)
    895f:	26 09 57 0a          	or     %dx,%es:0xa(%bx)
    8963:	26 8a 47 2c          	mov    %es:0x2c(%bx),%al
    8967:	32 e4                	xor    %ah,%ah
    8969:	8b f0                	mov    %ax,%si
    896b:	03 f0                	add    %ax,%si
    896d:	8b c3                	mov    %bx,%ax
    896f:	ff 94 e8 dd          	call   *-0x2218(%si)
    8973:	8d 66 fc             	lea    -0x4(%bp),%sp
    8976:	5a                   	pop    %dx
    8977:	59                   	pop    %cx
    8978:	5d                   	pop    %bp
    8979:	c3                   	ret
    897a:	51                   	push   %cx
    897b:	8b d8                	mov    %ax,%bx
    897d:	e8 56 fc             	call   0x85d6
    8980:	26 8a 4f 2b          	mov    %es:0x2b(%bx),%cl
    8984:	32 ed                	xor    %ch,%ch
    8986:	8b f1                	mov    %cx,%si
    8988:	8a 8c 3c de          	mov    -0x21c4(%si),%cl
    898c:	e3 0a                	jcxz   0x8998
    898e:	26 d1 6f 06          	shrw   $1,%es:0x6(%bx)
    8992:	26 d1 5f 04          	rcrw   $1,%es:0x4(%bx)
    8996:	e2 f6                	loop   0x898e
    8998:	8b c3                	mov    %bx,%ax
    899a:	e8 ae fe             	call   0x884b
    899d:	26 8a 4f 2c          	mov    %es:0x2c(%bx),%cl
    89a1:	32 ed                	xor    %ch,%ch
    89a3:	8b f1                	mov    %cx,%si
    89a5:	03 f1                	add    %cx,%si
    89a7:	8b c3                	mov    %bx,%ax
    89a9:	ff 94 e8 dd          	call   *-0x2218(%si)
    89ad:	59                   	pop    %cx
    89ae:	c3                   	ret
    89af:	8b d8                	mov    %ax,%bx
    89b1:	e8 22 fc             	call   0x85d6
    89b4:	8b c3                	mov    %bx,%ax
    89b6:	e8 55 fc             	call   0x860e
    89b9:	26 8b 47 04          	mov    %es:0x4(%bx),%ax
    89bd:	26 8b 77 06          	mov    %es:0x6(%bx),%si
    89c1:	26 09 47 08          	or     %ax,%es:0x8(%bx)
    89c5:	26 09 77 0a          	or     %si,%es:0xa(%bx)
    89c9:	26 8a 47 2c          	mov    %es:0x2c(%bx),%al
    89cd:	32 e4                	xor    %ah,%ah
    89cf:	8b f0                	mov    %ax,%si
    89d1:	03 f0                	add    %ax,%si
    89d3:	8b c3                	mov    %bx,%ax
    89d5:	ff 94 e8 dd          	call   *-0x2218(%si)
    89d9:	c3                   	ret
    89da:	53                   	push   %bx
    89db:	56                   	push   %si
    89dc:	8b d8                	mov    %ax,%bx
    89de:	e8 f5 fb             	call   0x85d6
    89e1:	8b c3                	mov    %bx,%ax
    89e3:	e8 28 fc             	call   0x860e
    89e6:	26 8b 47 04          	mov    %es:0x4(%bx),%ax
    89ea:	26 8b 77 06          	mov    %es:0x6(%bx),%si
    89ee:	26 31 47 08          	xor    %ax,%es:0x8(%bx)
    89f2:	26 31 77 0a          	xor    %si,%es:0xa(%bx)
    89f6:	26 8a 47 2c          	mov    %es:0x2c(%bx),%al
    89fa:	32 e4                	xor    %ah,%ah
    89fc:	8b f0                	mov    %ax,%si
    89fe:	03 f0                	add    %ax,%si
    8a00:	8b c3                	mov    %bx,%ax
    8a02:	ff 94 e8 dd          	call   *-0x2218(%si)
    8a06:	5e                   	pop    %si
    8a07:	5b                   	pop    %bx
    8a08:	c3                   	ret
    8a09:	53                   	push   %bx
    8a0a:	51                   	push   %cx
    8a0b:	56                   	push   %si
    8a0c:	8b d8                	mov    %ax,%bx
    8a0e:	e8 c5 fb             	call   0x85d6
    8a11:	8b c3                	mov    %bx,%ax
    8a13:	e8 f8 fb             	call   0x860e
    8a16:	26 8b 4f 04          	mov    %es:0x4(%bx),%cx
    8a1a:	e3 0a                	jcxz   0x8a26
    8a1c:	26 d1 67 08          	shlw   $1,%es:0x8(%bx)
    8a20:	26 d1 57 0a          	rclw   $1,%es:0xa(%bx)
    8a24:	e2 f6                	loop   0x8a1c
    8a26:	8b c3                	mov    %bx,%ax
    8a28:	e8 46 fc             	call   0x8671
    8a2b:	26 8a 4f 2c          	mov    %es:0x2c(%bx),%cl
    8a2f:	32 ed                	xor    %ch,%ch
    8a31:	8b f1                	mov    %cx,%si
    8a33:	03 f1                	add    %cx,%si
    8a35:	8b c3                	mov    %bx,%ax
    8a37:	ff 94 e8 dd          	call   *-0x2218(%si)
    8a3b:	5e                   	pop    %si
    8a3c:	59                   	pop    %cx
    8a3d:	5b                   	pop    %bx
    8a3e:	c3                   	ret
    8a3f:	53                   	push   %bx
    8a40:	51                   	push   %cx
    8a41:	56                   	push   %si
    8a42:	8b d8                	mov    %ax,%bx
    8a44:	e8 8f fb             	call   0x85d6
    8a47:	8b c3                	mov    %bx,%ax
    8a49:	e8 c2 fb             	call   0x860e
    8a4c:	26 8b 4f 04          	mov    %es:0x4(%bx),%cx
    8a50:	e3 0a                	jcxz   0x8a5c
    8a52:	26 d1 6f 0a          	shrw   $1,%es:0xa(%bx)
    8a56:	26 d1 5f 08          	rcrw   $1,%es:0x8(%bx)
    8a5a:	e2 f6                	loop   0x8a52
    8a5c:	eb c8                	jmp    0x8a26
    8a5e:	52                   	push   %dx
    8a5f:	8b d8                	mov    %ax,%bx
    8a61:	e8 72 fb             	call   0x85d6
    8a64:	8b c3                	mov    %bx,%ax
    8a66:	e8 a5 fb             	call   0x860e
    8a69:	8b f3                	mov    %bx,%si
    8a6b:	26 8b 47 04          	mov    %es:0x4(%bx),%ax
    8a6f:	26 8b 57 06          	mov    %es:0x6(%bx),%dx
    8a73:	26 01 47 08          	add    %ax,%es:0x8(%bx)
    8a77:	26 11 54 0a          	adc    %dx,%es:0xa(%si)
    8a7b:	8b c3                	mov    %bx,%ax
    8a7d:	e8 f1 fb             	call   0x8671
    8a80:	26 8a 47 2c          	mov    %es:0x2c(%bx),%al
    8a84:	32 e4                	xor    %ah,%ah
    8a86:	8b f0                	mov    %ax,%si
    8a88:	03 f0                	add    %ax,%si
    8a8a:	8b c3                	mov    %bx,%ax
    8a8c:	ff 94 e8 dd          	call   *-0x2218(%si)
    8a90:	5a                   	pop    %dx
    8a91:	c3                   	ret
    8a92:	52                   	push   %dx
    8a93:	8b d8                	mov    %ax,%bx
    8a95:	e8 3e fb             	call   0x85d6
    8a98:	8b c3                	mov    %bx,%ax
    8a9a:	e8 71 fb             	call   0x860e
    8a9d:	8b f3                	mov    %bx,%si
    8a9f:	26 8b 47 04          	mov    %es:0x4(%bx),%ax
    8aa3:	26 8b 57 06          	mov    %es:0x6(%bx),%dx
    8aa7:	26 29 47 08          	sub    %ax,%es:0x8(%bx)
    8aab:	26 19 54 0a          	sbb    %dx,%es:0xa(%si)
    8aaf:	eb ca                	jmp    0x8a7b
    8ab1:	51                   	push   %cx
    8ab2:	52                   	push   %dx
    8ab3:	8b f0                	mov    %ax,%si
    8ab5:	e8 1e fb             	call   0x85d6
    8ab8:	8b c6                	mov    %si,%ax
    8aba:	e8 55 fc             	call   0x8712
    8abd:	26 8b 44 08          	mov    %es:0x8(%si),%ax
    8ac1:	26 8b 54 0a          	mov    %es:0xa(%si),%dx
    8ac5:	26 8b 5c 04          	mov    %es:0x4(%si),%bx
    8ac9:	26 8b 4c 06          	mov    %es:0x6(%si),%cx
    8acd:	e8 98 f2             	call   0x7d68
    8ad0:	26 89 44 0c          	mov    %ax,%es:0xc(%si)
    8ad4:	26 89 54 0e          	mov    %dx,%es:0xe(%si)
    8ad8:	5a                   	pop    %dx
    8ad9:	59                   	pop    %cx
    8ada:	c3                   	ret
    8adb:	52                   	push   %dx
    8adc:	8b d0                	mov    %ax,%dx
    8ade:	e8 f5 fa             	call   0x85d6
    8ae1:	8b c2                	mov    %dx,%ax
    8ae3:	e8 2c fc             	call   0x8712
    8ae6:	8b c2                	mov    %dx,%ax
    8ae8:	e8 5c 08             	call   0x9347
    8aeb:	5a                   	pop    %dx
    8aec:	c3                   	ret
    8aed:	51                   	push   %cx
    8aee:	52                   	push   %dx
    8aef:	57                   	push   %di
    8af0:	8b f0                	mov    %ax,%si
    8af2:	e8 e1 fa             	call   0x85d6
    8af5:	8b c6                	mov    %si,%ax
    8af7:	e8 18 fc             	call   0x8712
    8afa:	26 8b 44 08          	mov    %es:0x8(%si),%ax
    8afe:	26 8b 54 0a          	mov    %es:0xa(%si),%dx
    8b02:	26 8b 5c 04          	mov    %es:0x4(%si),%bx
    8b06:	26 8b 4c 06          	mov    %es:0x6(%si),%cx
    8b0a:	e8 d7 f1             	call   0x7ce4
    8b0d:	26 89 44 0c          	mov    %ax,%es:0xc(%si)
    8b11:	26 89 54 0e          	mov    %dx,%es:0xe(%si)
    8b15:	8c d7                	mov    %ss,%di
    8b17:	8e c7                	mov    %di,%es
    8b19:	26 8b 44 08          	mov    %es:0x8(%si),%ax
    8b1d:	26 8b 54 0a          	mov    %es:0xa(%si),%dx
    8b21:	26 8b 5c 04          	mov    %es:0x4(%si),%bx
    8b25:	26 8b 4c 06          	mov    %es:0x6(%si),%cx
    8b29:	e8 b8 f1             	call   0x7ce4
    8b2c:	26 89 5c 10          	mov    %bx,%es:0x10(%si)
    8b30:	26 89 4c 12          	mov    %cx,%es:0x12(%si)
    8b34:	e9 10 fd             	jmp    0x8847
    8b37:	52                   	push   %dx
    8b38:	8b d0                	mov    %ax,%dx
    8b3a:	e8 99 fa             	call   0x85d6
    8b3d:	8b c2                	mov    %dx,%ax
    8b3f:	e8 d0 fb             	call   0x8712
    8b42:	8b c2                	mov    %dx,%ax
    8b44:	e8 d3 07             	call   0x931a
    8b47:	5a                   	pop    %dx
    8b48:	c3                   	ret
    8b49:	51                   	push   %cx
    8b4a:	52                   	push   %dx
    8b4b:	8b d8                	mov    %ax,%bx
    8b4d:	e8 86 fa             	call   0x85d6
    8b50:	8b c3                	mov    %bx,%ax
    8b52:	e8 bd fb             	call   0x8712
    8b55:	8c d1                	mov    %ss,%cx
    8b57:	8e c1                	mov    %cx,%es
    8b59:	26 8b 47 08          	mov    %es:0x8(%bx),%ax
    8b5d:	26 8b 57 0a          	mov    %es:0xa(%bx),%dx
    8b61:	26 3b 57 06          	cmp    %es:0x6(%bx),%dx
    8b65:	75 0e                	jne    0x8b75
    8b67:	26 3b 47 04          	cmp    %es:0x4(%bx),%ax
    8b6b:	75 08                	jne    0x8b75
    8b6d:	26 c6 47 30 01       	movb   $0x1,%es:0x30(%bx)
    8b72:	5a                   	pop    %dx
    8b73:	59                   	pop    %cx
    8b74:	c3                   	ret
    8b75:	8b d0                	mov    %ax,%dx
    8b77:	26 8b 47 0a          	mov    %es:0xa(%bx),%ax
    8b7b:	26 3b 47 06          	cmp    %es:0x6(%bx),%ax
    8b7f:	72 08                	jb     0x8b89
    8b81:	75 0a                	jne    0x8b8d
    8b83:	26 3b 57 04          	cmp    %es:0x4(%bx),%dx
    8b87:	73 04                	jae    0x8b8d
    8b89:	33 c0                	xor    %ax,%ax
    8b8b:	eb 03                	jmp    0x8b90
    8b8d:	b8 02 00             	mov    $0x2,%ax
    8b90:	26 88 47 30          	mov    %al,%es:0x30(%bx)
    8b94:	5a                   	pop    %dx
    8b95:	59                   	pop    %cx
    8b96:	c3                   	ret
    8b97:	51                   	push   %cx
    8b98:	52                   	push   %dx
    8b99:	57                   	push   %di
    8b9a:	8b d8                	mov    %ax,%bx
    8b9c:	26 8a 47 2c          	mov    %es:0x2c(%bx),%al
    8ba0:	32 e4                	xor    %ah,%ah
    8ba2:	8b f0                	mov    %ax,%si
    8ba4:	03 f0                	add    %ax,%si
    8ba6:	8b c3                	mov    %bx,%ax
    8ba8:	ff 94 f4 dd          	call   *-0x220c(%si)
    8bac:	26 89 47 08          	mov    %ax,%es:0x8(%bx)
    8bb0:	26 89 57 0a          	mov    %dx,%es:0xa(%bx)
    8bb4:	8c d0                	mov    %ss,%ax
    8bb6:	8e c0                	mov    %ax,%es
    8bb8:	26 8a 47 2b          	mov    %es:0x2b(%bx),%al
    8bbc:	32 e4                	xor    %ah,%ah
    8bbe:	8b f0                	mov    %ax,%si
    8bc0:	c1 e6 02             	shl    $0x2,%si
    8bc3:	8b f8                	mov    %ax,%di
    8bc5:	8a 8d 3c de          	mov    -0x21c4(%di),%cl
    8bc9:	32 ed                	xor    %ch,%ch
    8bcb:	8b 84 1c de          	mov    -0x21e4(%si),%ax
    8bcf:	8b 94 1e de          	mov    -0x21e2(%si),%dx
    8bd3:	e3 06                	jcxz   0x8bdb
    8bd5:	d1 e0                	shl    $1,%ax
    8bd7:	d1 d2                	rcl    $1,%dx
    8bd9:	e2 fa                	loop   0x8bd5
    8bdb:	f7 d0                	not    %ax
    8bdd:	f7 d2                	not    %dx
    8bdf:	26 21 47 08          	and    %ax,%es:0x8(%bx)
    8be3:	26 21 57 0a          	and    %dx,%es:0xa(%bx)
    8be7:	e9 4d fc             	jmp    0x8837
    8bea:	55                   	push   %bp
    8beb:	8b ec                	mov    %sp,%bp
    8bed:	51                   	push   %cx
    8bee:	52                   	push   %dx
    8bef:	57                   	push   %di
    8bf0:	83 ec 06             	sub    $0x6,%sp
    8bf3:	8b d8                	mov    %ax,%bx
    8bf5:	26 8a 47 2b          	mov    %es:0x2b(%bx),%al
    8bf9:	32 e4                	xor    %ah,%ah
    8bfb:	8b f0                	mov    %ax,%si
    8bfd:	c1 e6 02             	shl    $0x2,%si
    8c00:	8b f8                	mov    %ax,%di
    8c02:	8a 8d 3c de          	mov    -0x21c4(%di),%cl
    8c06:	32 ed                	xor    %ch,%ch
    8c08:	8b 84 1c de          	mov    -0x21e4(%si),%ax
    8c0c:	89 46 f4             	mov    %ax,-0xc(%bp)
    8c0f:	8b 84 1e de          	mov    -0x21e2(%si),%ax
    8c13:	89 46 f6             	mov    %ax,-0xa(%bp)
    8c16:	e3 08                	jcxz   0x8c20
    8c18:	d1 66 f4             	shlw   $1,-0xc(%bp)
    8c1b:	d1 56 f6             	rclw   $1,-0xa(%bp)
    8c1e:	e2 f8                	loop   0x8c18
    8c20:	8b 7e f4             	mov    -0xc(%bp),%di
    8c23:	8b 46 f6             	mov    -0xa(%bp),%ax
    8c26:	89 46 f8             	mov    %ax,-0x8(%bp)
    8c29:	26 8a 47 2c          	mov    %es:0x2c(%bx),%al
    8c2d:	32 e4                	xor    %ah,%ah
    8c2f:	8b f0                	mov    %ax,%si
    8c31:	03 f0                	add    %ax,%si
    8c33:	8b c3                	mov    %bx,%ax
    8c35:	ff 94 f4 dd          	call   *-0x220c(%si)
    8c39:	26 89 47 08          	mov    %ax,%es:0x8(%bx)
    8c3d:	26 89 57 0a          	mov    %dx,%es:0xa(%bx)
    8c41:	8b c3                	mov    %bx,%ax
    8c43:	e8 47 f9             	call   0x858d
    8c46:	26 89 47 04          	mov    %ax,%es:0x4(%bx)
    8c4a:	26 89 57 06          	mov    %dx,%es:0x6(%bx)
    8c4e:	8b c7                	mov    %di,%ax
    8c50:	f7 d0                	not    %ax
    8c52:	8b 56 f6             	mov    -0xa(%bp),%dx
    8c55:	f7 d2                	not    %dx
    8c57:	26 23 47 08          	and    %es:0x8(%bx),%ax
    8c5b:	26 23 57 0a          	and    %es:0xa(%bx),%dx
    8c5f:	26 89 47 14          	mov    %ax,%es:0x14(%bx)
    8c63:	26 89 57 16          	mov    %dx,%es:0x16(%bx)
    8c67:	26 21 7f 08          	and    %di,%es:0x8(%bx)
    8c6b:	8b 46 f6             	mov    -0xa(%bp),%ax
    8c6e:	26 21 47 0a          	and    %ax,%es:0xa(%bx)
    8c72:	8c d1                	mov    %ss,%cx
    8c74:	8d 77 35             	lea    0x35(%bx),%si
    8c77:	8e c1                	mov    %cx,%es
    8c79:	26 80 3c 19          	cmpb   $0x19,%es:(%si)
    8c7d:	73 12                	jae    0x8c91
    8c7f:	26 8b 4f 04          	mov    %es:0x4(%bx),%cx
    8c83:	e3 0a                	jcxz   0x8c8f
    8c85:	26 d1 67 08          	shlw   $1,%es:0x8(%bx)
    8c89:	26 d1 57 0a          	rclw   $1,%es:0xa(%bx)
    8c8d:	e2 f6                	loop   0x8c85
    8c8f:	eb 10                	jmp    0x8ca1
    8c91:	26 8b 4f 04          	mov    %es:0x4(%bx),%cx
    8c95:	e3 0a                	jcxz   0x8ca1
    8c97:	26 d1 6f 0a          	shrw   $1,%es:0xa(%bx)
    8c9b:	26 d1 5f 08          	rcrw   $1,%es:0x8(%bx)
    8c9f:	e2 f6                	loop   0x8c97
    8ca1:	26 21 7f 08          	and    %di,%es:0x8(%bx)
    8ca5:	8b 46 f8             	mov    -0x8(%bp),%ax
    8ca8:	26 21 47 0a          	and    %ax,%es:0xa(%bx)
    8cac:	26 8b 57 14          	mov    %es:0x14(%bx),%dx
    8cb0:	26 8b 47 16          	mov    %es:0x16(%bx),%ax
    8cb4:	26 09 57 08          	or     %dx,%es:0x8(%bx)
    8cb8:	26 09 47 0a          	or     %ax,%es:0xa(%bx)
    8cbc:	26 8a 47 2c          	mov    %es:0x2c(%bx),%al
    8cc0:	32 e4                	xor    %ah,%ah
    8cc2:	8b f0                	mov    %ax,%si
    8cc4:	03 f0                	add    %ax,%si
    8cc6:	8b c3                	mov    %bx,%ax
    8cc8:	ff 94 e8 dd          	call   *-0x2218(%si)
    8ccc:	8d 66 fa             	lea    -0x6(%bp),%sp
    8ccf:	5f                   	pop    %di
    8cd0:	e9 a3 fc             	jmp    0x8976
    8cd3:	52                   	push   %dx
    8cd4:	8b d8                	mov    %ax,%bx
    8cd6:	e8 fd f8             	call   0x85d6
    8cd9:	8b c3                	mov    %bx,%ax
    8cdb:	e8 34 fa             	call   0x8712
    8cde:	26 8b 47 08          	mov    %es:0x8(%bx),%ax
    8ce2:	26 8b 57 0a          	mov    %es:0xa(%bx),%dx
    8ce6:	26 85 57 06          	test   %dx,%es:0x6(%bx)
    8cea:	75 06                	jne    0x8cf2
    8cec:	26 85 47 04          	test   %ax,%es:0x4(%bx)
    8cf0:	74 05                	je     0x8cf7
    8cf2:	b8 03 00             	mov    $0x3,%ax
    8cf5:	eb 03                	jmp    0x8cfa
    8cf7:	b8 01 00             	mov    $0x1,%ax
    8cfa:	26 88 47 30          	mov    %al,%es:0x30(%bx)
    8cfe:	5a                   	pop    %dx
    8cff:	c3                   	ret
    8d00:	53                   	push   %bx
    8d01:	51                   	push   %cx
    8d02:	52                   	push   %dx
    8d03:	56                   	push   %si
    8d04:	8b d8                	mov    %ax,%bx
    8d06:	26 8a 4f 2d          	mov    %es:0x2d(%bx),%cl
    8d0a:	32 ed                	xor    %ch,%ch
    8d0c:	8b f1                	mov    %cx,%si
    8d0e:	03 f1                	add    %cx,%si
    8d10:	ff 94 0c de          	call   *-0x21f4(%si)
    8d14:	26 89 47 04          	mov    %ax,%es:0x4(%bx)
    8d18:	26 89 57 06          	mov    %dx,%es:0x6(%bx)
    8d1c:	26 8a 47 2b          	mov    %es:0x2b(%bx),%al
    8d20:	32 e4                	xor    %ah,%ah
    8d22:	8b f0                	mov    %ax,%si
    8d24:	8a 8c 3c de          	mov    -0x21c4(%si),%cl
    8d28:	e3 0a                	jcxz   0x8d34
    8d2a:	26 d1 6f 06          	shrw   $1,%es:0x6(%bx)
    8d2e:	26 d1 5f 04          	rcrw   $1,%es:0x4(%bx)
    8d32:	e2 f6                	loop   0x8d2a
    8d34:	26 8a 47 2b          	mov    %es:0x2b(%bx),%al
    8d38:	8b f0                	mov    %ax,%si
    8d3a:	c1 e6 02             	shl    $0x2,%si
    8d3d:	8b 84 1c de          	mov    -0x21e4(%si),%ax
    8d41:	8b 94 1e de          	mov    -0x21e2(%si),%dx
    8d45:	26 21 47 04          	and    %ax,%es:0x4(%bx)
    8d49:	26 21 57 06          	and    %dx,%es:0x6(%bx)
    8d4d:	e9 bd f9             	jmp    0x870d
    8d50:	52                   	push   %dx
    8d51:	8b d8                	mov    %ax,%bx
    8d53:	e8 aa ff             	call   0x8d00
    8d56:	26 8b 47 04          	mov    %es:0x4(%bx),%ax
    8d5a:	26 8b 57 06          	mov    %es:0x6(%bx),%dx
    8d5e:	26 89 47 18          	mov    %ax,%es:0x18(%bx)
    8d62:	26 89 57 1a          	mov    %dx,%es:0x1a(%bx)
    8d66:	5a                   	pop    %dx
    8d67:	c3                   	ret
    8d68:	51                   	push   %cx
    8d69:	52                   	push   %dx
    8d6a:	8b d8                	mov    %ax,%bx
    8d6c:	e8 91 ff             	call   0x8d00
    8d6f:	8c d0                	mov    %ss,%ax
    8d71:	8e c0                	mov    %ax,%es
    8d73:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    8d77:	26 8b 74 02          	mov    %es:0x2(%si),%si
    8d7b:	81 3c 5a 5a          	cmpw   $0x5a5a,(%si)
    8d7f:	74 5b                	je     0x8ddc
    8d81:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    8d85:	26 8b 74 02          	mov    %es:0x2(%si),%si
    8d89:	80 3c 63             	cmpb   $0x63,(%si)
    8d8c:	75 e1                	jne    0x8d6f
    8d8e:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    8d92:	26 ff 44 02          	incw   %es:0x2(%si)
    8d96:	8b c3                	mov    %bx,%ax
    8d98:	e8 21 f8             	call   0x85bc
    8d9b:	26 89 47 08          	mov    %ax,%es:0x8(%bx)
    8d9f:	26 89 57 0a          	mov    %dx,%es:0xa(%bx)
    8da3:	8b c3                	mov    %bx,%ax
    8da5:	e8 fa f7             	call   0x85a2
    8da8:	26 89 47 14          	mov    %ax,%es:0x14(%bx)
    8dac:	26 89 57 16          	mov    %dx,%es:0x16(%bx)
    8db0:	8c d1                	mov    %ss,%cx
    8db2:	8e c1                	mov    %cx,%es
    8db4:	26 8b 57 04          	mov    %es:0x4(%bx),%dx
    8db8:	26 8b 47 06          	mov    %es:0x6(%bx),%ax
    8dbc:	26 3b 47 0a          	cmp    %es:0xa(%bx),%ax
    8dc0:	75 ad                	jne    0x8d6f
    8dc2:	26 3b 57 08          	cmp    %es:0x8(%bx),%dx
    8dc6:	75 a7                	jne    0x8d6f
    8dc8:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    8dcc:	26 8b 04             	mov    %es:(%si),%ax
    8dcf:	26 03 47 14          	add    %es:0x14(%bx),%ax
    8dd3:	8b de                	mov    %si,%bx
    8dd5:	26 89 47 02          	mov    %ax,%es:0x2(%bx)
    8dd9:	5a                   	pop    %dx
    8dda:	59                   	pop    %cx
    8ddb:	c3                   	ret
    8ddc:	26 8b 5f 02          	mov    %es:0x2(%bx),%bx
    8de0:	26 83 47 02 02       	addw   $0x2,%es:0x2(%bx)
    8de5:	5a                   	pop    %dx
    8de6:	59                   	pop    %cx
    8de7:	c3                   	ret
    8de8:	52                   	push   %dx
    8de9:	57                   	push   %di
    8dea:	8b d8                	mov    %ax,%bx
    8dec:	8c d0                	mov    %ss,%ax
    8dee:	8e c0                	mov    %ax,%es
    8df0:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    8df4:	26 8b 74 02          	mov    %es:0x2(%si),%si
    8df8:	8a 54 01             	mov    0x1(%si),%dl
    8dfb:	84 d2                	test   %dl,%dl
    8dfd:	75 08                	jne    0x8e07
    8dff:	26 c7 47 22 00 00    	movw   $0x0,%es:0x22(%bx)
    8e05:	eb 2f                	jmp    0x8e36
    8e07:	80 fa ff             	cmp    $0xff,%dl
    8e0a:	75 14                	jne    0x8e20
    8e0c:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    8e10:	26 8b 3f             	mov    %es:(%bx),%di
    8e13:	26 8b 34             	mov    %es:(%si),%si
    8e16:	26 2b 75 02          	sub    %es:0x2(%di),%si
    8e1a:	26 89 77 22          	mov    %si,%es:0x22(%bx)
    8e1e:	eb 16                	jmp    0x8e36
    8e20:	26 8b 07             	mov    %es:(%bx),%ax
    8e23:	e8 e3 02             	call   0x9109
    8e26:	8b f0                	mov    %ax,%si
    8e28:	8a c2                	mov    %dl,%al
    8e2a:	32 e4                	xor    %ah,%ah
    8e2c:	03 c0                	add    %ax,%ax
    8e2e:	03 f0                	add    %ax,%si
    8e30:	8b 04                	mov    (%si),%ax
    8e32:	26 89 47 22          	mov    %ax,%es:0x22(%bx)
    8e36:	26 8b 5f 02          	mov    %es:0x2(%bx),%bx
    8e3a:	26 83 47 02 02       	addw   $0x2,%es:0x2(%bx)
    8e3f:	5f                   	pop    %di
    8e40:	5a                   	pop    %dx
    8e41:	c3                   	ret
    8e42:	8b d8                	mov    %ax,%bx
    8e44:	26 80 67 2f f9       	andb   $0xf9,%es:0x2f(%bx)
    8e49:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    8e4d:	26 8b 74 02          	mov    %es:0x2(%si),%si
    8e51:	8a 44 01             	mov    0x1(%si),%al
    8e54:	26 88 47 34          	mov    %al,%es:0x34(%bx)
    8e58:	26 8b 5f 02          	mov    %es:0x2(%bx),%bx
    8e5c:	26 83 47 02 03       	addw   $0x3,%es:0x2(%bx)
    8e61:	c3                   	ret
    8e62:	8b d8                	mov    %ax,%bx
    8e64:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    8e68:	26 8b 74 02          	mov    %es:0x2(%si),%si
    8e6c:	8b 74 01             	mov    0x1(%si),%si
    8e6f:	26 89 77 20          	mov    %si,%es:0x20(%bx)
    8e73:	eb e3                	jmp    0x8e58
    8e75:	53                   	push   %bx
    8e76:	8b d8                	mov    %ax,%bx
    8e78:	26 8a 47 2c          	mov    %es:0x2c(%bx),%al
    8e7c:	32 e4                	xor    %ah,%ah
    8e7e:	24 03                	and    $0x3,%al
    8e80:	26 80 67 2f f9       	andb   $0xf9,%es:0x2f(%bx)
    8e85:	c1 e0 09             	shl    $0x9,%ax
    8e88:	26 09 47 2e          	or     %ax,%es:0x2e(%bx)
    8e8c:	e9 4f f5             	jmp    0x83de
    8e8f:	8b d8                	mov    %ax,%bx
    8e91:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    8e95:	26 8b 74 02          	mov    %es:0x2(%si),%si
    8e99:	8a 44 01             	mov    0x1(%si),%al
    8e9c:	32 e4                	xor    %ah,%ah
    8e9e:	26 89 47 04          	mov    %ax,%es:0x4(%bx)
    8ea2:	26 c7 47 06 00 00    	movw   $0x0,%es:0x6(%bx)
    8ea8:	8b c3                	mov    %bx,%ax
    8eaa:	e8 40 04             	call   0x92ed
    8ead:	26 8b 5f 02          	mov    %es:0x2(%bx),%bx
    8eb1:	26 83 47 02 02       	addw   $0x2,%es:0x2(%bx)
    8eb6:	c3                   	ret
    8eb7:	8b d8                	mov    %ax,%bx
    8eb9:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    8ebd:	26 8b 74 02          	mov    %es:0x2(%si),%si
    8ec1:	8a 44 01             	mov    0x1(%si),%al
    8ec4:	32 e4                	xor    %ah,%ah
    8ec6:	26 89 47 04          	mov    %ax,%es:0x4(%bx)
    8eca:	26 c7 47 06 00 00    	movw   $0x0,%es:0x6(%bx)
    8ed0:	8b c3                	mov    %bx,%ax
    8ed2:	e8 08 04             	call   0x92dd
    8ed5:	eb d6                	jmp    0x8ead
    8ed7:	53                   	push   %bx
    8ed8:	56                   	push   %si
    8ed9:	8b d8                	mov    %ax,%bx
    8edb:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    8edf:	26 8b 74 02          	mov    %es:0x2(%si),%si
    8ee3:	8a 44 01             	mov    0x1(%si),%al
    8ee6:	32 e4                	xor    %ah,%ah
    8ee8:	26 89 47 04          	mov    %ax,%es:0x4(%bx)
    8eec:	26 c7 47 06 00 00    	movw   $0x0,%es:0x6(%bx)
    8ef2:	8b c3                	mov    %bx,%ax
    8ef4:	e8 06 04             	call   0x92fd
    8ef7:	e9 86 f4             	jmp    0x8380
    8efa:	53                   	push   %bx
    8efb:	56                   	push   %si
    8efc:	8b d8                	mov    %ax,%bx
    8efe:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    8f02:	26 8b 74 02          	mov    %es:0x2(%si),%si
    8f06:	8a 44 01             	mov    0x1(%si),%al
    8f09:	32 e4                	xor    %ah,%ah
    8f0b:	26 89 47 04          	mov    %ax,%es:0x4(%bx)
    8f0f:	26 c7 47 06 00 00    	movw   $0x0,%es:0x6(%bx)
    8f15:	8b c3                	mov    %bx,%ax
    8f17:	e8 f0 03             	call   0x930a
    8f1a:	e9 63 f4             	jmp    0x8380
    8f1d:	53                   	push   %bx
    8f1e:	56                   	push   %si
    8f1f:	8b d8                	mov    %ax,%bx
    8f21:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    8f25:	8b de                	mov    %si,%bx
    8f27:	26 8b 5f 02          	mov    %es:0x2(%bx),%bx
    8f2b:	8b 5f 01             	mov    0x1(%bx),%bx
    8f2e:	83 c3 03             	add    $0x3,%bx
    8f31:	26 01 5c 02          	add    %bx,%es:0x2(%si)
    8f35:	5e                   	pop    %si
    8f36:	5b                   	pop    %bx
    8f37:	c3                   	ret
    8f38:	51                   	push   %cx
    8f39:	52                   	push   %dx
    8f3a:	8b d8                	mov    %ax,%bx
    8f3c:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    8f40:	26 83 44 02 02       	addw   $0x2,%es:0x2(%si)
    8f45:	26 8b 07             	mov    %es:(%bx),%ax
    8f48:	e8 a0 01             	call   0x90eb
    8f4b:	8b c8                	mov    %ax,%cx
    8f4d:	26 8b 77 28          	mov    %es:0x28(%bx),%si
    8f51:	8a 44 01             	mov    0x1(%si),%al
    8f54:	32 e4                	xor    %ah,%ah
    8f56:	03 c0                	add    %ax,%ax
    8f58:	8b f1                	mov    %cx,%si
    8f5a:	03 f0                	add    %ax,%si
    8f5c:	83 3c 00             	cmpw   $0x0,(%si)
    8f5f:	74 4f                	je     0x8fb0
    8f61:	26 8b 77 28          	mov    %es:0x28(%bx),%si
    8f65:	8a 54 01             	mov    0x1(%si),%dl
    8f68:	32 f6                	xor    %dh,%dh
    8f6a:	8b c3                	mov    %bx,%ax
    8f6c:	e8 b0 01             	call   0x911f
    8f6f:	26 88 47 31          	mov    %al,%es:0x31(%bx)
    8f73:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    8f77:	26 8b 34             	mov    %es:(%si),%si
    8f7a:	8b 44 04             	mov    0x4(%si),%ax
    8f7d:	c1 e8 08             	shr    $0x8,%ax
    8f80:	32 e4                	xor    %ah,%ah
    8f82:	24 7f                	and    $0x7f,%al
    8f84:	c1 e8 02             	shr    $0x2,%ax
    8f87:	32 e4                	xor    %ah,%ah
    8f89:	24 1f                	and    $0x1f,%al
    8f8b:	26 80 67 2f 07       	andb   $0x7,%es:0x2f(%bx)
    8f90:	c1 e0 0b             	shl    $0xb,%ax
    8f93:	26 09 47 2e          	or     %ax,%es:0x2e(%bx)
    8f97:	26 8b 37             	mov    %es:(%bx),%si
    8f9a:	26 8b 47 2e          	mov    %es:0x2e(%bx),%ax
    8f9e:	c1 e8 0b             	shr    $0xb,%ax
    8fa1:	c1 e0 02             	shl    $0x2,%ax
    8fa4:	26 01 04             	add    %ax,%es:(%si)
    8fa7:	26 c6 47 32 01       	movb   $0x1,%es:0x32(%bx)
    8fac:	26 89 4f 28          	mov    %cx,%es:0x28(%bx)
    8fb0:	5a                   	pop    %dx
    8fb1:	59                   	pop    %cx
    8fb2:	c3                   	ret
    8fb3:	53                   	push   %bx
    8fb4:	8b d8                	mov    %ax,%bx
    8fb6:	26 c6 47 32 82       	movb   $0x82,%es:0x32(%bx)
    8fbb:	5b                   	pop    %bx
    8fbc:	c3                   	ret
    8fbd:	57                   	push   %di
    8fbe:	8b d8                	mov    %ax,%bx
    8fc0:	8c d6                	mov    %ss,%si
    8fc2:	8e c6                	mov    %si,%es
    8fc4:	26 80 7f 2c 05       	cmpb   $0x5,%es:0x2c(%bx)
    8fc9:	74 0a                	je     0x8fd5
    8fcb:	26 8a 47 2c          	mov    %es:0x2c(%bx),%al
    8fcf:	26 3a 47 30          	cmp    %es:0x30(%bx),%al
    8fd3:	75 1e                	jne    0x8ff3
    8fd5:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    8fd9:	26 8b 74 02          	mov    %es:0x2(%si),%si
    8fdd:	26 8b 7f 02          	mov    %es:0x2(%bx),%di
    8fe1:	26 8b 3d             	mov    %es:(%di),%di
    8fe4:	8b 74 01             	mov    0x1(%si),%si
    8fe7:	03 f7                	add    %di,%si
    8fe9:	26 8b 5f 02          	mov    %es:0x2(%bx),%bx
    8fed:	26 89 77 02          	mov    %si,%es:0x2(%bx)
    8ff1:	5f                   	pop    %di
    8ff2:	c3                   	ret
    8ff3:	26 8b 5f 02          	mov    %es:0x2(%bx),%bx
    8ff7:	26 83 47 02 03       	addw   $0x3,%es:0x2(%bx)
    8ffc:	5f                   	pop    %di
    8ffd:	c3                   	ret
    8ffe:	53                   	push   %bx
    8fff:	56                   	push   %si
    9000:	57                   	push   %di
    9001:	8b d8                	mov    %ax,%bx
    9003:	8c d6                	mov    %ss,%si
    9005:	8e c6                	mov    %si,%es
    9007:	26 80 7f 30 01       	cmpb   $0x1,%es:0x30(%bx)
    900c:	74 0a                	je     0x9018
    900e:	26 8a 47 30          	mov    %es:0x30(%bx),%al
    9012:	26 3a 47 2c          	cmp    %es:0x2c(%bx),%al
    9016:	75 20                	jne    0x9038
    9018:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    901c:	26 8b 74 02          	mov    %es:0x2(%si),%si
    9020:	26 8b 7f 02          	mov    %es:0x2(%bx),%di
    9024:	26 8b 3d             	mov    %es:(%di),%di
    9027:	8b 74 01             	mov    0x1(%si),%si
    902a:	03 f7                	add    %di,%si
    902c:	26 8b 5f 02          	mov    %es:0x2(%bx),%bx
    9030:	26 89 77 02          	mov    %si,%es:0x2(%bx)
    9034:	5f                   	pop    %di
    9035:	5e                   	pop    %si
    9036:	5b                   	pop    %bx
    9037:	c3                   	ret
    9038:	26 8b 5f 02          	mov    %es:0x2(%bx),%bx
    903c:	26 83 47 02 03       	addw   $0x3,%es:0x2(%bx)
    9041:	eb f1                	jmp    0x9034
    9043:	53                   	push   %bx
    9044:	56                   	push   %si
    9045:	57                   	push   %di
    9046:	8b d8                	mov    %ax,%bx
    9048:	8c d0                	mov    %ss,%ax
    904a:	8e c0                	mov    %ax,%es
    904c:	26 80 7f 30 01       	cmpb   $0x1,%es:0x30(%bx)
    9051:	74 e5                	je     0x9038
    9053:	eb c3                	jmp    0x9018
    9055:	55                   	push   %bp
    9056:	8b ec                	mov    %sp,%bp
    9058:	53                   	push   %bx
    9059:	51                   	push   %cx
    905a:	52                   	push   %dx
    905b:	57                   	push   %di
    905c:	8b d8                	mov    %ax,%bx
    905e:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    9062:	26 8b 74 02          	mov    %es:0x2(%si),%si
    9066:	8a 04                	mov    (%si),%al
    9068:	26 c6 47 3d 00       	movb   $0x0,%es:0x3d(%bx)
    906d:	8c d1                	mov    %ss,%cx
    906f:	8e c1                	mov    %cx,%es
    9071:	26 80 7f 3d 08       	cmpb   $0x8,%es:0x3d(%bx)
    9076:	73 20                	jae    0x9098
    9078:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    907c:	26 8a 57 3d          	mov    %es:0x3d(%bx),%dl
    9080:	32 f6                	xor    %dh,%dh
    9082:	26 8b 7c 02          	mov    %es:0x2(%si),%di
    9086:	03 fa                	add    %dx,%di
    9088:	8b f3                	mov    %bx,%si
    908a:	03 f2                	add    %dx,%si
    908c:	8a 15                	mov    (%di),%dl
    908e:	26 88 54 35          	mov    %dl,%es:0x35(%si)
    9092:	26 fe 47 3d          	incb   %es:0x3d(%bx)
    9096:	eb d5                	jmp    0x906d
    9098:	26 8b 7f 02          	mov    %es:0x2(%bx),%di
    909c:	8a d0                	mov    %al,%dl
    909e:	32 f6                	xor    %dh,%dh
    90a0:	8b f2                	mov    %dx,%si
    90a2:	c1 e6 02             	shl    $0x2,%si
    90a5:	8a 94 69 de          	mov    -0x2197(%si),%dl
    90a9:	26 01 55 02          	add    %dx,%es:0x2(%di)
    90ad:	26 8b 7f 28          	mov    %es:0x28(%bx),%di
    90b1:	8a 55 01             	mov    0x1(%di),%dl
    90b4:	80 e2 07             	and    $0x7,%dl
    90b7:	26 88 57 2d          	mov    %dl,%es:0x2d(%bx)
    90bb:	26 8b 7f 28          	mov    %es:0x28(%bx),%di
    90bf:	8a 55 01             	mov    0x1(%di),%dl
    90c2:	c0 ea 03             	shr    $0x3,%dl
    90c5:	80 e2 07             	and    $0x7,%dl
    90c8:	26 88 57 2b          	mov    %dl,%es:0x2b(%bx)
    90cc:	26 8b 7f 28          	mov    %es:0x28(%bx),%di
    90d0:	8a 55 01             	mov    0x1(%di),%dl
    90d3:	c0 ea 06             	shr    $0x6,%dl
    90d6:	26 88 57 2a          	mov    %dl,%es:0x2a(%bx)
    90da:	8a 94 68 de          	mov    -0x2198(%si),%dl
    90de:	26 88 57 2c          	mov    %dl,%es:0x2c(%bx)
    90e2:	8d 66 f8             	lea    -0x8(%bp),%sp
    90e5:	5f                   	pop    %di
    90e6:	5a                   	pop    %dx
    90e7:	59                   	pop    %cx
    90e8:	5b                   	pop    %bx
    90e9:	5d                   	pop    %bp
    90ea:	c3                   	ret
    90eb:	53                   	push   %bx
    90ec:	56                   	push   %si
    90ed:	8b d8                	mov    %ax,%bx
    90ef:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    90f3:	8b c6                	mov    %si,%ax
    90f5:	8b 74 48             	mov    0x48(%si),%si
    90f8:	03 f0                	add    %ax,%si
    90fa:	8b d8                	mov    %ax,%bx
    90fc:	8b 74 1e             	mov    0x1e(%si),%si
    90ff:	8b c6                	mov    %si,%ax
    9101:	03 c3                	add    %bx,%ax
    9103:	83 c0 04             	add    $0x4,%ax
    9106:	5e                   	pop    %si
    9107:	5b                   	pop    %bx
    9108:	c3                   	ret
    9109:	53                   	push   %bx
    910a:	56                   	push   %si
    910b:	8b d8                	mov    %ax,%bx
    910d:	26 8b 77 02          	mov    %es:0x2(%bx),%si
    9111:	8b c6                	mov    %si,%ax
    9113:	8b 74 48             	mov    0x48(%si),%si
    9116:	03 f0                	add    %ax,%si
    9118:	8b d8                	mov    %ax,%bx
    911a:	8b 74 20             	mov    0x20(%si),%si
    911d:	eb e0                	jmp    0x90ff
    911f:	8a c2                	mov    %dl,%al
    9121:	c3                   	ret
    9122:	16                   	push   %ss
    9123:	07                   	pop    %es
    9124:	55                   	push   %bp
    9125:	8b ec                	mov    %sp,%bp
    9127:	53                   	push   %bx
    9128:	51                   	push   %cx
    9129:	56                   	push   %si
    912a:	57                   	push   %di
    912b:	83 ec 40             	sub    $0x40,%sp
    912e:	8b f8                	mov    %ax,%di
    9130:	89 46 b8             	mov    %ax,-0x48(%bp)
    9133:	e8 d3 ff             	call   0x9109
    9136:	8b d8                	mov    %ax,%bx
    9138:	89 46 e0             	mov    %ax,-0x20(%bp)
    913b:	26 8b 45 02          	mov    %es:0x2(%di),%ax
    913f:	8b 5f 2e             	mov    0x2e(%bx),%bx
    9142:	03 d8                	add    %ax,%bx
    9144:	89 5e de             	mov    %bx,-0x22(%bp)
    9147:	83 46 de 04          	addw   $0x4,-0x22(%bp)
    914b:	8b c7                	mov    %di,%ax
    914d:	e8 9b ff             	call   0x90eb
    9150:	89 46 e0             	mov    %ax,-0x20(%bp)
    9153:	32 f6                	xor    %dh,%dh
    9155:	8d 46 b8             	lea    -0x48(%bp),%ax
    9158:	e8 c4 ff             	call   0x911f
    915b:	8a d0                	mov    %al,%dl
    915d:	32 f6                	xor    %dh,%dh
    915f:	03 d2                	add    %dx,%dx
    9161:	8b 5e e0             	mov    -0x20(%bp),%bx
    9164:	03 da                	add    %dx,%bx
    9166:	83 3f 00             	cmpw   $0x0,(%bx)
    9169:	0f 84 65 01          	je     0x92d2
    916d:	88 46 e9             	mov    %al,-0x17(%bp)
    9170:	80 66 e7 f9          	andb   $0xf9,-0x19(%bp)
    9174:	c6 46 ec 00          	movb   $0x0,-0x14(%bp)
    9178:	c7 46 d8 00 00       	movw   $0x0,-0x28(%bp)
    917d:	66 c7 46 d0 00 00 00 	movl   $0x0,-0x30(%bp)
    9184:	00 
    9185:	c7 46 f6 00 00       	movw   $0x0,-0xa(%bp)
    918a:	c6 46 ea 01          	movb   $0x1,-0x16(%bp)
    918e:	eb 06                	jmp    0x9196
    9190:	3c 01                	cmp    $0x1,%al
    9192:	0f 85 8c 00          	jne    0x9222
    9196:	8a 56 e9             	mov    -0x17(%bp),%dl
    9199:	8a c2                	mov    %dl,%al
    919b:	32 e4                	xor    %ah,%ah
    919d:	03 c0                	add    %ax,%ax
    919f:	8b 5e e0             	mov    -0x20(%bp),%bx
    91a2:	03 d8                	add    %ax,%bx
    91a4:	83 3f 00             	cmpw   $0x0,(%bx)
    91a7:	74 75                	je     0x921e
    91a9:	26 8b 45 02          	mov    %es:0x2(%di),%ax
    91ad:	8b 1f                	mov    (%bx),%bx
    91af:	03 d8                	add    %ax,%bx
    91b1:	8b 47 04             	mov    0x4(%bx),%ax
    91b4:	32 e4                	xor    %ah,%ah
    91b6:	8b c8                	mov    %ax,%cx
    91b8:	83 c1 09             	add    $0x9,%cx
    91bb:	32 ed                	xor    %ch,%ch
    91bd:	80 e1 fe             	and    $0xfe,%cl
    91c0:	83 f9 00             	cmp    $0x0,%cx
    91c3:	74 07                	je     0x91cc
    91c5:	d1 e9                	shr    $1,%cx
    91c7:	33 c0                	xor    %ax,%ax
    91c9:	50                   	push   %ax
    91ca:	e2 fd                	loop   0x91c9
    91cc:	8b c4                	mov    %sp,%ax
    91ce:	8b d8                	mov    %ax,%bx
    91d0:	89 46 ba             	mov    %ax,-0x46(%bp)
    91d3:	85 c0                	test   %ax,%ax
    91d5:	74 41                	je     0x9218
    91d7:	83 c0 08             	add    $0x8,%ax
    91da:	26 89 47 04          	mov    %ax,%es:0x4(%bx)
    91de:	8a c2                	mov    %dl,%al
    91e0:	32 e4                	xor    %ah,%ah
    91e2:	03 c0                	add    %ax,%ax
    91e4:	8b 5e e0             	mov    -0x20(%bp),%bx
    91e7:	03 d8                	add    %ax,%bx
    91e9:	26 8b 45 02          	mov    %es:0x2(%di),%ax
    91ed:	03 07                	add    (%bx),%ax
    91ef:	8b 5e ba             	mov    -0x46(%bp),%bx
    91f2:	26 89 07             	mov    %ax,%es:(%bx)
    91f5:	8b 5e ba             	mov    -0x46(%bp),%bx
    91f8:	26 8b 07             	mov    %es:(%bx),%ax
    91fb:	83 c0 06             	add    $0x6,%ax
    91fe:	26 89 47 02          	mov    %ax,%es:0x2(%bx)
    9202:	8b 5e ba             	mov    -0x46(%bp),%bx
    9205:	8b 76 f6             	mov    -0xa(%bp),%si
    9208:	26 89 77 06          	mov    %si,%es:0x6(%bx)
    920c:	8b 5e ba             	mov    -0x46(%bp),%bx
    920f:	89 5e f6             	mov    %bx,-0xa(%bp)
    9212:	c6 46 ea 00          	movb   $0x0,-0x16(%bp)
    9216:	eb 0a                	jmp    0x9222
    9218:	c6 46 ea 87          	movb   $0x87,-0x16(%bp)
    921c:	eb 04                	jmp    0x9222
    921e:	c6 46 ea 83          	movb   $0x83,-0x16(%bp)
    9222:	8a 46 ea             	mov    -0x16(%bp),%al
    9225:	32 e4                	xor    %ah,%ah
    9227:	83 f8 10             	cmp    $0x10,%ax
    922a:	0f 8f 99 00          	jg     0x92c7
    922e:	88 66 ea             	mov    %ah,-0x16(%bp)
    9231:	8a 46 ea             	mov    -0x16(%bp),%al
    9234:	32 e4                	xor    %ah,%ah
    9236:	85 c0                	test   %ax,%ax
    9238:	0f 8f 83 00          	jg     0x92bf
    923c:	8c d0                	mov    %ss,%ax
    923e:	8b 5e ba             	mov    -0x46(%bp),%bx
    9241:	8e c0                	mov    %ax,%es
    9243:	26 8b 5f 02          	mov    %es:0x2(%bx),%bx
    9247:	89 5e e0             	mov    %bx,-0x20(%bp)
    924a:	8b 5e ba             	mov    -0x46(%bp),%bx
    924d:	26 8b 5f 02          	mov    %es:0x2(%bx),%bx
    9251:	80 3f 5b             	cmpb   $0x5b,(%bx)
    9254:	75 4a                	jne    0x92a0
    9256:	c6 46 ea 10          	movb   $0x10,-0x16(%bp)
    925a:	8b 5e ba             	mov    -0x46(%bp),%bx
    925d:	26 8b 5f 06          	mov    %es:0x6(%bx),%bx
    9261:	89 5e f6             	mov    %bx,-0xa(%bp)
    9264:	8b 5e ba             	mov    -0x46(%bp),%bx
    9267:	26 8b 1f             	mov    %es:(%bx),%bx
    926a:	8b 47 04             	mov    0x4(%bx),%ax
    926d:	32 e4                	xor    %ah,%ah
    926f:	8b c8                	mov    %ax,%cx
    9271:	83 c1 09             	add    $0x9,%cx
    9274:	32 ed                	xor    %ch,%ch
    9276:	80 e1 fe             	and    $0xfe,%cl
    9279:	03 e1                	add    %cx,%sp
    927b:	8b 5e f6             	mov    -0xa(%bp),%bx
    927e:	89 5e ba             	mov    %bx,-0x46(%bp)
    9281:	85 db                	test   %bx,%bx
    9283:	74 ac                	je     0x9231
    9285:	26 8b 1f             	mov    %es:(%bx),%bx
    9288:	8b 47 04             	mov    0x4(%bx),%ax
    928b:	c1 e8 08             	shr    $0x8,%ax
    928e:	32 e4                	xor    %ah,%ah
    9290:	24 7f                	and    $0x7f,%al
    9292:	c1 e8 02             	shr    $0x2,%ax
    9295:	c1 e0 02             	shl    $0x2,%ax
    9298:	8b 5e b8             	mov    -0x48(%bp),%bx
    929b:	26 29 07             	sub    %ax,%es:(%bx)
    929e:	eb 91                	jmp    0x9231
    92a0:	8d 46 b8             	lea    -0x48(%bp),%ax
    92a3:	e8 af fd             	call   0x9055
    92a6:	8a d0                	mov    %al,%dl
    92a8:	8d 46 b8             	lea    -0x48(%bp),%ax
    92ab:	e8 2e 00             	call   0x92dc
    92ae:	8a da                	mov    %dl,%bl
    92b0:	32 ff                	xor    %bh,%bh
    92b2:	c1 e3 02             	shl    $0x2,%bx
    92b5:	8d 46 b8             	lea    -0x48(%bp),%ax
    92b8:	ff 97 66 de          	call   *-0x219a(%bx)
    92bc:	e9 72 ff             	jmp    0x9231
    92bf:	83 7e f6 00          	cmpw   $0x0,-0xa(%bp)
    92c3:	0f 85 c9 fe          	jne    0x9190
    92c7:	80 7e ea 10          	cmpb   $0x10,-0x16(%bp)
    92cb:	74 05                	je     0x92d2
    92cd:	8a 46 ea             	mov    -0x16(%bp),%al
    92d0:	eb 02                	jmp    0x92d4
    92d2:	32 c0                	xor    %al,%al
    92d4:	8d 66 f8             	lea    -0x8(%bp),%sp
    92d7:	5f                   	pop    %di
    92d8:	5e                   	pop    %si
    92d9:	e9 0b fe             	jmp    0x90e7
    92dc:	c3                   	ret
    92dd:	53                   	push   %bx
    92de:	51                   	push   %cx
    92df:	8b d8                	mov    %ax,%bx
    92e1:	26 8a 4f 04          	mov    %es:0x4(%bx),%cl
    92e5:	32 ed                	xor    %ch,%ch
    92e7:	e8 4e e8             	call   0x7b38
    92ea:	59                   	pop    %cx
    92eb:	5b                   	pop    %bx
    92ec:	c3                   	ret
    92ed:	53                   	push   %bx
    92ee:	51                   	push   %cx
    92ef:	8b d8                	mov    %ax,%bx
    92f1:	26 8a 4f 04          	mov    %es:0x4(%bx),%cl
    92f5:	32 ed                	xor    %ch,%ch
    92f7:	e8 49 e8             	call   0x7b43
    92fa:	59                   	pop    %cx
    92fb:	5b                   	pop    %bx
    92fc:	c3                   	ret
    92fd:	53                   	push   %bx
    92fe:	8b d8                	mov    %ax,%bx
    9300:	26 8a 47 04          	mov    %es:0x4(%bx),%al
    9304:	32 e4                	xor    %ah,%ah
    9306:	e6 80                	out    %al,$0x80
    9308:	5b                   	pop    %bx
    9309:	c3                   	ret
    930a:	53                   	push   %bx
    930b:	51                   	push   %cx
    930c:	8b d8                	mov    %ax,%bx
    930e:	26 8a 4f 04          	mov    %es:0x4(%bx),%cl
    9312:	32 ed                	xor    %ch,%ch
    9314:	e8 97 e2             	call   0x75ae
    9317:	59                   	pop    %cx
    9318:	5b                   	pop    %bx
    9319:	c3                   	ret
    931a:	53                   	push   %bx
    931b:	8b d8                	mov    %ax,%bx
    931d:	66 50                	push   %eax
    931f:	66 52                	push   %edx
    9321:	66 51                	push   %ecx
    9323:	66 26 8b 47 08       	mov    %es:0x8(%bx),%eax
    9328:	66 26 8b 57 10       	mov    %es:0x10(%bx),%edx
    932d:	66 26 8b 4f 04       	mov    %es:0x4(%bx),%ecx
    9332:	66 f7 f1             	div    %ecx
    9335:	66 26 89 47 0c       	mov    %eax,%es:0xc(%bx)
    933a:	66 26 89 57 10       	mov    %edx,%es:0x10(%bx)
    933f:	66 59                	pop    %ecx
    9341:	66 5a                	pop    %edx
    9343:	66 58                	pop    %eax
    9345:	5b                   	pop    %bx
    9346:	c3                   	ret
    9347:	53                   	push   %bx
    9348:	8b d8                	mov    %ax,%bx
    934a:	66 50                	push   %eax
    934c:	66 52                	push   %edx
    934e:	66 51                	push   %ecx
    9350:	66 26 8b 47 08       	mov    %es:0x8(%bx),%eax
    9355:	66 26 8b 4f 04       	mov    %es:0x4(%bx),%ecx
    935a:	66 f7 e1             	mul    %ecx
    935d:	66 26 89 47 0c       	mov    %eax,%es:0xc(%bx)
    9362:	66 26 89 57 10       	mov    %edx,%es:0x10(%bx)
    9367:	66 59                	pop    %ecx
    9369:	66 5a                	pop    %edx
    936b:	66 58                	pop    %eax
    936d:	5b                   	pop    %bx
    936e:	c3                   	ret
    936f:	53                   	push   %bx
    9370:	57                   	push   %di
    9371:	8b d8                	mov    %ax,%bx
    9373:	26 8b 5f 14          	mov    %es:0x14(%bx),%bx
    9377:	e8 f3 ea             	call   0x7e6d
    937a:	8b d0                	mov    %ax,%dx
    937c:	66 c1 e8 10          	shr    $0x10,%eax
    9380:	92                   	xchg   %ax,%dx
    9381:	5f                   	pop    %di
    9382:	5b                   	pop    %bx
    9383:	c3                   	ret
    9384:	53                   	push   %bx
    9385:	57                   	push   %di
    9386:	8b d8                	mov    %ax,%bx
    9388:	26 8b 47 14          	mov    %es:0x14(%bx),%ax
    938c:	26 8b 57 16          	mov    %es:0x16(%bx),%dx
    9390:	8b d8                	mov    %ax,%bx
    9392:	87 d3                	xchg   %dx,%bx
    9394:	66 c1 e3 10          	shl    $0x10,%ebx
    9398:	8b da                	mov    %dx,%bx
    939a:	c1 e3 02             	shl    $0x2,%bx
    939d:	e8 f1 ea             	call   0x7e91
    93a0:	eb d8                	jmp    0x937a
    93a2:	53                   	push   %bx
    93a3:	52                   	push   %dx
    93a4:	57                   	push   %di
    93a5:	8b d8                	mov    %ax,%bx
    93a7:	26 8b 47 08          	mov    %es:0x8(%bx),%ax
    93ab:	26 8b 57 0a          	mov    %es:0xa(%bx),%dx
    93af:	92                   	xchg   %ax,%dx
    93b0:	66 c1 e0 10          	shl    $0x10,%eax
    93b4:	8b c2                	mov    %dx,%ax
    93b6:	26 8b 5f 14          	mov    %es:0x14(%bx),%bx
    93ba:	e8 15 ea             	call   0x7dd2
    93bd:	5f                   	pop    %di
    93be:	5a                   	pop    %dx
    93bf:	5b                   	pop    %bx
    93c0:	c3                   	ret
    93c1:	53                   	push   %bx
    93c2:	52                   	push   %dx
    93c3:	8b d8                	mov    %ax,%bx
    93c5:	26 8b 47 1c          	mov    %es:0x1c(%bx),%ax
    93c9:	26 8b 57 1e          	mov    %es:0x1e(%bx),%dx
    93cd:	92                   	xchg   %ax,%dx
    93ce:	66 c1 e0 10          	shl    $0x10,%eax
    93d2:	8b c2                	mov    %dx,%ax
    93d4:	26 8b 5f 26          	mov    %es:0x26(%bx),%bx
    93d8:	8b 5f 01             	mov    0x1(%bx),%bx
    93db:	e8 f4 e9             	call   0x7dd2
    93de:	5a                   	pop    %dx
    93df:	5b                   	pop    %bx
    93e0:	c3                   	ret
    93e1:	53                   	push   %bx
    93e2:	52                   	push   %dx
    93e3:	56                   	push   %si
    93e4:	8b f0                	mov    %ax,%si
    93e6:	26 8b 5c 26          	mov    %es:0x26(%si),%bx
    93ea:	8b 5f 01             	mov    0x1(%bx),%bx
    93ed:	e8 7d ea             	call   0x7e6d
    93f0:	8b d0                	mov    %ax,%dx
    93f2:	66 c1 e8 10          	shr    $0x10,%eax
    93f6:	92                   	xchg   %ax,%dx
    93f7:	26 89 44 1c          	mov    %ax,%es:0x1c(%si)
    93fb:	26 89 54 1e          	mov    %dx,%es:0x1e(%si)
    93ff:	5e                   	pop    %si
    9400:	5a                   	pop    %dx
    9401:	5b                   	pop    %bx
    9402:	c3                   	ret
    9403:	53                   	push   %bx
    9404:	51                   	push   %cx
    9405:	52                   	push   %dx
    9406:	57                   	push   %di
    9407:	8b d8                	mov    %ax,%bx
    9409:	26 8b 47 08          	mov    %es:0x8(%bx),%ax
    940d:	26 8b 57 0a          	mov    %es:0xa(%bx),%dx
    9411:	92                   	xchg   %ax,%dx
    9412:	66 c1 e0 10          	shl    $0x10,%eax
    9416:	8b c2                	mov    %dx,%ax
    9418:	8b c8                	mov    %ax,%cx
    941a:	26 8b 47 14          	mov    %es:0x14(%bx),%ax
    941e:	26 8b 57 16          	mov    %es:0x16(%bx),%dx
    9422:	8b d8                	mov    %ax,%bx
    9424:	87 d3                	xchg   %dx,%bx
    9426:	66 c1 e3 10          	shl    $0x10,%ebx
    942a:	8b da                	mov    %dx,%bx
    942c:	c1 e3 02             	shl    $0x2,%bx
    942f:	8b c1                	mov    %cx,%ax
    9431:	e8 d1 e9             	call   0x7e05
    9434:	5f                   	pop    %di
    9435:	5a                   	pop    %dx
    9436:	59                   	pop    %cx
    9437:	5b                   	pop    %bx
    9438:	c3                   	ret
    9439:	8b d0                	mov    %ax,%dx
    943b:	66 c1 e8 10          	shr    $0x10,%eax
    943f:	92                   	xchg   %ax,%dx
    9440:	c3                   	ret
    9441:	00 1e 06 66          	add    %bl,0x6606
    9445:	50                   	push   %ax
    9446:	66 51                	push   %ecx
    9448:	66 52                	push   %edx
    944a:	66 53                	push   %ebx
    944c:	66 55                	push   %ebp
    944e:	66 56                	push   %esi
    9450:	66 57                	push   %edi
    9452:	0e                   	push   %cs
    9453:	1f                   	pop    %ds
    9454:	0a c0                	or     %al,%al
    9456:	75 06                	jne    0x945e
    9458:	e8 47 01             	call   0x95a2
    945b:	e9 a8 00             	jmp    0x9506
    945e:	3c 01                	cmp    $0x1,%al
    9460:	75 06                	jne    0x9468
    9462:	e8 77 01             	call   0x95dc
    9465:	e9 9e 00             	jmp    0x9506
    9468:	3c 02                	cmp    $0x2,%al
    946a:	75 06                	jne    0x9472
    946c:	e8 9f 02             	call   0x970e
    946f:	e9 94 00             	jmp    0x9506
    9472:	3c 03                	cmp    $0x3,%al
    9474:	75 0b                	jne    0x9481
    9476:	e8 d1 03             	call   0x984a
    9479:	8b ec                	mov    %sp,%bp
    947b:	89 5e 0c             	mov    %bx,0xc(%bp)
    947e:	e9 85 00             	jmp    0x9506
    9481:	3c 04                	cmp    $0x4,%al
    9483:	75 02                	jne    0x9487
    9485:	eb 7d                	jmp    0x9504
    9487:	3c 05                	cmp    $0x5,%al
    9489:	75 0a                	jne    0x9495
    948b:	e8 4e 04             	call   0x98dc
    948e:	8b ec                	mov    %sp,%bp
    9490:	89 56 10             	mov    %dx,0x10(%bp)
    9493:	eb 71                	jmp    0x9506
    9495:	3c 06                	cmp    $0x6,%al
    9497:	75 10                	jne    0x94a9
    9499:	e8 cc 03             	call   0x9868
    949c:	8b ec                	mov    %sp,%bp
    949e:	89 5e 0c             	mov    %bx,0xc(%bp)
    94a1:	89 4e 14             	mov    %cx,0x14(%bp)
    94a4:	89 56 10             	mov    %dx,0x10(%bp)
    94a7:	eb 5d                	jmp    0x9506
    94a9:	3c 07                	cmp    $0x7,%al
    94ab:	75 02                	jne    0x94af
    94ad:	eb 55                	jmp    0x9504
    94af:	3c 08                	cmp    $0x8,%al
    94b1:	75 0a                	jne    0x94bd
    94b3:	e8 10 04             	call   0x98c6
    94b6:	8b ec                	mov    %sp,%bp
    94b8:	88 7e 0d             	mov    %bh,0xd(%bp)
    94bb:	eb 49                	jmp    0x9506
    94bd:	3c 09                	cmp    $0x9,%al
    94bf:	75 02                	jne    0x94c3
    94c1:	eb 41                	jmp    0x9504
    94c3:	3c 0a                	cmp    $0xa,%al
    94c5:	75 10                	jne    0x94d7
    94c7:	e8 a5 04             	call   0x996f
    94ca:	8b ec                	mov    %sp,%bp
    94cc:	89 4e 14             	mov    %cx,0x14(%bp)
    94cf:	89 7e 00             	mov    %di,0x0(%bp)
    94d2:	8c 46 1c             	mov    %es,0x1c(%bp)
    94d5:	eb 2f                	jmp    0x9506
    94d7:	3c 0b                	cmp    $0xb,%al
    94d9:	75 02                	jne    0x94dd
    94db:	eb 27                	jmp    0x9504
    94dd:	3c 10                	cmp    $0x10,%al
    94df:	75 0a                	jne    0x94eb
    94e1:	e8 9a 04             	call   0x997e
    94e4:	8b ec                	mov    %sp,%bp
    94e6:	89 5e 0c             	mov    %bx,0xc(%bp)
    94e9:	eb 1b                	jmp    0x9506
    94eb:	3c 11                	cmp    $0x11,%al
    94ed:	75 02                	jne    0x94f1
    94ef:	eb 13                	jmp    0x9504
    94f1:	3c 15                	cmp    $0x15,%al
    94f3:	75 0f                	jne    0x9504
    94f5:	e8 c0 04             	call   0x99b8
    94f8:	8b ec                	mov    %sp,%bp
    94fa:	89 5e 0c             	mov    %bx,0xc(%bp)
    94fd:	eb 07                	jmp    0x9506
    94ff:	b8 4f 01             	mov    $0x14f,%ax
    9502:	eb 02                	jmp    0x9506
    9504:	32 c0                	xor    %al,%al
    9506:	8b ec                	mov    %sp,%bp
    9508:	89 46 18             	mov    %ax,0x18(%bp)
    950b:	66 5f                	pop    %edi
    950d:	66 5e                	pop    %esi
    950f:	66 5d                	pop    %ebp
    9511:	66 5b                	pop    %ebx
    9513:	66 5a                	pop    %edx
    9515:	66 59                	pop    %ecx
    9517:	66 58                	pop    %eax
    9519:	07                   	pop    %es
    951a:	1f                   	pop    %ds
    951b:	c3                   	ret
    951c:	50                   	push   %ax
    951d:	1e                   	push   %ds
    951e:	2e 8e 1e 0e 61       	mov    %cs:0x610e,%ds
    9523:	8c d8                	mov    %ds,%ax
    9525:	a3 2c a5             	mov    %ax,0xa52c
    9528:	a3 3c a5             	mov    %ax,0xa53c
    952b:	a3 4e a5             	mov    %ax,0xa54e
    952e:	2e 8e 1e 06 61       	mov    %cs:0x6106,%ds
    9533:	a3 aa 04             	mov    %ax,0x4aa
    9536:	1f                   	pop    %ds
    9537:	58                   	pop    %ax
    9538:	cb                   	lret
    9539:	00 30                	add    %dh,(%bx,%si)
    953b:	31 2e 30 30          	xor    %bp,0x3030
    953f:	00 41 4d             	add    %al,0x4d(%bx,%di)
    9542:	44                   	inc    %sp
    9543:	20 41 54             	and    %al,0x54(%bx,%di)
    9546:	4f                   	dec    %di
    9547:	4d                   	dec    %bp
    9548:	42                   	inc    %dx
    9549:	49                   	dec    %cx
    954a:	4f                   	dec    %di
    954b:	53                   	push   %bx
    954c:	00 28                	add    %ch,(%bx,%si)
    954e:	43                   	inc    %bx
    954f:	29 20                	sub    %sp,(%bx,%si)
    9551:	31 39                	xor    %di,(%bx,%di)
    9553:	38 38                	cmp    %bh,(%bx,%si)
    9555:	2d 32 30             	sub    $0x3032,%ax
    9558:	32 32                	xor    (%bp,%si),%dh
    955a:	2c 20                	sub    $0x20,%al
    955c:	41                   	inc    %cx
    955d:	64 76 61             	fs jbe 0x95c1
    9560:	6e                   	outsb  %ds:(%si),(%dx)
    9561:	63 65 64             	arpl   %sp,0x64(%di)
    9564:	20 4d 69             	and    %cl,0x69(%di)
    9567:	63 72 6f             	arpl   %si,0x6f(%bp,%si)
    956a:	20 44 65             	and    %al,0x65(%si)
    956d:	76 69                	jbe    0x95d8
    956f:	63 65 73             	arpl   %sp,0x73(%di)
    9572:	2c 20                	sub    $0x20,%al
    9574:	49                   	dec    %cx
    9575:	6e                   	outsb  %ds:(%si),(%dx)
    9576:	63 2e 00 4e          	arpl   %bp,0x4e00
    957a:	41                   	inc    %cx
    957b:	56                   	push   %si
    957c:	49                   	dec    %cx
    957d:	33 33                	xor    (%bp,%di),%si
    957f:	00 56 45             	add    %dl,0x45(%bp)
    9582:	53                   	push   %bx
    9583:	41                   	inc    %cx
    9584:	00 03                	add    %al,(%bp,%di)
    9586:	40                   	inc    %ax
    9587:	95                   	xchg   %ax,%bp
    9588:	00 00                	add    %al,(%bx,%si)
    958a:	01 00                	add    %ax,(%bx,%si)
    958c:	00 00                	add    %al,(%bx,%si)
    958e:	00 00                	add    %al,(%bx,%si)
    9590:	00 00                	add    %al,(%bx,%si)
    9592:	00 03                	add    %al,(%bp,%di)
    9594:	00 00                	add    %al,(%bx,%si)
    9596:	4d                   	dec    %bp
    9597:	95                   	xchg   %ax,%bp
    9598:	00 00                	add    %al,(%bx,%si)
    959a:	79 95                	jns    0x9531
    959c:	00 00                	add    %al,(%bx,%si)
    959e:	3a 95 00 00          	cmp    0x0(%di),%dl
    95a2:	b9 3f 00             	mov    $0x3f,%cx
    95a5:	8b df                	mov    %di,%bx
    95a7:	83 c7 04             	add    $0x4,%di
    95aa:	fc                   	cld
    95ab:	66 33 c0             	xor    %eax,%eax
    95ae:	f3 66 ab             	rep stos %eax,%es:(%di)
    95b1:	8b fb                	mov    %bx,%di
    95b3:	be 80 95             	mov    $0x9580,%si
    95b6:	b9 22 00             	mov    $0x22,%cx
    95b9:	f3 a4                	rep movsb %ds:(%si),%es:(%di)
    95bb:	06                   	push   %es
    95bc:	1f                   	pop    %ds
    95bd:	8c 4f 08             	mov    %cs,0x8(%bx)
    95c0:	8c 47 10             	mov    %es,0x10(%bx)
    95c3:	8c 4f 18             	mov    %cs,0x18(%bx)
    95c6:	8c 4f 1c             	mov    %cs,0x1c(%bx)
    95c9:	8c 4f 20             	mov    %cs,0x20(%bx)
    95cc:	83 c7 22             	add    $0x22,%di
    95cf:	89 7f 0e             	mov    %di,0xe(%bx)
    95d2:	0e                   	push   %cs
    95d3:	1f                   	pop    %ds
    95d4:	e8 b2 de             	call   0x7489
    95d7:	b0 4f                	mov    $0x4f,%al
    95d9:	32 e4                	xor    %ah,%ah
    95db:	c3                   	ret
    95dc:	56                   	push   %si
    95dd:	51                   	push   %cx
    95de:	57                   	push   %di
    95df:	b9 10 00             	mov    $0x10,%cx
    95e2:	66 33 c0             	xor    %eax,%eax
    95e5:	f3 66 ab             	rep stos %eax,%es:(%di)
    95e8:	5f                   	pop    %di
    95e9:	59                   	pop    %cx
    95ea:	8c db                	mov    %ds,%bx
    95ec:	06                   	push   %es
    95ed:	1f                   	pop    %ds
    95ee:	c7 05 bb 00          	movw   $0xbb,(%di)
    95f2:	c6 45 02 07          	movb   $0x7,0x2(%di)
    95f6:	c7 45 04 40 00       	movw   $0x40,0x4(%di)
    95fb:	c7 45 06 40 00       	movw   $0x40,0x6(%di)
    9600:	c6 45 1b 06          	movb   $0x6,0x1b(%di)
    9604:	c6 45 18 01          	movb   $0x1,0x18(%di)
    9608:	c6 45 1a 01          	movb   $0x1,0x1a(%di)
    960c:	c6 45 1e 01          	movb   $0x1,0x1e(%di)
    9610:	66 c7 45 3e 00 84 d7 	movl   $0x17d78400,0x3e(%di)
    9617:	17 
    9618:	8e db                	mov    %bx,%ds
    961a:	e8 f6 d6             	call   0x6d13
    961d:	66 0b c0             	or     %eax,%eax
    9620:	0f 84 e1 00          	je     0x9705
    9624:	06                   	push   %es
    9625:	1f                   	pop    %ds
    9626:	66 89 45 28          	mov    %eax,0x28(%di)
    962a:	8c c8                	mov    %cs,%ax
    962c:	66 c1 e0 10          	shl    $0x10,%eax
    9630:	b8 39 99             	mov    $0x9939,%ax
    9633:	66 89 45 0c          	mov    %eax,0xc(%di)
    9637:	81 f9 ff 81          	cmp    $0x81ff,%cx
    963b:	0f 84 c2 00          	je     0x9701
    963f:	80 e5 03             	and    $0x3,%ch
    9642:	b2 01                	mov    $0x1,%dl
    9644:	53                   	push   %bx
    9645:	8e db                	mov    %bx,%ds
    9647:	be 80 4c             	mov    $0x4c80,%si
    964a:	e8 5e dc             	call   0x72ab
    964d:	5b                   	pop    %bx
    964e:	06                   	push   %es
    964f:	1f                   	pop    %ds
    9650:	0f 84 b1 00          	je     0x9705
    9654:	53                   	push   %bx
    9655:	e8 da de             	call   0x7532
    9658:	66 89 45 12          	mov    %eax,0x12(%di)
    965c:	c7 45 16 08 10       	movw   $0x1008,0x16(%di)
    9661:	8d 5c 0c             	lea    0xc(%si),%bx
    9664:	e8 34 e8             	call   0x7e9b
    9667:	66 89 45 1f          	mov    %eax,0x1f(%di)
    966b:	66 89 45 36          	mov    %eax,0x36(%di)
    966f:	8d 5c 10             	lea    0x10(%si),%bx
    9672:	e8 26 e8             	call   0x7e9b
    9675:	66 89 45 23          	mov    %eax,0x23(%di)
    9679:	66 89 45 3a          	mov    %eax,0x3a(%di)
    967d:	8d 5c 08             	lea    0x8(%si),%bx
    9680:	e8 18 e8             	call   0x7e9b
    9683:	0a c0                	or     %al,%al
    9685:	75 03                	jne    0x968a
    9687:	5b                   	pop    %bx
    9688:	eb 7b                	jmp    0x9705
    968a:	e8 a5 de             	call   0x7532
    968d:	66 c1 e8 10          	shr    $0x10,%eax
    9691:	3d 58 02             	cmp    $0x258,%ax
    9694:	74 0d                	je     0x96a3
    9696:	3d 5e 01             	cmp    $0x15e,%ax
    9699:	74 08                	je     0x96a3
    969b:	77 0a                	ja     0x96a7
    969d:	c6 45 17 08          	movb   $0x8,0x17(%di)
    96a1:	eb 04                	jmp    0x96a7
    96a3:	c6 45 17 0e          	movb   $0xe,0x17(%di)
    96a7:	2e a1 08 61          	mov    %cs:0x6108,%ax
    96ab:	89 45 08             	mov    %ax,0x8(%di)
    96ae:	8d 5c 04             	lea    0x4(%si),%bx
    96b1:	e8 e7 e7             	call   0x7e9b
    96b4:	66 8b c8             	mov    %eax,%ecx
    96b7:	66 c1 e9 10          	shr    $0x10,%ecx
    96bb:	d3 e0                	shl    %cl,%ax
    96bd:	89 45 10             	mov    %ax,0x10(%di)
    96c0:	89 45 32             	mov    %ax,0x32(%di)
    96c3:	b0 08                	mov    $0x8,%al
    96c5:	d2 e0                	shl    %cl,%al
    96c7:	88 45 19             	mov    %al,0x19(%di)
    96ca:	8d 5c 14             	lea    0x14(%si),%bx
    96cd:	e8 cb e7             	call   0x7e9b
    96d0:	5b                   	pop    %bx
    96d1:	3d 00 03             	cmp    $0x300,%ax
    96d4:	77 2f                	ja     0x9705
    96d6:	53                   	push   %bx
    96d7:	8b d8                	mov    %ax,%bx
    96d9:	b8 00 03             	mov    $0x300,%ax
    96dc:	33 d2                	xor    %dx,%dx
    96de:	f7 f3                	div    %bx
    96e0:	5b                   	pop    %bx
    96e1:	fe c8                	dec    %al
    96e3:	88 45 1d             	mov    %al,0x1d(%di)
    96e6:	88 45 35             	mov    %al,0x35(%di)
    96e9:	88 45 34             	mov    %al,0x34(%di)
    96ec:	8e db                	mov    %bx,%ds
    96ee:	57                   	push   %di
    96ef:	53                   	push   %bx
    96f0:	be 80 4c             	mov    $0x4c80,%si
    96f3:	e8 86 d6             	call   0x6d7c
    96f6:	5b                   	pop    %bx
    96f7:	5f                   	pop    %di
    96f8:	0b c9                	or     %cx,%cx
    96fa:	75 05                	jne    0x9701
    96fc:	06                   	push   %es
    96fd:	1f                   	pop    %ds
    96fe:	83 25 fe             	andw   $0xfffe,(%di)
    9701:	32 e4                	xor    %ah,%ah
    9703:	eb 02                	jmp    0x9707
    9705:	b4 03                	mov    $0x3,%ah
    9707:	b0 4f                	mov    $0x4f,%al
    9709:	8e db                	mov    %bx,%ds
    970b:	5e                   	pop    %si
    970c:	c3                   	ret
    970d:	00 81 fb ff          	add    %al,-0x5(%bx,%di)
    9711:	81 74 68 0a ff       	xorw   $0xff0a,0x68(%si)
    9716:	75 04                	jne    0x971c
    9718:	8b c3                	mov    %bx,%ax
    971a:	eb 21                	jmp    0x973d
    971c:	f6 c7 08             	test   $0x8,%bh
    971f:	75 61                	jne    0x9782
    9721:	8b cb                	mov    %bx,%cx
    9723:	b2 01                	mov    $0x1,%dl
    9725:	be 20 4c             	mov    $0x4c20,%si
    9728:	e8 80 db             	call   0x72ab
    972b:	74 55                	je     0x9782
    972d:	e8 e1 dd             	call   0x7511
    9730:	0a c0                	or     %al,%al
    9732:	75 0e                	jne    0x9742
    9734:	66 c1 e8 10          	shr    $0x10,%eax
    9738:	80 e7 80             	and    $0x80,%bh
    973b:	0a c7                	or     %bh,%al
    973d:	e8 d5 02             	call   0x9a15
    9740:	eb 3a                	jmp    0x977c
    9742:	e8 42 d9             	call   0x7087
    9745:	74 06                	je     0x974d
    9747:	e8 d1 d7             	call   0x6f1b
    974a:	e8 30 d2             	call   0x697d
    974d:	be 20 4c             	mov    $0x4c20,%si
    9750:	e8 fd d5             	call   0x6d50
    9753:	74 2d                	je     0x9782
    9755:	e8 a5 00             	call   0x97fd
    9758:	e8 2c 00             	call   0x9787
    975b:	66 bb 20 4c 00 4c    	mov    $0x4c004c20,%ebx
    9761:	e8 a4 dd             	call   0x7508
    9764:	be 00 4c             	mov    $0x4c00,%si
    9767:	e8 a7 dd             	call   0x7511
    976a:	66 c1 e8 10          	shr    $0x10,%eax
    976e:	8b d8                	mov    %ax,%bx
    9770:	32 c0                	xor    %al,%al
    9772:	f6 c7 80             	test   $0x80,%bh
    9775:	74 02                	je     0x9779
    9777:	b0 40                	mov    $0x40,%al
    9779:	e8 2d d6             	call   0x6da9
    977c:	b0 4f                	mov    $0x4f,%al
    977e:	32 e4                	xor    %ah,%ah
    9780:	eb 04                	jmp    0x9786
    9782:	b0 4f                	mov    $0x4f,%al
    9784:	b4 03                	mov    $0x3,%ah
    9786:	c3                   	ret
    9787:	56                   	push   %si
    9788:	06                   	push   %es
    9789:	33 c0                	xor    %ax,%ax
    978b:	8e c0                	mov    %ax,%es
    978d:	be 20 4c             	mov    $0x4c20,%si
    9790:	e8 9f dd             	call   0x7532
    9793:	8b c8                	mov    %ax,%cx
    9795:	66 c1 e8 10          	shr    $0x10,%eax
    9799:	8b d0                	mov    %ax,%dx
    979b:	c1 e9 03             	shr    $0x3,%cx
    979e:	26 89 0e 4a 04       	mov    %cx,%es:0x44a
    97a3:	c1 ea 04             	shr    $0x4,%dx
    97a6:	fe ca                	dec    %dl
    97a8:	26 88 16 84 04       	mov    %dl,%es:0x484
    97ad:	26 c6 06 51 04 00    	movb   $0x0,%es:0x451
    97b3:	26 c6 06 50 04 00    	movb   $0x0,%es:0x450
    97b9:	26 c6 06 49 04 62    	movb   $0x62,%es:0x449
    97bf:	26 c7 06 4c 04 00 a0 	movw   $0xa000,%es:0x44c
    97c6:	26 c6 06 85 04 10    	movb   $0x10,%es:0x485
    97cc:	26 c7 06 0c 01 0b af 	movw   $0xaf0b,%es:0x10c
    97d3:	8c c8                	mov    %cs,%ax
    97d5:	26 a3 0e 01          	mov    %ax,%es:0x10e
    97d9:	07                   	pop    %es
    97da:	5e                   	pop    %si
    97db:	c3                   	ret
    97dc:	01 0f                	add    %cx,(%bx)
    97de:	00 0a                	add    %cl,(%bp,%si)
    97e0:	00 00                	add    %al,(%bx,%si)
    97e2:	00 00                	add    %al,(%bx,%si)
    97e4:	00 40 05             	add    %al,0x5(%bx,%si)
    97e7:	0f ff 00             	ud0    (%bx,%si),%ax
    97ea:	01 02                	add    %ax,(%bp,%si)
    97ec:	03 04                	add    (%si),%ax
    97ee:	05 06 07             	add    $0x706,%ax
    97f1:	08 09                	or     %cl,(%bx,%di)
    97f3:	0a 0b                	or     (%bp,%di),%cl
    97f5:	0c 0d                	or     $0xd,%al
    97f7:	0e                   	push   %cs
    97f8:	0f 01 00             	sgdtw  (%bx,%si)
    97fb:	0f 00                	(bad)
    97fd:	fc                   	cld
    97fe:	ba c4 03             	mov    $0x3c4,%dx
    9801:	b8 00 01             	mov    $0x100,%ax
    9804:	ef                   	out    %ax,(%dx)
    9805:	b9 04 00             	mov    $0x4,%cx
    9808:	b4 01                	mov    $0x1,%ah
    980a:	be dc 97             	mov    $0x97dc,%si
    980d:	ac                   	lods   %ds:(%si),%al
    980e:	86 e0                	xchg   %ah,%al
    9810:	ef                   	out    %ax,(%dx)
    9811:	8a e0                	mov    %al,%ah
    9813:	fe c4                	inc    %ah
    9815:	e2 f6                	loop   0x980d
    9817:	b8 00 03             	mov    $0x300,%ax
    981a:	ef                   	out    %ax,(%dx)
    981b:	b9 09 00             	mov    $0x9,%cx
    981e:	ba ce 03             	mov    $0x3ce,%dx
    9821:	32 e4                	xor    %ah,%ah
    9823:	be e0 97             	mov    $0x97e0,%si
    9826:	8a c4                	mov    %ah,%al
    9828:	ee                   	out    %al,(%dx)
    9829:	ac                   	lods   %ds:(%si),%al
    982a:	42                   	inc    %dx
    982b:	ee                   	out    %al,(%dx)
    982c:	4a                   	dec    %dx
    982d:	fe c4                	inc    %ah
    982f:	e2 f5                	loop   0x9826
    9831:	ba da 03             	mov    $0x3da,%dx
    9834:	ec                   	in     (%dx),%al
    9835:	b9 14 00             	mov    $0x14,%cx
    9838:	ba c0 03             	mov    $0x3c0,%dx
    983b:	32 e4                	xor    %ah,%ah
    983d:	be e9 97             	mov    $0x97e9,%si
    9840:	8a c4                	mov    %ah,%al
    9842:	ee                   	out    %al,(%dx)
    9843:	ac                   	lods   %ds:(%si),%al
    9844:	ee                   	out    %al,(%dx)
    9845:	fe c4                	inc    %ah
    9847:	e2 f7                	loop   0x9840
    9849:	c3                   	ret
    984a:	be 00 4c             	mov    $0x4c00,%si
    984d:	e8 c1 dc             	call   0x7511
    9850:	66 c1 e8 10          	shr    $0x10,%eax
    9854:	8b d8                	mov    %ax,%bx
    9856:	e8 91 dc             	call   0x74ea
    9859:	75 05                	jne    0x9860
    985b:	e8 7d dc             	call   0x74db
    985e:	75 04                	jne    0x9864
    9860:	b8 4f 00             	mov    $0x4f,%ax
    9863:	c3                   	ret
    9864:	b8 4f 03             	mov    $0x34f,%ax
    9867:	c3                   	ret
    9868:	e8 7f dc             	call   0x74ea
    986b:	74 53                	je     0x98c0
    986d:	be 00 4c             	mov    $0x4c00,%si
    9870:	80 fb 00             	cmp    $0x0,%bl
    9873:	74 18                	je     0x988d
    9875:	80 fb 01             	cmp    $0x1,%bl
    9878:	75 05                	jne    0x987f
    987a:	e8 bd dc             	call   0x753a
    987d:	eb 1d                	jmp    0x989c
    987f:	80 fb 02             	cmp    $0x2,%bl
    9882:	75 10                	jne    0x9894
    9884:	8b c1                	mov    %cx,%ax
    9886:	e8 70 dc             	call   0x74f9
    9889:	d3 e8                	shr    %cl,%ax
    988b:	8b c8                	mov    %ax,%cx
    988d:	e8 57 d7             	call   0x6fe7
    9890:	74 2e                	je     0x98c0
    9892:	eb 08                	jmp    0x989c
    9894:	80 fb 03             	cmp    $0x3,%bl
    9897:	75 24                	jne    0x98bd
    9899:	e8 14 dc             	call   0x74b0
    989c:	e8 5a dc             	call   0x74f9
    989f:	8b d8                	mov    %ax,%bx
    98a1:	d3 e3                	shl    %cl,%bx
    98a3:	50                   	push   %ax
    98a4:	33 c0                	xor    %ax,%ax
    98a6:	ba 00 03             	mov    $0x300,%dx
    98a9:	3b da                	cmp    %dx,%bx
    98ab:	77 05                	ja     0x98b2
    98ad:	ba ff ff             	mov    $0xffff,%dx
    98b0:	eb 04                	jmp    0x98b6
    98b2:	f7 f3                	div    %bx
    98b4:	8b d0                	mov    %ax,%dx
    98b6:	58                   	pop    %ax
    98b7:	8b c8                	mov    %ax,%cx
    98b9:	b8 4f 00             	mov    $0x4f,%ax
    98bc:	c3                   	ret
    98bd:	32 c0                	xor    %al,%al
    98bf:	c3                   	ret
    98c0:	b0 4f                	mov    $0x4f,%al
    98c2:	b4 03                	mov    $0x3,%ah
    98c4:	c3                   	ret
    98c5:	00 0a                	add    %cl,(%bp,%si)
    98c7:	db 75 07             	(bad) 0x7(%di)
    98ca:	8a ef                	mov    %bh,%ch
    98cc:	e8 20 d8             	call   0x70ef
    98cf:	eb 05                	jmp    0x98d6
    98d1:	e8 05 d8             	call   0x70d9
    98d4:	8a f8                	mov    %al,%bh
    98d6:	b0 4f                	mov    $0x4f,%al
    98d8:	32 e4                	xor    %ah,%ah
    98da:	c3                   	ret
    98db:	00 e8                	add    %ch,%al
    98dd:	0b dc                	or     %sp,%bx
    98df:	74 2c                	je     0x990d
    98e1:	be 00 4c             	mov    $0x4c00,%si
    98e4:	e8 2a dc             	call   0x7511
    98e7:	66 c1 e8 10          	shr    $0x10,%eax
    98eb:	f6 c4 40             	test   $0x40,%ah
    98ee:	75 1d                	jne    0x990d
    98f0:	0a ff                	or     %bh,%bh
    98f2:	75 05                	jne    0x98f9
    98f4:	e8 1e 00             	call   0x9915
    98f7:	eb 0f                	jmp    0x9908
    98f9:	80 ff 01             	cmp    $0x1,%bh
    98fc:	75 14                	jne    0x9912
    98fe:	bb 13 00             	mov    $0x13,%bx
    9901:	e8 65 e5             	call   0x7e69
    9904:	d1 e8                	shr    $1,%ax
    9906:	8b d0                	mov    %ax,%dx
    9908:	b0 4f                	mov    $0x4f,%al
    990a:	32 e4                	xor    %ah,%ah
    990c:	c3                   	ret
    990d:	b0 4f                	mov    $0x4f,%al
    990f:	b4 03                	mov    $0x3,%ah
    9911:	c3                   	ret
    9912:	32 c0                	xor    %al,%al
    9914:	c3                   	ret
    9915:	52                   	push   %dx
    9916:	53                   	push   %bx
    9917:	66 50                	push   %eax
    9919:	81 e2 ff 02          	and    $0x2ff,%dx
    991d:	d1 e2                	shl    $1,%dx
    991f:	8b c2                	mov    %dx,%ax
    9921:	40                   	inc    %ax
    9922:	66 c1 e0 10          	shl    $0x10,%eax
    9926:	8b c2                	mov    %dx,%ax
    9928:	bb 13 00             	mov    $0x13,%bx
    992b:	e8 96 e4             	call   0x7dc4
    992e:	bb 12 00             	mov    $0x12,%bx
    9931:	e8 90 e4             	call   0x7dc4
    9934:	66 58                	pop    %eax
    9936:	5b                   	pop    %bx
    9937:	5a                   	pop    %dx
    9938:	c3                   	ret
    9939:	9c                   	pushf
    993a:	1e                   	push   %ds
    993b:	06                   	push   %es
    993c:	66 50                	push   %eax
    993e:	66 51                	push   %ecx
    9940:	66 52                	push   %edx
    9942:	66 53                	push   %ebx
    9944:	66 55                	push   %ebp
    9946:	66 56                	push   %esi
    9948:	66 57                	push   %edi
    994a:	0e                   	push   %cs
    994b:	1f                   	pop    %ds
    994c:	e8 ae e5             	call   0x7efd
    994f:	e8 8a ff             	call   0x98dc
    9952:	e8 cd e5             	call   0x7f22
    9955:	8b ec                	mov    %sp,%bp
    9957:	89 56 10             	mov    %dx,0x10(%bp)
    995a:	89 46 18             	mov    %ax,0x18(%bp)
    995d:	66 5f                	pop    %edi
    995f:	66 5e                	pop    %esi
    9961:	66 5d                	pop    %ebp
    9963:	66 5b                	pop    %ebx
    9965:	66 5a                	pop    %edx
    9967:	66 59                	pop    %ecx
    9969:	66 58                	pop    %eax
    996b:	07                   	pop    %es
    996c:	1f                   	pop    %ds
    996d:	9d                   	popf
    996e:	cb                   	lret
    996f:	0e                   	push   %cs
    9970:	07                   	pop    %es
    9971:	bf 0e dd             	mov    $0xdd0e,%di
    9974:	2e 8b 0e 0c dd       	mov    %cs:-0x22f4,%cx
    9979:	b8 4f 00             	mov    $0x4f,%ax
    997c:	c3                   	ret
    997d:	00 0a                	add    %cl,(%bp,%si)
    997f:	db 75 06             	(bad) 0x6(%di)
    9982:	b7 04                	mov    $0x4,%bh
    9984:	b3 10                	mov    $0x10,%bl
    9986:	eb 26                	jmp    0x99ae
    9988:	80 fb 01             	cmp    $0x1,%bl
    998b:	75 14                	jne    0x99a1
    998d:	e8 f7 d6             	call   0x7087
    9990:	75 21                	jne    0x99b3
    9992:	53                   	push   %bx
    9993:	b1 01                	mov    $0x1,%cl
    9995:	0a ff                	or     %bh,%bh
    9997:	74 02                	je     0x999b
    9999:	b1 00                	mov    $0x0,%cl
    999b:	e8 11 d6             	call   0x6faf
    999e:	5b                   	pop    %bx
    999f:	eb 0d                	jmp    0x99ae
    99a1:	80 fb 02             	cmp    $0x2,%bl
    99a4:	75 0d                	jne    0x99b3
    99a6:	e8 24 d7             	call   0x70cd
    99a9:	8a f8                	mov    %al,%bh
    99ab:	c0 e7 02             	shl    $0x2,%bh
    99ae:	b0 4f                	mov    $0x4f,%al
    99b0:	32 e4                	xor    %ah,%ah
    99b2:	c3                   	ret
    99b3:	b8 4f 03             	mov    $0x34f,%ax
    99b6:	c3                   	ret
    99b7:	00 80 e3 01          	add    %al,0x1e3(%bx,%si)
    99bb:	0a db                	or     %bl,%bl
    99bd:	75 05                	jne    0x99c4
    99bf:	bb 02 01             	mov    $0x102,%bx
    99c2:	eb 0e                	jmp    0x99d2
    99c4:	e8 c0 d6             	call   0x7087
    99c7:	75 0e                	jne    0x99d7
    99c9:	33 c0                	xor    %ax,%ax
    99cb:	53                   	push   %bx
    99cc:	e8 bd c9             	call   0x638c
    99cf:	5b                   	pop    %bx
    99d0:	74 05                	je     0x99d7
    99d2:	b0 4f                	mov    $0x4f,%al
    99d4:	32 e4                	xor    %ah,%ah
    99d6:	c3                   	ret
    99d7:	b0 4f                	mov    $0x4f,%al
    99d9:	b4 03                	mov    $0x3,%ah
    99db:	c3                   	ret
    99dc:	80 fc 1d             	cmp    $0x1d,%ah
    99df:	72 03                	jb     0x99e4
    99e1:	cd 42                	int    $0x42
    99e3:	c3                   	ret
    99e4:	1e                   	push   %ds
    99e5:	06                   	push   %es
    99e6:	66 50                	push   %eax
    99e8:	66 51                	push   %ecx
    99ea:	66 52                	push   %edx
    99ec:	66 53                	push   %ebx
    99ee:	66 55                	push   %ebp
    99f0:	66 56                	push   %esi
    99f2:	66 57                	push   %edi
    99f4:	0e                   	push   %cs
    99f5:	1f                   	pop    %ds
    99f6:	50                   	push   %ax
    99f7:	0f b6 c4             	movzbw %ah,%ax
    99fa:	d1 e0                	shl    $1,%ax
    99fc:	8b f0                	mov    %ax,%si
    99fe:	58                   	pop    %ax
    99ff:	2e ff 94 26 9a       	call   *%cs:-0x65da(%si)
    9a04:	66 5f                	pop    %edi
    9a06:	66 5e                	pop    %esi
    9a08:	66 5d                	pop    %ebp
    9a0a:	66 5b                	pop    %ebx
    9a0c:	66 5a                	pop    %edx
    9a0e:	66 59                	pop    %ecx
    9a10:	66 58                	pop    %eax
    9a12:	07                   	pop    %es
    9a13:	1f                   	pop    %ds
    9a14:	c3                   	ret
    9a15:	0e                   	push   %cs
    9a16:	1f                   	pop    %ds
    9a17:	50                   	push   %ax
    9a18:	0f b6 c4             	movzbw %ah,%ax
    9a1b:	d1 e0                	shl    $1,%ax
    9a1d:	8b f0                	mov    %ax,%si
    9a1f:	58                   	pop    %ax
    9a20:	2e ff 94 26 9a       	call   *%cs:-0x65da(%si)
    9a25:	c3                   	ret
    9a26:	60                   	pusha
    9a27:	9a 76 d3 8f d3       	lcall  $0xd38f,$0xd376
    9a2c:	ac                   	lods   %ds:(%si),%al
    9a2d:	d3 53 9b             	rclw   %cl,-0x65(%bp,%di)
    9a30:	af                   	scas   %es:(%di),%ax
    9a31:	ca e1 ca             	lret   $0xcae1
    9a34:	54                   	push   %sp
    9a35:	cb                   	lret
    9a36:	d7                   	xlat   %ds:(%bx)
    9a37:	cb                   	lret
    9a38:	65 cd 69             	gs int $0x69
    9a3b:	cd 72                	int    $0x72
    9a3d:	d0 43 d1             	rolb   $1,-0x2f(%bp,%di)
    9a40:	c6                   	(bad)
    9a41:	d1 2d                	shrw   $1,(%di)
    9a43:	d2 c8                	ror    %cl,%al
    9a45:	d3 2a                	shrw   %cl,(%bp,%si)
    9a47:	d4 d3                	aam    $0xd3
    9a49:	d6                   	salc
    9a4a:	6c                   	insb   (%dx),%es:(%di)
    9a4b:	9d                   	popf
    9a4c:	1a db                	sbb    %bl,%bl
    9a4e:	14 9a                	adc    $0x9a,%al
    9a50:	14 9a                	adc    $0x9a,%al
    9a52:	14 9a                	adc    $0x9a,%al
    9a54:	14 9a                	adc    $0x9a,%al
    9a56:	14 9a                	adc    $0x9a,%al
    9a58:	14 9a                	adc    $0x9a,%al
    9a5a:	ea db ed bf 41       	ljmp   $0x41bf,$0xeddb
    9a5f:	c1 2e 8e 1e 06       	shrw   $0x6,0x1e8e
    9a64:	61                   	popa
    9a65:	80 26 87 04 f3       	andb   $0xf3,0x487
    9a6a:	50                   	push   %ax
    9a6b:	8a e0                	mov    %al,%ah
    9a6d:	80 e4 7f             	and    $0x7f,%ah
    9a70:	e8 c4 01             	call   0x9c37
    9a73:	3b d3                	cmp    %bx,%dx
    9a75:	75 02                	jne    0x9a79
    9a77:	58                   	pop    %ax
    9a78:	c3                   	ret
    9a79:	ba cc 03             	mov    $0x3cc,%dx
    9a7c:	ec                   	in     (%dx),%al
    9a7d:	b2 b4                	mov    $0xb4,%dl
    9a7f:	b1 30                	mov    $0x30,%cl
    9a81:	26 f6 47 09 01       	testb  $0x1,%es:0x9(%bx)
    9a86:	74 0c                	je     0x9a94
    9a88:	b2 d4                	mov    $0xd4,%dl
    9a8a:	b1 20                	mov    $0x20,%cl
    9a8c:	a8 01                	test   $0x1,%al
    9a8e:	75 49                	jne    0x9ad9
    9a90:	b5 09                	mov    $0x9,%ch
    9a92:	eb 06                	jmp    0x9a9a
    9a94:	a8 01                	test   $0x1,%al
    9a96:	74 41                	je     0x9ad9
    9a98:	b5 0b                	mov    $0xb,%ch
    9a9a:	53                   	push   %bx
    9a9b:	e8 70 41             	call   0xdc0e
    9a9e:	0a ff                	or     %bh,%bh
    9aa0:	5b                   	pop    %bx
    9aa1:	75 0b                	jne    0x9aae
    9aa3:	80 26 88 04 f0       	andb   $0xf0,0x488
    9aa8:	08 2e 88 04          	or     %ch,0x488
    9aac:	eb 2b                	jmp    0x9ad9
    9aae:	58                   	pop    %ax
    9aaf:	80 0e 87 04 08       	orb    $0x8,0x487
    9ab4:	80 26 10 04 cf       	andb   $0xcf,0x410
    9ab9:	08 0e 10 04          	or     %cl,0x410
    9abd:	89 16 63 04          	mov    %dx,0x463
    9ac1:	c7 06 85 04 08 00    	movw   $0x8,0x485
    9ac7:	c6 06 84 04 18       	movb   $0x18,0x484
    9acc:	c7 06 0c 01 f8 a6    	movw   $0xa6f8,0x10c
    9ad2:	8c 0e 0e 01          	mov    %cs,0x10e
    9ad6:	cd 42                	int    $0x42
    9ad8:	c3                   	ret
    9ad9:	80 26 10 04 cf       	andb   $0xcf,0x410
    9ade:	08 0e 10 04          	or     %cl,0x410
    9ae2:	58                   	pop    %ax
    9ae3:	53                   	push   %bx
    9ae4:	50                   	push   %ax
    9ae5:	0e                   	push   %cs
    9ae6:	1f                   	pop    %ds
    9ae7:	33 c9                	xor    %cx,%cx
    9ae9:	8a c8                	mov    %al,%cl
    9aeb:	e8 99 d5             	call   0x7087
    9aee:	74 06                	je     0x9af6
    9af0:	e8 28 d4             	call   0x6f1b
    9af3:	e8 87 ce             	call   0x697d
    9af6:	b2 08                	mov    $0x8,%dl
    9af8:	be 40 4c             	mov    $0x4c40,%si
    9afb:	e8 ad d7             	call   0x72ab
    9afe:	be 40 4c             	mov    $0x4c40,%si
    9b01:	e8 4c d2             	call   0x6d50
    9b04:	58                   	pop    %ax
    9b05:	5b                   	pop    %bx
    9b06:	0f 84 6e ff          	je     0x9a78
    9b0a:	2e 8e 1e 06 61       	mov    %cs:0x6106,%ds
    9b0f:	0e                   	push   %cs
    9b10:	07                   	pop    %es
    9b11:	e8 19 29             	call   0xc42d
    9b14:	0e                   	push   %cs
    9b15:	1f                   	pop    %ds
    9b16:	53                   	push   %bx
    9b17:	66 bb 40 4c 00 4c    	mov    $0x4c004c40,%ebx
    9b1d:	e8 e8 d9             	call   0x7508
    9b20:	be 00 4c             	mov    $0x4c00,%si
    9b23:	b0 20                	mov    $0x20,%al
    9b25:	e8 81 d2             	call   0x6da9
    9b28:	5b                   	pop    %bx
    9b29:	2e 8e 1e 06 61       	mov    %cs:0x6106,%ds
    9b2e:	0e                   	push   %cs
    9b2f:	07                   	pop    %es
    9b30:	e8 22 2e             	call   0xc955
    9b33:	e8 24 00             	call   0x9b5a
    9b36:	e8 2e 3d             	call   0xd867
    9b39:	e8 d1 01             	call   0x9d0d
    9b3c:	e8 8e 01             	call   0x9ccd
    9b3f:	e8 b4 3e             	call   0xd9f6
    9b42:	0e                   	push   %cs
    9b43:	1f                   	pop    %ds
    9b44:	be 00 4c             	mov    $0x4c00,%si
    9b47:	b0 10                	mov    $0x10,%al
    9b49:	e8 5d d2             	call   0x6da9
    9b4c:	e8 fd 2d             	call   0xc94c
    9b4f:	e8 f5 2d             	call   0xc947
    9b52:	c3                   	ret
    9b53:	8b ec                	mov    %sp,%bp
    9b55:	c6 46 1b 00          	movb   $0x0,0x1b(%bp)
    9b59:	c3                   	ret
    9b5a:	e8 2f 00             	call   0x9b8c
    9b5d:	e8 0a 00             	call   0x9b6a
    9b60:	e8 bd 00             	call   0x9c20
    9b63:	e8 52 00             	call   0x9bb8
    9b66:	e8 62 0a             	call   0xa5cb
    9b69:	c3                   	ret
    9b6a:	53                   	push   %bx
    9b6b:	83 c3 0a             	add    $0xa,%bx
    9b6e:	8b 16 63 04          	mov    0x463,%dx
    9b72:	b9 19 00             	mov    $0x19,%cx
    9b75:	b8 11 30             	mov    $0x3011,%ax
    9b78:	ef                   	out    %ax,(%dx)
    9b79:	32 c0                	xor    %al,%al
    9b7b:	26 8a 27             	mov    %es:(%bx),%ah
    9b7e:	ef                   	out    %ax,(%dx)
    9b7f:	43                   	inc    %bx
    9b80:	fe c0                	inc    %al
    9b82:	e2 f7                	loop   0x9b7b
    9b84:	5b                   	pop    %bx
    9b85:	80 c2 06             	add    $0x6,%dl
    9b88:	32 c0                	xor    %al,%al
    9b8a:	ee                   	out    %al,(%dx)
    9b8b:	c3                   	ret
    9b8c:	53                   	push   %bx
    9b8d:	ba c4 03             	mov    $0x3c4,%dx
    9b90:	83 c3 05             	add    $0x5,%bx
    9b93:	b9 04 00             	mov    $0x4,%cx
    9b96:	b0 01                	mov    $0x1,%al
    9b98:	26 8a 27             	mov    %es:(%bx),%ah
    9b9b:	3c 01                	cmp    $0x1,%al
    9b9d:	75 03                	jne    0x9ba2
    9b9f:	80 cc 20             	or     $0x20,%ah
    9ba2:	ef                   	out    %ax,(%dx)
    9ba3:	43                   	inc    %bx
    9ba4:	fe c0                	inc    %al
    9ba6:	e2 f0                	loop   0x9b98
    9ba8:	5b                   	pop    %bx
    9ba9:	26 8a 47 09          	mov    %es:0x9(%bx),%al
    9bad:	ba c2 03             	mov    $0x3c2,%dx
    9bb0:	ee                   	out    %al,(%dx)
    9bb1:	b2 c4                	mov    $0xc4,%dl
    9bb3:	b8 00 03             	mov    $0x300,%ax
    9bb6:	ef                   	out    %ax,(%dx)
    9bb7:	c3                   	ret
    9bb8:	8b f3                	mov    %bx,%si
    9bba:	83 c6 23             	add    $0x23,%si
    9bbd:	ba da 03             	mov    $0x3da,%dx
    9bc0:	26 f6 47 09 01       	testb  $0x1,%es:0x9(%bx)
    9bc5:	75 02                	jne    0x9bc9
    9bc7:	b2 ba                	mov    $0xba,%dl
    9bc9:	f6 06 89 04 08       	testb  $0x8,0x489
    9bce:	74 1d                	je     0x9bed
    9bd0:	83 c6 10             	add    $0x10,%si
    9bd3:	ec                   	in     (%dx),%al
    9bd4:	b9 04 00             	mov    $0x4,%cx
    9bd7:	b4 10                	mov    $0x10,%ah
    9bd9:	b2 c0                	mov    $0xc0,%dl
    9bdb:	80 fc 11             	cmp    $0x11,%ah
    9bde:	74 07                	je     0x9be7
    9be0:	8a c4                	mov    %ah,%al
    9be2:	ee                   	out    %al,(%dx)
    9be3:	26 8a 04             	mov    %es:(%si),%al
    9be6:	ee                   	out    %al,(%dx)
    9be7:	46                   	inc    %si
    9be8:	fe c4                	inc    %ah
    9bea:	e2 ef                	loop   0x9bdb
    9bec:	c3                   	ret
    9bed:	53                   	push   %bx
    9bee:	ec                   	in     (%dx),%al
    9bef:	8b de                	mov    %si,%bx
    9bf1:	b9 14 00             	mov    $0x14,%cx
    9bf4:	32 e4                	xor    %ah,%ah
    9bf6:	b2 c0                	mov    $0xc0,%dl
    9bf8:	8a c4                	mov    %ah,%al
    9bfa:	ee                   	out    %al,(%dx)
    9bfb:	fe c4                	inc    %ah
    9bfd:	26 8a 07             	mov    %es:(%bx),%al
    9c00:	ee                   	out    %al,(%dx)
    9c01:	43                   	inc    %bx
    9c02:	e2 f4                	loop   0x9bf8
    9c04:	8a c4                	mov    %ah,%al
    9c06:	ee                   	out    %al,(%dx)
    9c07:	32 c0                	xor    %al,%al
    9c09:	ee                   	out    %al,(%dx)
    9c0a:	1e                   	push   %ds
    9c0b:	06                   	push   %es
    9c0c:	e8 4f 2d             	call   0xc95e
    9c0f:	0b ed                	or     %bp,%bp
    9c11:	74 09                	je     0x9c1c
    9c13:	1f                   	pop    %ds
    9c14:	1e                   	push   %ds
    9c15:	b9 10 00             	mov    $0x10,%cx
    9c18:	f3 a4                	rep movsb %ds:(%si),%es:(%di)
    9c1a:	46                   	inc    %si
    9c1b:	a4                   	movsb  %ds:(%si),%es:(%di)
    9c1c:	07                   	pop    %es
    9c1d:	1f                   	pop    %ds
    9c1e:	5b                   	pop    %bx
    9c1f:	c3                   	ret
    9c20:	53                   	push   %bx
    9c21:	83 c3 37             	add    $0x37,%bx
    9c24:	b9 09 00             	mov    $0x9,%cx
    9c27:	32 c0                	xor    %al,%al
    9c29:	ba ce 03             	mov    $0x3ce,%dx
    9c2c:	26 8a 27             	mov    %es:(%bx),%ah
    9c2f:	ef                   	out    %ax,(%dx)
    9c30:	43                   	inc    %bx
    9c31:	fe c0                	inc    %al
    9c33:	e2 f7                	loop   0x9c2c
    9c35:	5b                   	pop    %bx
    9c36:	c3                   	ret
    9c37:	bb 2a 9f             	mov    $0x9f2a,%bx
    9c3a:	0e                   	push   %cs
    9c3b:	07                   	pop    %es
    9c3c:	8b d3                	mov    %bx,%dx
    9c3e:	0a e4                	or     %ah,%ah
    9c40:	7d 01                	jge    0x9c43
    9c42:	c3                   	ret
    9c43:	e8 01 00             	call   0x9c47
    9c46:	c3                   	ret
    9c47:	33 f6                	xor    %si,%si
    9c49:	80 fc 03             	cmp    $0x3,%ah
    9c4c:	7f 3c                	jg     0x9c8a
    9c4e:	4a                   	dec    %dx
    9c4f:	f6 06 89 04 10       	testb  $0x10,0x489
    9c54:	75 20                	jne    0x9c76
    9c56:	a0 88 04             	mov    0x488,%al
    9c59:	24 0f                	and    $0xf,%al
    9c5b:	3c 02                	cmp    $0x2,%al
    9c5d:	7e 24                	jle    0x9c83
    9c5f:	3c 08                	cmp    $0x8,%al
    9c61:	74 20                	je     0x9c83
    9c63:	3c 06                	cmp    $0x6,%al
    9c65:	74 1c                	je     0x9c83
    9c67:	3c 07                	cmp    $0x7,%al
    9c69:	74 18                	je     0x9c83
    9c6b:	b0 40                	mov    $0x40,%al
    9c6d:	f6 e4                	mul    %ah
    9c6f:	03 d8                	add    %ax,%bx
    9c71:	81 c3 00 04          	add    $0x400,%bx
    9c75:	c3                   	ret
    9c76:	b0 40                	mov    $0x40,%al
    9c78:	d0 ec                	shr    $1,%ah
    9c7a:	f6 e4                	mul    %ah
    9c7c:	03 d8                	add    %ax,%bx
    9c7e:	81 c3 80 04          	add    $0x480,%bx
    9c82:	c3                   	ret
    9c83:	b0 40                	mov    $0x40,%al
    9c85:	f6 e4                	mul    %ah
    9c87:	03 d8                	add    %ax,%bx
    9c89:	c3                   	ret
    9c8a:	80 fc 07             	cmp    $0x7,%ah
    9c8d:	75 11                	jne    0x9ca0
    9c8f:	f6 06 89 04 10       	testb  $0x10,0x489
    9c94:	75 05                	jne    0x9c9b
    9c96:	81 c3 00 01          	add    $0x100,%bx
    9c9a:	c3                   	ret
    9c9b:	81 c3 00 05          	add    $0x500,%bx
    9c9f:	c3                   	ret
    9ca0:	bf ac 9c             	mov    $0x9cac,%di
    9ca3:	be cd 9c             	mov    $0x9ccd,%si
    9ca6:	33 c9                	xor    %cx,%cx
    9ca8:	e8 4e 00             	call   0x9cf9
    9cab:	c3                   	ret
    9cac:	04 80                	add    $0x80,%al
    9cae:	00 05                	add    %al,(%di)
    9cb0:	80 00 06             	addb   $0x6,(%bx,%si)
    9cb3:	c0 00 0d             	rolb   $0xd,(%bx,%si)
    9cb6:	80 02 0e             	addb   $0xe,(%bp,%si)
    9cb9:	c0 02 0f             	rolb   $0xf,(%bp,%si)
    9cbc:	80 03 10             	addb   $0x10,(%bp,%di)
    9cbf:	c0 03 11             	rolb   $0x11,(%bp,%di)
    9cc2:	40                   	inc    %ax
    9cc3:	05 12 80             	add    $0x8012,%ax
    9cc6:	05 13 c0             	add    $0xc013,%ax
    9cc9:	05 62 40             	add    $0x4062,%ax
    9ccc:	01 53 8a             	add    %dx,-0x76(%bp,%di)
    9ccf:	1e                   	push   %ds
    9cd0:	49                   	dec    %cx
    9cd1:	04 80                	add    $0x80,%al
    9cd3:	fb                   	sti
    9cd4:	07                   	pop    %es
    9cd5:	7f 10                	jg     0x9ce7
    9cd7:	32 ff                	xor    %bh,%bh
    9cd9:	d1 e3                	shl    $1,%bx
    9cdb:	2e 8b 87 e9 9c       	mov    %cs:-0x6317(%bx),%ax
    9ce0:	a2 65 04             	mov    %al,0x465
    9ce3:	88 26 66 04          	mov    %ah,0x466
    9ce7:	5b                   	pop    %bx
    9ce8:	c3                   	ret
    9ce9:	2c 30                	sub    $0x30,%al
    9ceb:	28 30                	sub    %dh,(%bx,%si)
    9ced:	2d 30 29             	sub    $0x2930,%ax
    9cf0:	30 2a                	xor    %ch,(%bp,%si)
    9cf2:	30 2e 30 1e          	xor    %ch,0x1e30
    9cf6:	3f                   	aas
    9cf7:	29 30                	sub    %si,(%bx,%si)
    9cf9:	2e 38 25             	cmp    %ah,%cs:(%di)
    9cfc:	75 07                	jne    0x9d05
    9cfe:	2e 03 5d 01          	add    %cs:0x1(%di),%bx
    9d02:	33 f6                	xor    %si,%si
    9d04:	c3                   	ret
    9d05:	83 c7 03             	add    $0x3,%di
    9d08:	3b fe                	cmp    %si,%di
    9d0a:	75 ed                	jne    0x9cf9
    9d0c:	c3                   	ret
    9d0d:	1e                   	push   %ds
    9d0e:	06                   	push   %es
    9d0f:	2e 8e 1e 06 61       	mov    %cs:0x6106,%ds
    9d14:	f6 06 87 04 80       	testb  $0x80,0x487
    9d19:	75 49                	jne    0x9d64
    9d1b:	83 3e 4c 04 00       	cmpw   $0x0,0x44c
    9d20:	74 42                	je     0x9d64
    9d22:	a0 49 04             	mov    0x449,%al
    9d25:	b9 00 20             	mov    $0x2000,%cx
    9d28:	2e 8b 3e 0c 61       	mov    %cs:0x610c,%di
    9d2d:	26 f6 47 33 01       	testb  $0x1,%es:0x33(%bx)
    9d32:	75 0e                	jne    0x9d42
    9d34:	26 f6 47 09 01       	testb  $0x1,%es:0x9(%bx)
    9d39:	75 1b                	jne    0x9d56
    9d3b:	2e 8b 3e 0a 61       	mov    %cs:0x610a,%di
    9d40:	eb 14                	jmp    0x9d56
    9d42:	3c 06                	cmp    $0x6,%al
    9d44:	7e 0b                	jle    0x9d51
    9d46:	2e 8b 3e 08 61       	mov    %cs:0x6108,%di
    9d4b:	26 8a 67 37          	mov    %es:0x37(%bx),%ah
    9d4f:	b5 40                	mov    $0x40,%ch
    9d51:	66 33 c0             	xor    %eax,%eax
    9d54:	eb 06                	jmp    0x9d5c
    9d56:	66 b8 20 07 20 07    	mov    $0x7200720,%eax
    9d5c:	8e c7                	mov    %di,%es
    9d5e:	66 33 ff             	xor    %edi,%edi
    9d61:	f3 66 ab             	rep stos %eax,%es:(%di)
    9d64:	80 26 87 04 7f       	andb   $0x7f,0x487
    9d69:	07                   	pop    %es
    9d6a:	1f                   	pop    %ds
    9d6b:	c3                   	ret
    9d6c:	2e 8e 1e 06 61       	mov    %cs:0x6106,%ds
    9d71:	80 fb 10             	cmp    $0x10,%bl
    9d74:	75 03                	jne    0x9d79
    9d76:	e9 7a 01             	jmp    0x9ef3
    9d79:	80 fb 20             	cmp    $0x20,%bl
    9d7c:	75 03                	jne    0x9d81
    9d7e:	e9 9b 01             	jmp    0x9f1c
    9d81:	80 fb 32             	cmp    $0x32,%bl
    9d84:	75 1f                	jne    0x9da5
    9d86:	ba cc 03             	mov    $0x3cc,%dx
    9d89:	0a c0                	or     %al,%al
    9d8b:	75 09                	jne    0x9d96
    9d8d:	ec                   	in     (%dx),%al
    9d8e:	0c 02                	or     $0x2,%al
    9d90:	b2 c2                	mov    $0xc2,%dl
    9d92:	ee                   	out    %al,(%dx)
    9d93:	e9 f3 00             	jmp    0x9e89
    9d96:	fe c8                	dec    %al
    9d98:	0f 85 f3 00          	jne    0x9e8f
    9d9c:	ec                   	in     (%dx),%al
    9d9d:	24 fd                	and    $0xfd,%al
    9d9f:	b2 c2                	mov    $0xc2,%dl
    9da1:	ee                   	out    %al,(%dx)
    9da2:	e9 e4 00             	jmp    0x9e89
    9da5:	80 fb 35             	cmp    $0x35,%bl
    9da8:	75 28                	jne    0x9dd2
    9daa:	3c 80                	cmp    $0x80,%al
    9dac:	75 08                	jne    0x9db6
    9dae:	80 0e 89 04 40       	orb    $0x40,0x489
    9db3:	e9 d3 00             	jmp    0x9e89
    9db6:	f6 06 89 04 40       	testb  $0x40,0x489
    9dbb:	0f 84 d0 00          	je     0x9e8f
    9dbf:	0a c0                	or     %al,%al
    9dc1:	0f 84 ca 00          	je     0x9e8f
    9dc5:	fe c8                	dec    %al
    9dc7:	75 06                	jne    0x9dcf
    9dc9:	e8 98 07             	call   0xa564
    9dcc:	e9 ba 00             	jmp    0x9e89
    9dcf:	e9 bd 00             	jmp    0x9e8f
    9dd2:	80 fb 30             	cmp    $0x30,%bl
    9dd5:	74 03                	je     0x9dda
    9dd7:	e9 96 00             	jmp    0x9e70
    9dda:	50                   	push   %ax
    9ddb:	e8 30 3e             	call   0xdc0e
    9dde:	8a ef                	mov    %bh,%ch
    9de0:	ba cc 03             	mov    $0x3cc,%dx
    9de3:	ec                   	in     (%dx),%al
    9de4:	8a c8                	mov    %al,%cl
    9de6:	58                   	pop    %ax
    9de7:	0a c0                	or     %al,%al
    9de9:	75 30                	jne    0x9e1b
    9deb:	b7 08                	mov    $0x8,%bh
    9ded:	f6 c1 01             	test   $0x1,%cl
    9df0:	75 12                	jne    0x9e04
    9df2:	0a ed                	or     %ch,%ch
    9df4:	75 0b                	jne    0x9e01
    9df6:	a0 10 04             	mov    0x410,%al
    9df9:	24 30                	and    $0x30,%al
    9dfb:	3c 30                	cmp    $0x30,%al
    9dfd:	75 10                	jne    0x9e0f
    9dff:	b7 02                	mov    $0x2,%bh
    9e01:	e9 8b 00             	jmp    0x9e8f
    9e04:	a0 10 04             	mov    0x410,%al
    9e07:	24 30                	and    $0x30,%al
    9e09:	3c 30                	cmp    $0x30,%al
    9e0b:	75 02                	jne    0x9e0f
    9e0d:	b7 02                	mov    $0x2,%bh
    9e0f:	80 26 89 04 6f       	andb   $0x6f,0x489
    9e14:	80 0e 89 04 80       	orb    $0x80,0x489
    9e19:	eb 36                	jmp    0x9e51
    9e1b:	3c 01                	cmp    $0x1,%al
    9e1d:	75 41                	jne    0x9e60
    9e1f:	80 26 89 04 6f       	andb   $0x6f,0x489
    9e24:	b7 09                	mov    $0x9,%bh
    9e26:	f6 c1 01             	test   $0x1,%cl
    9e29:	75 15                	jne    0x9e40
    9e2b:	b7 0b                	mov    $0xb,%bh
    9e2d:	a0 10 04             	mov    0x410,%al
    9e30:	24 30                	and    $0x30,%al
    9e32:	3c 30                	cmp    $0x30,%al
    9e34:	74 1b                	je     0x9e51
    9e36:	b7 09                	mov    $0x9,%bh
    9e38:	0a ed                	or     %ch,%ch
    9e3a:	74 15                	je     0x9e51
    9e3c:	b7 05                	mov    $0x5,%bh
    9e3e:	eb 11                	jmp    0x9e51
    9e40:	a0 10 04             	mov    0x410,%al
    9e43:	24 30                	and    $0x30,%al
    9e45:	3c 30                	cmp    $0x30,%al
    9e47:	75 08                	jne    0x9e51
    9e49:	b7 0b                	mov    $0xb,%bh
    9e4b:	0a ed                	or     %ch,%ch
    9e4d:	74 02                	je     0x9e51
    9e4f:	b7 03                	mov    $0x3,%bh
    9e51:	8a 1e 88 04          	mov    0x488,%bl
    9e55:	80 e3 f0             	and    $0xf0,%bl
    9e58:	0a df                	or     %bh,%bl
    9e5a:	88 1e 88 04          	mov    %bl,0x488
    9e5e:	eb 29                	jmp    0x9e89
    9e60:	3c 02                	cmp    $0x2,%al
    9e62:	75 2b                	jne    0x9e8f
    9e64:	80 26 89 04 6f       	andb   $0x6f,0x489
    9e69:	80 0e 89 04 10       	orb    $0x10,0x489
    9e6e:	eb b4                	jmp    0x9e24
    9e70:	80 fb 31             	cmp    $0x31,%bl
    9e73:	75 1b                	jne    0x9e90
    9e75:	0a c0                	or     %al,%al
    9e77:	74 0b                	je     0x9e84
    9e79:	3c 01                	cmp    $0x1,%al
    9e7b:	75 0c                	jne    0x9e89
    9e7d:	80 0e 89 04 08       	orb    $0x8,0x489
    9e82:	eb 05                	jmp    0x9e89
    9e84:	80 26 89 04 f7       	andb   $0xf7,0x489
    9e89:	8b ec                	mov    %sp,%bp
    9e8b:	c6 46 1a 12          	movb   $0x12,0x1a(%bp)
    9e8f:	c3                   	ret
    9e90:	80 fb 33             	cmp    $0x33,%bl
    9e93:	75 16                	jne    0x9eab
    9e95:	3c 00                	cmp    $0x0,%al
    9e97:	74 0b                	je     0x9ea4
    9e99:	3c 01                	cmp    $0x1,%al
    9e9b:	75 ec                	jne    0x9e89
    9e9d:	80 26 89 04 fd       	andb   $0xfd,0x489
    9ea2:	eb e5                	jmp    0x9e89
    9ea4:	80 0e 89 04 02       	orb    $0x2,0x489
    9ea9:	eb de                	jmp    0x9e89
    9eab:	80 fb 34             	cmp    $0x34,%bl
    9eae:	75 17                	jne    0x9ec7
    9eb0:	3c 00                	cmp    $0x0,%al
    9eb2:	75 07                	jne    0x9ebb
    9eb4:	80 26 87 04 fe       	andb   $0xfe,0x487
    9eb9:	eb ce                	jmp    0x9e89
    9ebb:	3c 01                	cmp    $0x1,%al
    9ebd:	75 07                	jne    0x9ec6
    9ebf:	80 0e 87 04 01       	orb    $0x1,0x487
    9ec4:	eb c3                	jmp    0x9e89
    9ec6:	c3                   	ret
    9ec7:	80 fb 36             	cmp    $0x36,%bl
    9eca:	75 26                	jne    0x9ef2
    9ecc:	bb 20 ff             	mov    $0xff20,%bx
    9ecf:	3c 01                	cmp    $0x1,%al
    9ed1:	74 09                	je     0x9edc
    9ed3:	bb 00 df             	mov    $0xdf00,%bx
    9ed6:	3c 00                	cmp    $0x0,%al
    9ed8:	74 02                	je     0x9edc
    9eda:	eb ad                	jmp    0x9e89
    9edc:	e8 02 00             	call   0x9ee1
    9edf:	eb a8                	jmp    0x9e89
    9ee1:	9c                   	pushf
    9ee2:	fa                   	cli
    9ee3:	ba c4 03             	mov    $0x3c4,%dx
    9ee6:	b0 01                	mov    $0x1,%al
    9ee8:	ee                   	out    %al,(%dx)
    9ee9:	42                   	inc    %dx
    9eea:	ec                   	in     (%dx),%al
    9eeb:	22 c7                	and    %bh,%al
    9eed:	0a c3                	or     %bl,%al
    9eef:	ee                   	out    %al,(%dx)
    9ef0:	9d                   	popf
    9ef1:	c3                   	ret
    9ef2:	c3                   	ret
    9ef3:	b3 03                	mov    $0x3,%bl
    9ef5:	b7 00                	mov    $0x0,%bh
    9ef7:	ba cc 03             	mov    $0x3cc,%dx
    9efa:	ec                   	in     (%dx),%al
    9efb:	a8 01                	test   $0x1,%al
    9efd:	75 02                	jne    0x9f01
    9eff:	b7 01                	mov    $0x1,%bh
    9f01:	a0 88 04             	mov    0x488,%al
    9f04:	8a e0                	mov    %al,%ah
    9f06:	b1 04                	mov    $0x4,%cl
    9f08:	d2 ec                	shr    %cl,%ah
    9f0a:	25 0f 0f             	and    $0xf0f,%ax
    9f0d:	8b c8                	mov    %ax,%cx
    9f0f:	8b ec                	mov    %sp,%bp
    9f11:	89 5e 0e             	mov    %bx,0xe(%bp)
    9f14:	89 4e 16             	mov    %cx,0x16(%bp)
    9f17:	c6 46 1a 12          	movb   $0x12,0x1a(%bp)
    9f1b:	c3                   	ret
    9f1c:	9c                   	pushf
    9f1d:	fa                   	cli
    9f1e:	c7 06 14 00 da c4    	movw   $0xc4da,0x14
    9f24:	8c 0e 16 00          	mov    %cs,0x16
    9f28:	9d                   	popf
    9f29:	c3                   	ret
    9f2a:	28 18                	sub    %bl,(%bx,%si)
    9f2c:	08 00                	or     %al,(%bx,%si)
    9f2e:	08 09                	or     %cl,(%bx,%di)
    9f30:	03 00                	add    (%bx,%si),%ax
    9f32:	02 63 2d             	add    0x2d(%bp,%di),%ah
    9f35:	27                   	daa
    9f36:	28 90 2b a0          	sub    %dl,-0x5fd5(%bx,%si)
    9f3a:	bf 1f 00             	mov    $0x1f,%di
    9f3d:	c7 06 07 00 00 00    	movw   $0x0,0x7
    9f43:	00 9c 8e 8f          	add    %bl,-0x7072(%si)
    9f47:	14 1f                	adc    $0x1f,%al
    9f49:	96                   	xchg   %ax,%si
    9f4a:	b9 a3 ff             	mov    $0xffa3,%cx
    9f4d:	00 01                	add    %al,(%bx,%di)
    9f4f:	02 03                	add    (%bp,%di),%al
    9f51:	04 05                	add    $0x5,%al
    9f53:	06                   	push   %es
    9f54:	07                   	pop    %es
    9f55:	10 11                	adc    %dl,(%bx,%di)
    9f57:	12 13                	adc    (%bp,%di),%dl
    9f59:	14 15                	adc    $0x15,%al
    9f5b:	16                   	push   %ss
    9f5c:	17                   	pop    %ss
    9f5d:	08 00                	or     %al,(%bx,%si)
    9f5f:	0f 00 00             	sldt   (%bx,%si)
    9f62:	00 00                	add    %al,(%bx,%si)
    9f64:	00 00                	add    %al,(%bx,%si)
    9f66:	10 0e 00 ff          	adc    %cl,-0x100
    9f6a:	50                   	push   %ax
    9f6b:	18 08                	sbb    %cl,(%bx,%si)
    9f6d:	00 10                	add    %dl,(%bx,%si)
    9f6f:	01 03                	add    %ax,(%bp,%di)
    9f71:	00 02                	add    %al,(%bp,%si)
    9f73:	63 5f 4f             	arpl   %bx,0x4f(%bx)
    9f76:	50                   	push   %ax
    9f77:	82 55 81 bf          	adcb   $0xbf,-0x7f(%di)
    9f7b:	1f                   	pop    %ds
    9f7c:	00 c7                	add    %al,%bh
    9f7e:	06                   	push   %es
    9f7f:	07                   	pop    %es
    9f80:	00 00                	add    %al,(%bx,%si)
    9f82:	00 00                	add    %al,(%bx,%si)
    9f84:	9c                   	pushf
    9f85:	8e 8f 28 1f          	mov    0x1f28(%bx),%cs
    9f89:	96                   	xchg   %ax,%si
    9f8a:	b9 a3 ff             	mov    $0xffa3,%cx
    9f8d:	00 01                	add    %al,(%bx,%di)
    9f8f:	02 03                	add    (%bp,%di),%al
    9f91:	04 05                	add    $0x5,%al
    9f93:	06                   	push   %es
    9f94:	07                   	pop    %es
    9f95:	10 11                	adc    %dl,(%bx,%di)
    9f97:	12 13                	adc    (%bp,%di),%dl
    9f99:	14 15                	adc    $0x15,%al
    9f9b:	16                   	push   %ss
    9f9c:	17                   	pop    %ss
    9f9d:	08 00                	or     %al,(%bx,%si)
    9f9f:	0f 00 00             	sldt   (%bx,%si)
    9fa2:	00 00                	add    %al,(%bx,%si)
    9fa4:	00 00                	add    %al,(%bx,%si)
    9fa6:	10 0e 00 ff          	adc    %cl,-0x100
    9faa:	28 18                	sub    %bl,(%bx,%si)
    9fac:	08 00                	or     %al,(%bx,%si)
    9fae:	40                   	inc    %ax
    9faf:	09 03                	or     %ax,(%bp,%di)
    9fb1:	00 02                	add    %al,(%bp,%si)
    9fb3:	63 2d                	arpl   %bp,(%di)
    9fb5:	27                   	daa
    9fb6:	28 90 2b 80          	sub    %dl,-0x7fd5(%bx,%si)
    9fba:	bf 1f 00             	mov    $0x1f,%di
    9fbd:	c1 00 00             	rolw   $0x0,(%bx,%si)
    9fc0:	00 00                	add    %al,(%bx,%si)
    9fc2:	00 00                	add    %al,(%bx,%si)
    9fc4:	9c                   	pushf
    9fc5:	8e 8f 14 00          	mov    0x14(%bx),%cs
    9fc9:	96                   	xchg   %ax,%si
    9fca:	b9 a2 ff             	mov    $0xffa2,%cx
    9fcd:	00 13                	add    %dl,(%bp,%di)
    9fcf:	15 17 02             	adc    $0x217,%ax
    9fd2:	04 06                	add    $0x6,%al
    9fd4:	07                   	pop    %es
    9fd5:	10 11                	adc    %dl,(%bx,%di)
    9fd7:	12 13                	adc    (%bp,%di),%dl
    9fd9:	14 15                	adc    $0x15,%al
    9fdb:	16                   	push   %ss
    9fdc:	17                   	pop    %ss
    9fdd:	01 00                	add    %ax,(%bx,%si)
    9fdf:	03 00                	add    (%bx,%si),%ax
    9fe1:	00 00                	add    %al,(%bx,%si)
    9fe3:	00 00                	add    %al,(%bx,%si)
    9fe5:	00 30                	add    %dh,(%bx,%si)
    9fe7:	0f 00                	(bad)
    9fe9:	ff 50 18             	call   *0x18(%bx,%si)
    9fec:	08 00                	or     %al,(%bx,%si)
    9fee:	40                   	inc    %ax
    9fef:	01 01                	add    %ax,(%bx,%di)
    9ff1:	00 06 63 5f          	add    %al,0x5f63
    9ff5:	4f                   	dec    %di
    9ff6:	50                   	push   %ax
    9ff7:	82 54 80 bf          	adcb   $0xbf,-0x80(%si)
    9ffb:	1f                   	pop    %ds
    9ffc:	00 c1                	add    %al,%cl
	...
