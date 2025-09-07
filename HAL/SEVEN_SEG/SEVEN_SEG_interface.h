/*
 * SEVEN_SEG_interface.h
 *
 *  Created on: Dec 13, 2024
 *      Author: engineering
 */

#ifndef HAL_SEVEN_SEG_SEVEN_SEG_INTERFACE_H_
#define HAL_SEVEN_SEG_SEVEN_SEG_INTERFACE_H_

#include"../../lib/Types.h"

void seven_seg_init(u8 port_name);
void seven_seg_write(u8  port_name,u8 value);
unsigned char perform_operation(unsigned char operand1,unsigned char operand2,unsigned char opcode );
void display_two_digit(unsigned char portname1,unsigned char portname2, unsigned char num);

#endif /* HAL_SEVEN_SEG_SEVEN_SEG_INTERFACE_H_ */
