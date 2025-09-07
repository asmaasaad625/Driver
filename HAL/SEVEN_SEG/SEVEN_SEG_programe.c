/*
 * SEVEN_SEG_programe.c
 *
 *  Created on: Dec 13, 2024
 *      Author: engineering
 */
#include"SEVEN_SEG_interface.h"

#include"../../MCAL/DIO/DIO_interface.h"
#include "../../lib/Types.h"
#include "../../lib/BIT_MATH.h"
#include<avr/io.h>
#include<util/delay.h>

void seven_seg_init(u8 port_name)
{
	 DIO_vset_port_direction( port_name,0xff);
}

void seven_seg_write( u8  port_name , u8 value )
{
	unsigned char arr[]={ 0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};

	 DIO_vwrite_port(port_name,arr[value]);
}

unsigned char perform_operation(unsigned char operand1,unsigned char operand2,unsigned char opcode )
{
	unsigned char result=0;
	switch(opcode)
			{
			  case 0:
				  result=operand1+operand2;
				  break;

			  case 1:
			  	 result=operand1-operand2;
			  	 break;
			  case 2:
			 	 result=operand1*operand2;
			 	 break;
			  case 3:
				  if(operand2!=0)
				  {
			 	 result=operand1/operand2;
				  }
				  else
				  {
					result=0;
				  }
			 		  	 break;
			  default:
				  result=0;
				  break;
			}
	return result;
}
void display_two_digit(unsigned char portname1,unsigned char portname2, unsigned char num)
{
	unsigned char first_num=num%10;
	unsigned char second_num=num/10;
	 seven_seg_write(portname1,first_num);
	 _delay_ms(500);
	 seven_seg_write(portname2,second_num);
	 _delay_ms(500);


}
