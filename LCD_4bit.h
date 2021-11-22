#ifndef LCD_4BIT_H
#define	LCD_4BIT_H

#define RS      PD0
#define RW      PD1
#define EN      PD2

#define LCD_Half_Data       PORTC
#define LCD_Half_Dir        DDRC
#define LCD_control         _PD
#define LCD_control_dir     _PD

#define LCD_data            _PC       
#define LCD_data_dir        _PC
///////////////////////////////////////
#define _4BIT_MODE 0x28
#define ReturnHome 0x02
#define D_ON_C_OFF 0x0C
#define Inc_Cur    0x06

#define row0        0
#define row1        1
#define column5     5

void init_LCD_4bit();
void LCD_DATA_4bit(char data);
void LCD_CMD_4bit(char cmd);
void LCD_EN_4bit();
void LCD_CLEAR_4bit();
void LCD_Write_Str_4bit(char*);
void LCD_Write_Num_4bit(int num);
void LCD_goto_4bit(int row, int column);




#endif	/* LCD_4BIT_H */

