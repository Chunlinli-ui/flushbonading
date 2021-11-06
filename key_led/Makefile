key_led_c.bin : crt0.S  key_led_c.c
	arm-linux-gcc -g -c -o crt0.o crt0.S
	arm-linux-gcc -g -c -o key_led_c.o key_led_c.c
	arm-linux-ld -Ttext 0x00000000 -g crt0.o key_led_c.o -o key_led_c_elf
	arm-linux-objcopy -O binary -S key_led_c_elf key_led_c.bin
	arm-linux-objdump -D -m arm key_led_c_elf > key_led_c.dis
	
clean:
	rm -f key_led_c.dis key_led_c.bin key_led_c *.o
