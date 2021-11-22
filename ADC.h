#ifndef ADC_H
#define	ADC_H

#define AREF             0
#define AVCC             1
#define INTERNAL_REF      3


#define ADC0    0    
#define ADC1    1
#define ADC2    2
#define ADC3    3
#define ADC4    4
#define ADC5    5
#define ADC6    6
#define ADC7    7



#define PRE_64   6
#define PRE_128  7


void init_ADC(int ref, int prescaler);
void ADC_Channel_Select(int ch);
void ADC_Init_INTERRUPT();
void ADC_StartConv();
int ADC_read();


#endif	/* ADC_H */

