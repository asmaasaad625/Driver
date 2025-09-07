/*
 * BIT_MATH.h
 *
 *  Created on: Dec 12, 2024
 *      Author: engineering
 */

#ifndef LIB_BIT_MATH_H_
#define LIB_BIT_MATH_H_


#define SET_BIT(reg,bit)           reg|=(1<<bit)
#define CLR_BIT(reg,bit)           reg&=(~(1<<bit))
#define TOG_BIT(reg,bit)           reg ^=(1<<bit)
#define GET_BIT(reg,bit)          (reg&(1<<bit))>>bit //read bit

#endif /* LIB_BIT_MATH_H_ */
