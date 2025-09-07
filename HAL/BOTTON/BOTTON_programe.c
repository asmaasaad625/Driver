/*
 * BOTTON_programe.c
 *
 *  Created on: Dec 13, 2024
 *      Author: engineering
 */
#include"BOTTON_interface.h"
#include"../../MCAL/DIO/DIO_interface.h"

void BOTTON_vinit (u8 port_name, u8 pin_num)
{
	DIO_vsetpindirection ( port_name ,  pin_num, 0);
}
void BOTTON_DSW1_vinit (u8 port_name)
{
	 DIO_vset_port_direction( port_name,0x00);
}
unsigned char BOTTON_u8read(u8 port_name, u8 pin_num)
{
	u8 value;
	value=DIO_u8readpin( port_name, pin_num);
	return value;
}


