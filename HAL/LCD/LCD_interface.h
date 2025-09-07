/*
 * LcD_interface.h
 *
 *  Created on: Dec 18, 2024
 *      Author: engineering
 */

#ifndef HAL_LCD_LCD_INTERFACE_H_
#define HAL_LCD_LCD_INTERFACE_H_



void lcd_init(void);
void send_falling_edge(void);
void lcd_send_cmd(char cmd);
void lcd_send_string(char *ptr);
void lcd_send_data(char data);
void lcd_clear_screan(void);
void lcd_move_cersor(char row,char colomn);



#endif /* HAL_LCD_LCD_INTERFACE_H_ */
