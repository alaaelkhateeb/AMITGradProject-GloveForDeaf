#include "config.h"
#include "ADC.h"
#include <avr/io.h>

void init_ADC(int ref, int prescaler) {
    ADMUX |= (ref << REFS0);
    ADCSRA |= (prescaler << ADPS0);
    ADCSRA |= (1 << ADEN);
}

void ADC_Channel_Select(int ch) {
    ADMUX &= ~(0x1F);
    ADMUX |= (ch);
}

void ADC_StartConv() {
    ADCSRA |= (1 << ADSC);
}

int ADC_read() {
    while (!(ADCSRA & (1 << ADIF)));
    int data = ADCL;
    data |= (ADCH << 8) | data;
    return data;
}

void ADC_Init_INTERRUPT() {
    ADCSRA |= (1 << ADIE);
}