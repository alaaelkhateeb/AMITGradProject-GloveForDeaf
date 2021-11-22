#include <avr/io.h>
#include "config.h"
#include "ADC.h"
#include "IO.h"
#include "LCD_4bit.h"
#include "PrintResult.h"

void Print_Result(int* Result) {

    char str1[] = "I LOVE U";
    char str2[] = "YOU";
    char str3[] = "GOOD JOB";
    char str4[] = "THIS IS TERRIBLE";
    char str5[] = "WISH U A HAPPY";
    char str51[] = "LIFE";
    char str6[] = "I'M WATCHING U";
    char str7[] = "I REALLY LOVE U";
    char str8[] = "CAN'T FIND WORD";
    if ((Result[0] == 4) && (Result[1] == 4) &&(Result[2] == 2)&&(Result[3] == 2) &&(Result[4] == 4)) {
        LCD_Write_Str_4bit(str1);
    } else if ((Result[0] == 2) && (Result[1] == 4) &&(Result[2] == 2)&&(Result[3] == 2) &&(Result[4] == 2)) {
        LCD_Write_Str_4bit(str2);

    } else if ((Result[0] == 4) && (Result[1] == 2) &&(Result[2] == 2)&&(Result[3] == 2) &&(Result[4] == 2)) {
        LCD_Write_Str_4bit(str3);

    } else if ((Result[0] == 2) && (Result[1] == 4) &&(Result[2] == 2)&&(Result[3] == 2) &&(Result[4] == 4)) {
        LCD_Write_Str_4bit(str4);

    } else if ((Result[0] == 4) && (Result[1] == 4) &&(Result[2] == 4)&&(Result[3] == 4) &&(Result[4] == 4)) {
        LCD_Write_Str_4bit(str5);
        LCD_goto_4bit(row1, column5);
        LCD_Write_Str_4bit(str51);

    } else if ((Result[0] == 2) && (Result[1] == 3) &&(Result[2] == 3)&&(Result[3] == 2) &&(Result[4] == 2)) {
        LCD_Write_Str_4bit(str6);

    } else if ((Result[0] == 4) && (Result[1] == 3) &&(Result[2] == 4)&&(Result[3] == 2) &&(Result[4] == 4)) {
        LCD_Write_Str_4bit(str7);
    } else {
        LCD_Write_Str_4bit(str8);

    }
}

void Print_Result_Optmized(int* Result) {
    char str1[] = "I LOVE U";
    char str2[] = "YOU";
    char str3[] = "GOOD JOB";
    char str4[] = "THIS IS TERRIBLE";
    char str5[] = "WISH U A HAPPY";
    char str51[] = "LIFE";
    char str6[] = "I'M WATCHING U";
    char str7[] = "I REALLY LOVE U";
       if ((Result[0] == 4)) {
        if ((Result[1] == 4) &&(Result[2] == 2)&&(Result[3] == 2) &&(Result[4] == 4)) {
            LCD_Write_Str_4bit(str1);
        }
        if ((Result[1] == 2) &&(Result[2] == 2)&&(Result[3] == 2) &&(Result[4] == 2)) {
            LCD_Write_Str_4bit(str3);

        }
        if ((Result[1] == 4) &&(Result[2] == 4)&&(Result[3] == 4) &&(Result[4] == 4)) {
            LCD_Write_Str_4bit(str5);
            LCD_goto_4bit(row1, column5);
            LCD_Write_Str_4bit(str51);
        }
        if ((Result[1] == 3) &&(Result[2] == 4)&&(Result[3] == 2) &&(Result[4] == 4)) {
            LCD_Write_Str_4bit(str7);
        }
    } else if ((Result[0] == 2)) {
        if ((Result[1] == 3) &&(Result[2] == 3)&&(Result[3] == 2) &&(Result[4] == 2)) {
            LCD_Write_Str_4bit(str6);

        }
        if ((Result[1] == 4) &&(Result[2] == 2)&&(Result[3] == 2) &&(Result[4] == 2)) {
            LCD_Write_Str_4bit(str2);

        }
        if ((Result[1] == 4) &&(Result[2] == 2)&&(Result[3] == 2) &&(Result[4] == 4)) {
            LCD_Write_Str_4bit(str4);
        } 
        
    }}