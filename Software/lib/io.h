#ifndef IO_H
#define IO_H


#include <avr/io.h>

//Mosfet gates on port C
#define sw0 0
#define sw1 1
#define sw2 2

//Segments on port D
#define A 0
#define B 1
#define C 2
#define D 3
#define E 4
#define F 5
#define G 6
#define DP 7

void init_pins();
void init_timer();
void display_num(uint32 x);

#endif
