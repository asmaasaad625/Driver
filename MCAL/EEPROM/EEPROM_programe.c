/*
 * EEPROM_programe.c

 *
 *  Created on: Jan 31, 2025
 *      Author: engineering
 */
#include<avr/io.h>
#include"../../Lib/BIT_MATH.h"
void EEPROM_write(unsigned char address ,unsigned short data)
{
	EEARL=(char)address;
	EEARH=(char)(address>>8);
	EEDR=data ;
	SET_BIT(EECR,EEMWE);
	SET_BIT(EECR,EEWE);
	while(GET_BIT(EECR,EEWE)==1);
	}


unsigned char EEPROM_read(unsigned short address)
{
	EEARL=(char)address;
	EEARH=(char)(address>>8);
	SET_BIT(EECR,EERE);
	return EEDR;
}


