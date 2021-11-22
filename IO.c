#include <avr/io.h>
#include "config.h"

int isPressed(int portNum, int pinNum) {
    switch (portNum) {
        case _PA:
            return ((PINA & (1 << pinNum)) ? 1 : 0);
            break;
        case _PB:
            return ((PINB & (1 << pinNum)) ? 1 : 0);
            break;
        case _PC:
            return ((PINC & (1 << pinNum)) ? 1 : 0);
            break;
        case _PD:
            return ((PIND & (1 << pinNum)) ? 1 : 0);
            break;
        default:
            return 0;
    }
}

int isPress_B(int pinNum) {
    if (PINB & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}

void init_Buzzer() {
    DDRA |= (1 << Buzzer);

}

void set_Buzzer(int state) {
    if (state) {
        PORTA |= (1 << Buzzer);
    } else {
        PORTA &= ~(1 << Buzzer);
    }
}

void init_Relay() {
    DDRA |= (1 << Relay); // Pin output

}

void set_Relay(int state) {
    if (state) {
        PORTA |= (1 << Relay); // Relay ON
    } else {
        PORTA &= ~(1 << Relay);

    }
}

void init_Leds() {
    DDRC |= (1 << Led0) | (1 << Led1);
    DDRD |= (1 << Led2);


}

void set_Led(int LedNumber, int state) {

    if (state) {

        switch (LedNumber) {
            case Led0:
                PORTC |= (1 << Led0);
                break;
            case Led1:
                PORTC |= (1 << Led1);
                break;
            case Led2:
                PORTD |= (1 << Led2);
                break;
        }

    } else {
        switch (LedNumber) {
            case Led0:
                PORTC &= ~(1 << Led0);
                break;
            case Led1:
                PORTC &= ~(1 << Led1);
                break;
            case Led2:
                PORTD &= ~(1 << Led2);
                break;
        }
    }


}

void init_Buttons() {
    DDRB &= ~(1 << Btn0);
    DDRD &= ~(1 << Btn1);
    DDRD &= ~(1 << Btn2);
}

void setPortDir(int portNum, int state) {
    switch (portNum) {
        case _PA:
            DDRA = state ? 0xFF : 0x00;
            break;
        case _PB:
            DDRB = state ? 0xFF : 0x00;
            break;
        case _PC:
            DDRC = state ? 0xFF : 0x00;
            break;
        case _PD:
            DDRD = state ? 0xFF : 0x00;
            break;
        default:
            DDRA = 0;
            DDRB = 0;
            DDRC = 0;
            DDRD = 0;
    }
}

void setPortData(int portNum, int dataOut) {
    switch (portNum) {
        case _PA:
            PORTA = dataOut;
            break;
        case _PB:
            PORTB = dataOut;
            break;
        case _PC:
            PORTC = dataOut;
            break;
        case _PD:
            PORTD = dataOut;
            break;
        default:
            DDRA = 0;
            DDRB = 0;
            DDRC = 0;
            DDRD = 0;
    }
}

void togglePortData(int portNum) {
    switch (portNum) {
        case _PA:
            PORTA ^= 0xFF;
            break;
        case _PB:
            PORTB ^= 0xFF;
            break;
        case _PC:
            PORTC ^= 0xFF;
            break;
        case _PD:
            PORTD ^= 0xFF;
            break;
        default:
            DDRA = 0;
            DDRB = 0;
            DDRC = 0;
            DDRD = 0;
    }
}
// Pin Level

void setPinDir(int portNum, int pinNum, int state) {
    if (state) {
        switch (portNum) {
            case _PA:
                DDRA |= (1 << pinNum);
                break;
            case _PB:
                DDRB |= (1 << pinNum);
                break;
            case _PC:
                DDRC |= (1 << pinNum);
                break;
            case _PD:
                DDRD |= (1 << pinNum);
                break;
        }
    } else {
        switch (portNum) {
            case _PA:
                DDRA &= ~(1 << pinNum);
                break;
            case _PB:
                DDRB &= ~(1 << pinNum);
                break;
            case _PC:
                DDRC &= ~(1 << pinNum);
                break;
            case _PD:
                DDRD &= ~(1 << pinNum);
                break;
        }
    }
}

void setPinData(int portNum, int pinNum, int data) {
    if (data) {
        switch (portNum) {
            case _PA:
                PORTA |= (1 << pinNum);
                break;
            case _PB:
                PORTB |= (1 << pinNum);
                break;
            case _PC:
                PORTC |= (1 << pinNum);
                break;
            case _PD:
                PORTD |= (1 << pinNum);
                break;
        }
    } else {
        switch (portNum) {
            case _PA:
                PORTA &= ~(1 << pinNum);
                break;
            case _PB:
                PORTB &= ~(1 << pinNum);
                break;
            case _PC:
                PORTC &= ~(1 << pinNum);
                break;
            case _PD:
                PORTD &= ~(1 << pinNum);
                break;
        }
    }
}

void togglePinData(int portNum, int pinNum) {

    switch (portNum) {
        case _PA:
            PORTA ^= (1 << pinNum);
            break;
        case _PB:
            PORTB ^= (1 << pinNum);
            break;
        case _PC:
            PORTC ^= (1 << pinNum);
            break;
        case _PD:
            PORTD ^= (1 << pinNum);
            break;
    }


}