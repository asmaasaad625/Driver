/*
 * LED_interface.h
 *
 *  Created on: Dec 13, 2024
 *      Author: engineering
 */

#ifndef HAL_LED_LED_INTERFACE_H_
#define HAL_LED_LED_INTERFACE_H_
#include"../../lib/Types.h"


void LED_vinit(u8 port_name,u8 pin_num);
void LED_vturn_on(u8 port_name,u8 pin_num);
void LED_vturn_off(u8 port_name,u8 pin_num);
void LED_vtog(u8 port_name,u8 pin_num);
#endif /* HAL_LED_LED_INTERFACE_H_ */
