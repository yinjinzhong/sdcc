C	= sdcc  

all:main.bin  

# led.bin:led.hex  
# objcopy -I ihex -O binary led.hex led.bin  

# led.hex:main.ihx  
#	packihx main.ihx > led.hex  

main.bin:main.ihx
	makebin main.ihx led.bin  

main.ihx:main.rel delay.rel  
	$(CC) main.rel delay.rel  
	 
main.rel:main.c delay.h  
	$(CC) -c main.c  
	
delay.rel:delay.c  
	$(CC) -c delay.c  

.PHONY:clean
clean:
	-rm led.bin main.asm main.ihx main.lk main.lst\
	    main.map main.mem main.rel main.rst main.sym
	-rm delay.asm delay.lst delay.rel delay.rst delay.sym  
