/*
 * LCD_programe.c
 *
 *  Created on: Dec 18, 2024
 *      Author: engineering
 */
#include"LCD_interface.h"
#include"LCD_privite.h"
#include"LCD_config.h"
#include"../../MCAL/DIO/DIO_interface.h"
#include <util/delay.h>



void lcd_init(void)
{

		#if defined eight_bits_mode

	DIO_vsetpindirection('A',0,1);
	DIO_vsetpindirection('A',1,1);
	DIO_vsetpindirection('A',2,1);
	DIO_vsetpindirection('A',3,1);
	DIO_vsetpindirectionr('A',4,1);
	DIO_vsetpindirection('A',5,1);
	DIO_vsetpindirection('A',6,1);
	DIO_vsetpindirection('A',7,1);
	DIO_vsetpindirection('B',RW,1);
	DIO_vsetpindirection('B',EN,1);
	DIO_vsetpindirection('B',RW,1);
	DIO_vsetpindirection('B',RS,1);
	DIO_vwritepin('B',RW,0);

	 lcd_send_cmd(EIGHT_BITS);
		_delay_ms(1);
		lcd_send_cmd(CURSOR_ON_DISPLAN_ON);
		_delay_ms(1);
		lcd_send_cmd(CLR_SCREEN);
		_delay_ms(10);
		lcd_send_cmd(ENTRY_MODE);
		_delay_ms(1);

#elif defined four_bits_mode
		DIO_vsetpindirection('D',4,1);
		DIO_vsetpindirection('D',5,1);
		DIO_vsetpindirection('D',6,1);
		DIO_vsetpindirection('D',7,1);
		DIO_vsetpindirection('D',EN,1);
		DIO_vsetpindirection('D',RW,1);
		DIO_vsetpindirection('D',RS,1);
		DIO_vwritepin('D',RW,0);
		lcd_send_cmd(RETURN_HOME);
        _delay_ms(10);
        lcd_send_cmd(FOUR_BITS);
        _delay_ms(1);
        lcd_send_cmd(CURSOR_ON_DISPLAN_ON);
       _delay_ms(1);
       lcd_send_cmd(CLR_SCREEN);
       _delay_ms(10);
       lcd_send_cmd(ENTRY_MODE);
       _delay_ms(1);
#endif

}
 void send_falling_edge(void)
{
	DIO_vwritepin('D',0,1);
	_delay_ms(2);
	DIO_vwritepin('D',0,0);
	_delay_ms(2);
}

 void lcd_send_cmd(char cmd)
 {
 	#if defined eight_bits_mode
 	DIO_write_port('D',cmd);
 	DIO_write('D',RS,0);
 	send_falling_edge();

 	#elif defined four_bits_mode
 	write_high_nibble('D',cmd>>4);
 	DIO_vwritepin('D',RS,0);
 	send_falling_edge();
 	write_high_nibble('D',cmd);
 	DIO_vwritepin('D',RS,0);
 	send_falling_edge();
 	#endif
 	_delay_ms(1);
 }

 void  lcd_send_data(char data)
 {
 	#if defined eight_bits_mode
 	DIO_write_port('D',data);
 	DIO_vwritepin('D',RS,1);
 	send_falling_edge();

 	#elif defined four_bits_mode
 	write_high_nibble('D',data>>4);
 	DIO_vwritepin('D',RS,1);
 	send_falling_edge();
 	write_high_nibble('D',data);
 	DIO_vwritepin('D',RS,1);
 	send_falling_edge();
 	#endif
 	_delay_ms(1);
 }


 void lcd_send_string(char *ptr)
 {
 	while((*ptr)!='\0')
 	{
 		lcd_send_data(*ptr);
 		ptr++;
 	}
 }
 void lcd_clear_screan(void)
 {
	 lcd_send_cmd(CLR_SCREEN);
 	_delay_ms(10);
 }
 void  lcd_move_cersor(char row,char coloumn)
 {
 	char data ;
 	if(row>2||row<1||coloumn>16||coloumn<1)
 	{
 		data=0x80;
 	}
 	else if(row==1)
 	{
 		data=0x80+coloumn-1 ;
 	}
 	else if (row==2)
 	{
 		data=0xc0+coloumn-1;
 	}
 	lcd_send_cmd(data);
 	_delay_ms(1);
 }


