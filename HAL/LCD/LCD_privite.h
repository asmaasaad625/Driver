/*
 * LCD_privit.h
 *
 *  Created on: Dec 18, 2024
 *      Author: engineering
 */

#ifndef HAL_LCD_LCD_PRIVITE_H_
#define HAL_LCD_LCD_PRIVITE_H_
#include"LCD_config.h"


#define CLR_SCREEN 0x01
#define CURSOR_ON_DISPLAN_ON 0x0c
#define RETURN_HOME 0x02
#define ENTRY_MODE 0x06


#if defined four_bits_mode
#define EN 0
#define RS 1
#define RW 2
#define FOUR_BITS 0x28
#elif defined eight_bits_mode
#define EN 0
#define RS 1
#define RW 2
#define EIGHT_BITS 0x38
#endif

#endif /* HAL_LCD_LCD_PRIVITE_H_ */
