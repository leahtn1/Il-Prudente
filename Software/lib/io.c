#include "io.h"


void init_pins(){
    DDRC = (1<<sw0)|(1<<sw1)|(1<<sw2);  //port c is an output
    DDRD = 11111111;
}