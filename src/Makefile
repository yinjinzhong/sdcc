OPT := sdcc


all:led.bin

# led.bin:led.hex  
# objcopy -I ihex -O binary led.hex led.bin  

# led.hex:main.ihx  
#	packihx main.ihx > led.hex  

led.bin:main.ihx
	makebin main.ihx led.bin  

main.ihx:main.rel delay.rel  
	$(OPT) main.rel delay.rel

main.rel:main.c delay.h  
	$(OPT) -c main.c  

delay.rel:delay.c  
	$(OPT) -c delay.c  

.PHONY:clean
clean:
	-rm led.bin main.asm main.ihx main.lk main.lst\
	    main.map main.mem main.rel main.rst main.sym
	-rm delay.asm delay.lst delay.rel delay.rst delay.sym  
