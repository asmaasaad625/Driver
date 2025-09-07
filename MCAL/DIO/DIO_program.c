/*
 * DIO_program.c
 *
 *  Created on: Dec 7, 2024
 *      Author: engineering
 */



#include  "../../lib/Types.h"
#include  "../../lib/BIT_MATH.h"

#include  "DIO_config.h"
#include  "DIO_interface.h"
#include  "DIO_privite.h"

void DIO_vsetpindirection (u8 portname , u8 pinnumber, u8 direction)
{
switch(portname)
	{


		case 'A':
		if(direction==1)
		{
			SET_BIT(DDRA,pinnumber);
		}
		else
		{
			CLR_BIT(DDRA,pinnumber);
		}
		break;
		case 'B':
		if(direction==1)
		{
			SET_BIT(DDRB,pinnumber);
		}
		else
		{
			CLR_BIT(DDRB,pinnumber);
		}
		break;
		case 'C':
		if(direction==1)
		{
			SET_BIT(DDRC,pinnumber);
		}
		else
		{
			CLR_BIT(DDRC,pinnumber);
		}
		break;
		case 'D':
		if(direction==1)
		{
			SET_BIT(DDRD,pinnumber);
		}
		else
		{
			CLR_BIT(DDRD,pinnumber);
		}
		break;
		default:
		break;
	}
}
void DIO_vwritepin(u8 portname,u8 pinnumber,u8 outputvalue)
{
	switch(portname)
	{
		case 'A' :

		if(outputvalue==1)
		{
			SET_BIT(PORTA,pinnumber);
		}
		else
		{
			CLR_BIT(PORTA,pinnumber);
		}
		break ;
		case 'B':

		if(outputvalue==1)
		{
			SET_BIT(PORTB,pinnumber);
		}
		else
		{
			CLR_BIT(PORTB,pinnumber);
		}
		break ;
		case 'C' :

		if(outputvalue==1)
		{
			SET_BIT(PORTC,pinnumber);
		}
		else
		{
			CLR_BIT(PORTC,pinnumber);
		}
		break ;
		case 'D':

		if(outputvalue==1)
		{
			SET_BIT(PORTD,pinnumber);
		}
		else
		{
			CLR_BIT(PORTD,pinnumber);
		}
		break ;
		default: break ;
	}
}
unsigned char DIO_u8readpin(u8 portname,u8 pinnumber)
{
	unsigned char return_value=0;
		switch(portname)
		{
			case 'A' :
			return_value=GET_BIT(PINA,pinnumber);
			break;

			case 'B' :
			return_value=GET_BIT(PINB,pinnumber);
			break;

			case 'C' :
			return_value=GET_BIT(PINC,pinnumber);
			break;

			case 'D' :
			return_value=GET_BIT(PIND,pinnumber);
			break;
			default:
			break;
		}
		return return_value ;
	}

   void DIO_vtogglepin(u8 portname,u8 pinnumber)
	{
		switch(portname)
		{
			case 'A':
				TOG_BIT(PORTA,pinnumber);
			break;
			case 'B':
			TOG_BIT(PORTB,pinnumber);
			break;
			case 'C':
			TOG_BIT(PORTC,pinnumber);
			break;
			case 'D':
			TOG_BIT(PORTD,pinnumber);
			break;
			default: break;
		}
	}
   void DIO_vset_port_direction(u8 portname,u8 direction)
   {
   	switch(portname)
   	{
   		case 'A' :
   		DDRA=direction;
   		break ;
   		case 'B':
   		DDRB=direction;
   		break ;
   		case 'C' :
   		DDRC=direction;
   		break ;
   		case 'D':
   		DDRD=direction;
   		break ;
   		default:
   		break ;
   	}

   }
   void DIO_vwrite_port(u8 portname,u8 portvalue)
   {
   	switch(portname)
   	{
   		case 'A' :
   		PORTA=portvalue;
   		break ;
   		case 'B':
   		PORTB=portvalue;
   		break ;
   		case 'C' :
   		PORTC=portvalue;
   		break ;
   		case 'D':
   		PORTD=portvalue;
   		break ;
   		default:
   		 break ;
   	}
   }
   unsigned char DIO_u8read_port(u8 portname)
   {
   	unsigned char return_val=0;
   	switch(portname)
   	{
   		case 'A' :
   		return_val=PINA;
   		break ;
   		case 'B':
   		return_val=PINB;
   		break ;
   		case 'C' :
   		return_val=PINC;
   		break ;
   		case 'D':
   		return_val=PIND;
   		break ;
   		default:
   		break ;
   	}
   	return return_val;
   }
   void write_low_nibble(unsigned char portname,unsigned char value)
   {
   	value&=0x0f;
   	switch(portname)
   	{
   		case 'A':
   		PORTA&=0xf0;
   		PORTA|=value;
   		break;
   		case 'B':
   		PORTB&=0xf0;
   		PORTB|=value;
   		break;
   		case 'C':
   		PORTC&=0xf0;
   		PORTC|=value;
   		break;
   		case 'D':
   		PORTD&=0xf0;
   		PORTD|=value;
   		break;
   	}
   }

   void write_high_nibble(unsigned char portname,unsigned char value)
   {
   	value<<=4;
   	switch(portname)
   	{
   		case 'A':
   		PORTA&=0x0f;
   		PORTA|=value;
   		break;
   		case 'B':
   		PORTB&=0x0f;
   		PORTB|=value;
   		break;
   		case 'C':
   		PORTC&=0x0f;
   		PORTC|=value;
   		break;
   		case 'D':
   		PORTD&=0x0f;
   		PORTD|=value;
   		break;
   	}
   }
   void DIO_vconnectpullup(char portname ,char pinnumber, char connect_pullup)
   {
   	switch(portname)
   	{
   		case 'A':
   		if(connect_pullup==1)
   		{
   			SET_BIT(PORTA,pinnumber);
   		}
   		else
   		{
   			CLR_BIT(PORTA,pinnumber);
   		}
   		break;
   		case 'B':
   		if(connect_pullup==1)
   		{
   			SET_BIT(PORTB,pinnumber);
   		}
   		else
   		{
   			CLR_BIT(PORTB,pinnumber);
   		}
   		break;
   		case 'C':
   		if(connect_pullup==1)
   		{
   			SET_BIT(PORTC,pinnumber);

   		}
   		else
   		{
   			CLR_BIT(PORTC,pinnumber);
   		}
   		break;
   		case 'D':
   		if(connect_pullup==1)
   		{
   			SET_BIT(PORTD,pinnumber);

   		}
   		else
   		{
   			CLR_BIT(PORTD,pinnumber);
   		}
   		break;

   	}
   }


