/*
 * LED_programe.c

 *
 *  Created on: Dec 13, 2024
 *      Author: engineering
 */
#include"LED_interface.h"
#include"../../lib/Types.h"
#include"../../lib/BIT_MATH.h"
#include"../../MCAL/DIO/DIO_interface.h"


void LED_vinit(u8 port_name,u8 pin_num)
{
	DIO_vsetpindirection ( port_name ,  pin_num, 1);
}
void LED_vturn_on(u8 port_name,u8 pin_num)
{
	 DIO_vwritepin( port_name ,  pin_num, 1);
}
void LED_vturn_off(u8 port_name,u8 pin_num)
{
	 DIO_vwritepin(port_name ,  pin_num, 0);
}
void LED_vturn_tog(u8 port_name,u8 pin_num)
{
	DIO_vtogglepin( port_name , pin_num );
}
