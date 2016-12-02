#ifndef _MAIN_H_
	#define _MAIN_H_

	#include <at89x52.h>
	typedef unsigned char 	uint_8;
	typedef signed char 	int_8;
	typedef unsigned int 	uint_16;
	typedef signed int 		int_16;
	typedef unsigned long 	uint_32;
	typedef signed long 	int_32;

	__sbit __at 0x90 LED01;
	__sbit __at 0x97 LEDFlash;

//	#ifndef MAXTIME0
//		#define MAXTIME0 (uint_16)2000
//		#define MAXTIME1 MAXTIME0 * 2
//	#endif

	void timer0_init(void);
	void timer0_update(void);

#endif
