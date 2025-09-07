/*
 * DIO_interface.h
 *
 *  Created on: Dec 7, 2024
 *      Author: engineering
 */
#include"../../lib/Types.h"
#ifndef MCAL_DIO_DIO_INTERFACE_H_
#define MCAL_DIO_DIO_INTERFACE_H_

#define DIO_PIN_OUTPUT  1
#define DIO_PIN_INPUT   0

#define DIO_PIN_HIGH  1
#define DIO_PIN_LOW   0

#define DIO_PORTA     0
#define DIO_PORTB     1
#define DIO_PORTC     2
#define DIO_PORTD     3


#define DIO_PIN0      0
#define DIO_PIN1      1
#define DIO_PIN2      2
#define DIO_PIN3      3
#define DIO_PIN4      4
#define DIO_PIN5      5
#define DIO_PIN6      6
#define DIO_PIN7      7

void DIO_vsetpindirection (u8 portname , u8 pinnumbe, u8 direction);
void DIO_vwritepin(u8 portname,u8 pinnumber,u8 outputvalue);
unsigned char DIO_u8readpin(u8 portname,u8 pinnumber);
void DIO_vtogglepin(u8 portname,u8 pinnumber);
void DIO_vset_port_direction(u8 portname,u8 direction);
void DIO_vwrite_port(u8 portname,u8 portvalue);
unsigned char DIO_u8read_port(u8 portname);
void write_low_nibble(unsigned char portname,unsigned char value);
void write_high_nibble(unsigned char portname,unsigned char value);
void DIO_vconnectpullup(char portname ,char pinnumber, char connect_pullup);



#endif /* MCAL_DIO_DIO_INTERFACE_H_ */
