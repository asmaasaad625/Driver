/*
 * main.c
 *
 *  Created on: Dec 13, 2024
 *      Author: engineering
 */
/*
#include <util/delay.h>
#include "HAL/SEVEN_SEG/SEVEN_SEG_interface.h"
int main(void)
{

	seven_seg_init('C');
	unsigned char counter=0;
	while(1)
	{
		for(counter=0;counter<=9;counter++)
		{
			seven_seg_write('C',counter);
			_delay_ms(1000);
		}
	}
}
*/

/*
#include"HAL/LCD/LCD_interface.h"


int main(void)
{
	lcd_init();
	lcd_send_string("Amira Atef");
	lcd_move_cersor(2,1);


    lcd_send_cmd(0x40);
	lcd_send_data(0x00);
	lcd_send_data(0x00);
	lcd_send_data(0x04);
	lcd_send_data(0x0A);
	lcd_send_data(0x11);
	lcd_send_data(0x11);
	lcd_send_data(0x0A);


	 lcd_send_cmd(0x48);
	lcd_send_data(0x00);
	lcd_send_data(0x00);
	lcd_send_data(0x1F);
	lcd_send_data(0x11);
	lcd_send_data(0x1F);
	lcd_send_data(0x00);

	lcd_send_cmd(0x50);
	lcd_send_data(0x00);
	lcd_send_data(0x00);
	lcd_send_data(0x0F);
	lcd_send_data(0x11);
	lcd_send_data(0x0F);
    lcd_send_data(0x00);
    lcd_send_data(0x00);
    lcd_send_data(0x00);

    lcd_send_cmd(0x58);
    lcd_send_data(0x00);
    lcd_send_data(0x00);
    lcd_send_data(0x11);
    lcd_send_data(0x1F);
    lcd_send_data(0x11);
    lcd_send_data(0x11);
    lcd_send_data(0x00);
    lcd_send_data(0x00);


    lcd_send_cmd(0x58);
    lcd_send_data(0x60);
    lcd_send_data(0x00);
    lcd_send_data(0x00);
    lcd_send_data(0x1F);
    lcd_send_data(0x11);
    lcd_send_data(0x1F);
    lcd_send_data(0x00);
    lcd_send_data(0x00);


}
*/
//task1
/*#include"HAL/LED/LED_interface.h"
#include <util/delay.h>


int main(void)
{
	LED_vinit('D',0);
	LED_vinit('D',1);
	LED_vinit('D',2);
	LED_vinit('D',3);
	LED_vinit('D',4);
	LED_vinit('D',5);
	LED_vinit('D',6);
	LED_vinit('D',7);

	signed char i;
	while(1)
	{
		for(i=0;i<=7;i++)
		{
			LED_vturn_on('D',i);
			_delay_ms(1000);
		}
		for (i=7;i>=0;i--)
			  {
			     LED_vturn_off('D',i);
				  _delay_ms(1000);
			  }

	}

}
*/
/*
#include"HAL/LED/LED_interface.h"
#include <util/delay.h>

int main(void)
{
	LED_vinit('D',0);
	LED_vinit('D',1);
	LED_vinit('D',2);
	LED_vinit('D',3);
	LED_vinit('D',4);
    LED_vinit('D',5);
    LED_vinit('D',6);
	LED_vinit('D',7);
	signed char i,j;
		while(1)
		{

			for(i=0;i<=7;i++)
			 {
				LED_vturn_off('D',i);
				_delay_ms(125);
						}
			for(i=0;i<=3;i++)
			{
				LED_vturn_on('D',i);
				_delay_ms(400);
			}
			for(i=4,j=0;i<=4,j<=3;i++,j++)
			 {
				LED_vturn_on('D',i);
				LED_vturn_off('D',j);
				_delay_ms(300);
						}


}
}
*/
//ISA Task
/*
#include"HAL/BOTTON/BOTTON_interface.h"
#include"HAL/SEVEN_SEG/SEVEN_SEG_interface.h"
#include <util/delay.h>
#include <avr/io.h>
int main(void)
{
	unsigned char operand1=0,operand2=0,opcode=0,result=0;
	unsigned char switches;

	BOTTON_DSW1_vinit('A');
	seven_seg_init('C');
	seven_seg_init('D');
			while(1)
			{
                switches=PINA;
		       opcode=switches& 0x03;
		       operand1=(switches>>2)& 0x07;
		       operand2=(switches>>5)& 0x07;

		result=perform_operation(operand1,operand2,opcode);
		display_two_digit('D','C',result);
		_delay_ms(500);

			}
}
*/
/*
#include"HAL/Kypad/Kypad_interface.h"
#include"HAL/LCD/LCD_interface.h"
#include<util/delay.h>
int main(void){

	 keypad_vInit();
	 lcd_init();
	 char x;
	while(1)
	{

		x= keypad_write();
		if(x!=0xff)
		{
			lcd_send_data(x);
		}
		else
		{

		}
		_delay_ms(250);
	}
}
*/
/*
#include"HAL/Kypad/Kypad_interface.h"
#include"HAL/LCD/LCD_interface.h"
#include"HAL/SEVEN_SEG/SEVEN_SEG_interface.h"
#include"MCAL/DIO/DIO_interface.h"
#include<util/delay.h>
void display_2segment(volatile unsigned char num1,volatile unsigned char num2)
{
	seven_seg_write('C',num1);
	_delay_ms(500);
	seven_seg_write('B',num2);
		_delay_ms(500);

}

int main(void)
{
		 lcd_init();
		 keypad_vInit();
		 seven_seg_init('C');
		 seven_seg_init('B');
		 unsigned char x,num1, num2;
		 lcd_clear_screan();
		 while(1)
		 	{

		 		x= keypad_write();
		 		if(x!=0xff)
		 		{
		 			lcd_send_data(x);
		 			num1=num2;
		 			num2=x-'0';

		 			display_2segment( num1, num2);
		 			_delay_ms(20);

		 		}
		 		_delay_ms(200);

		 	}
		 }
*/

/*#include <util/delay.h>
#include "HAL/Kypad/Kypad_interface.h"
#include"HAL/LCD/LCD_interface.h"
#include "MCAL/EEPROM/EEPROM_interface.h"
#define  EEPROM_STATUS_LOCATION 0x20
#define  EEPROM_PASSWORD_LOCATION1 0x21
#define  EEPROM_PASSWORD_LOCATION2 0x22
#define  EEPROM_PASSWORD_LOCATION3 0x23
#define  EEPROM_PASSWORD_LOCATION4 0x24
#define  EEPROM_USER_NAME_LOCATION 0x31
#define MAX_TRIES 3

char arr[4];
char user_name[4];
int main(void)
{
	char value=0xff;
	char flag=0,i;
	char tries=MAX_TRIES;
	char stored_usename[4]={'A','B','C','D'};
	keypad_vInit();
	lcd_init();
	if (EEPROM_read(EEPROM_STATUS_LOCATION)==0xff)
	{
		lcd_send_string("set pass:");
		for (i=0;i<=3;i++)
		{
			do
			{
				value= keypad_write();
			}while (value==0xff);
			 lcd_send_data(value);
			 _delay_ms(500);
			lcd_move_cersor(1,10+i);
			 lcd_send_data('*');
			 _delay_ms(500);

			 EEPROM_write(EEPROM_PASSWORD_LOCATION1+i,value);
		}
		EEPROM_write(EEPROM_STATUS_LOCATION,0x00);
	}
    while(flag==0)
    {
		arr[0]=arr[1]=arr[2]=arr[3]=0xff;
		lcd_clear_screan();
		lcd_send_string("check pass:");
		for (i=0;i<=3;i++)
		{
			do
			{
				arr[i]=keypad_write();
			}while (arr[i]==0xff);
			lcd_send_data(arr[i]);
			_delay_ms(500);
			lcd_move_cersor(1,12+i);
			 lcd_send_data('*');
			 _delay_ms(500);

		}

	if(EEPROM_read(EEPROM_PASSWORD_LOCATION1)==arr[0] &&  EEPROM_read(EEPROM_PASSWORD_LOCATION2)==arr[1] && EEPROM_read(EEPROM_PASSWORD_LOCATION3)==arr[2] && EEPROM_read(EEPROM_PASSWORD_LOCATION4)==arr[3])
	{
		lcd_clear_screan();
		lcd_send_string("Enter user name");
		for(i=0;i<=3;i++)
				{
					do{

					user_name[i]=keypad_write();
					}while(user_name[i]==0xff);
					_delay_ms(500);
					lcd_move_cersor(2,12+i);
					 lcd_send_data('*');
					 _delay_ms(500);
				}

				if(user_name[0]== stored_usename[0] &&  user_name[1]== stored_usename[1] && user_name[2]== stored_usename[2] &&  user_name[3]== stored_usename[3])
							{
							lcd_clear_screan();
						lcd_send_string("safe opened");

							}
						else
						{
							lcd_clear_screan();
							lcd_send_string("wrong user name");
							lcd_move_cersor(2,1);
							lcd_send_string("safe closed");
						}
		flag=1;
	}
	else
	{
		tries=tries-1;
		if (tries>0)
		{
			lcd_clear_screan();
			lcd_send_string("wrong password");
			_delay_ms(1000);
			lcd_clear_screan();
			lcd_send_string("tries end.");
			lcd_send_data(tries+48);
			_delay_ms(1000);

		}
		else
		{
			lcd_clear_screan();
			lcd_send_string("wrong password");
			lcd_move_cersor(2,1);
			lcd_send_string("safe closed");
			flag=1;
		}
	}
	}
}
*/
//Ex Keypad
/*
#include <util/delay.h>
#include "HAL/Kypad/Kypad_interface.h"
#include"HAL/LCD/LCD_interface.h"

int main(void)
{
	 lcd_init();
	 keypad_vInit();
	char x;
	while(1)
	{
		x=keypad_write();
		if(x!=0xff)
		{
			 lcd_send_data(x);
		}
		else
		{

		}
		_delay_ms(250);
	}
}
*/
/*
// ADC_lm35
#include"HAL/LCD/LCD_interface.h"
#include"MCAL/ADC/ADC_interface.h"
#include"HAL/LED/LED_interface.h"
#include<util/delay.h>
#include<avr/interrupt.h>
#include"lib/BIT_MATH.h"
char read_val;
unsigned short temperatur;
int main(void)
{
	ADC_init();

	sei();
    SET_BIT(ADCSRA,ADIE);

	SET_BIT(ADCSRA,ADIE);
	lcd_init();
	LED_vinit('C',0);
	LED_vinit('C',1);
	 lcd_send_string("temperature=");
	 while(1)
	    {
		  temperatur=(ADC_Read()*0.25);


		  if(temperatur<10)
		  {
		  lcd_move_cersor(1,13);
		  lcd_send_data(0x30);
		  lcd_send_data((temperatur%10)+48);
		  lcd_send_data(0xDF);
		  lcd_send_data(0x43);
		  }
		  else if( temperatur<100)
		  {
		  lcd_move_cersor(1,13);
		  lcd_send_data((temperatur/10)+48);
		  lcd_send_data((temperatur%10)+48);
		  lcd_send_data(0XDF);
		  lcd_send_data(0X43);
		  }
		  else
		  {

		  }

		      }
		  }


        ISR(ADC_vect)
        {
        	if(temperatur<20)
        	{
        	 lcd_move_cersor(2,7);
        	 lcd_send_string("cold");
        	 LED_vturn_on('C',0);
        	 LED_vturn_off('C',1);
        	 _delay_ms(100);
        	}

        	else
        	{
        		lcd_move_cersor(2,7);
        		lcd_send_string("Normal");
        	    LED_vturn_on('C',1);
        	    LED_vturn_off('C',0);
        		_delay_ms(100);
        	}

        }
        */

#include"HAL/LED/LED_interface.h"
#include<util/delay.h>

#include"lib/BIT_MATH.h"

int main(void)
{
	LED_vinit('C',0);


while(1)
		{


	         LED_vturn_on('C',0);

				_delay_ms(125);
						}

}












