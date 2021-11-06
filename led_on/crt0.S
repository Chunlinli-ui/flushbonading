.text
.global _start
_start:
		ldr		r0, =0x53000000 //watchDag寄存器地址
		mov		r1, #0x0

		str		r1,[r0] //写入0,禁止WatchDog，否则CPU会不断重启

		ldr		sp, = 1024*4

		bl      main //调用C语言main函数
halt_loop:
		b		halt_loop
