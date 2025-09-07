/*
 * BCD_SEG_programe.c

 *
 *  Created on: Jan 26, 2025
 *      Author: engineering
 */
#include"BCD_SEG_interface.h"
#include "../../MCAL/DIO/DIO_interface.h"
#include "../../lib/BIT_MATH.h"


void BCD_seven_seg_init(unsigned char portname)
{
	DIO_vsetpindirection( portname,0,1);
	DIO_vsetpindirection( portname,1,1);
	DIO_vsetpindirection( portname,2,1);
	DIO_vsetpindirection( portname,3,1);
}
void BCD_seven_seg_write(unsigned char portname,unsigned char value)
{

	write_low_nibble(portname,value);
}

