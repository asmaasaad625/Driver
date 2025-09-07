/*
 * BCD_SEG_interface.h
 *
 *  Created on: Jan 26, 2025
 *      Author: engineering
 */

#ifndef HAL_BCD_SEG_BCD_SEG_INTERFACE_H_
#define HAL_BCD_SEG_BCD_SEG_INTERFACE_H_


void BCD_seven_seg_init(unsigned char portname);
void BCD_seven_seg_write(unsigned char portname,unsigned char value);

#endif /* HAL_BCD_SEG_BCD_SEG_INTERFACE_H_ */
