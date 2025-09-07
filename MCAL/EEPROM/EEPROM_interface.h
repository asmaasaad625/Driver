/*
 * EEPROM_interface.h
 *
 *  Created on: Jan 31, 2025
 *      Author: engineering
 */

#ifndef MCAL_EEPROM_EEPROM_INTERFACE_H_
#define MCAL_EEPROM_EEPROM_INTERFACE_H_

void EEPROM_write(unsigned char address,unsigned short data);
unsigned char EEPROM_read(unsigned short address);


#endif /* MCAL_EEPROM_EEPROM_INTERFACE_H_ */
