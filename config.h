
#ifndef CONFIG_H
#define	CONFIG_H


#define F_CPU 16000000UL


#define _PA   0
#define _PB   1
#define _PC   2
#define _PD   3

#define Relay  PA2
#define Buzzer PA3

#define Led0   PC2
#define Led1   PC7
#define Led2   PD3

#define Btn0   PB0
#define Btn1   PD6
#define Btn2   PD2

#define ON  1
#define OFF 0
#define OUT 1
#define IN  0

    
    
    
    
#include <util/delay.h>
#include "IO.h"


#endif	/* CONFIG_H */

