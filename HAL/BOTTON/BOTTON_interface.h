/*
 * BOTTON_interface.h
 *
 *  Created on: Dec 13, 2024
 *      Author: engineering
 */

#ifndef HAL_BOTTON_BOTTON_INTERFACE_H_
#define HAL_BOTTON_BOTTON_INTERFACE_H_

#include"../../lib/Types.h"


void BOTTON_vinit (u8 port_name, u8 pin_num);
unsigned char BOTTON_u8read(u8 port_name, u8 pin_num);
void BOTTON_DSW1_vinit (u8 port_name);
#endif /* HAL_BOTTON_BOTTON_INTERFACE_H_ */
