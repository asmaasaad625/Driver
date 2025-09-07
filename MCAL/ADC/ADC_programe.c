/*
 * ADC_programe.c
 *
 *  Created on: Feb 5, 2025
 *      Author: engineering
 */

#include"ADC_interface.h"
#include"../../lib/BIT_MATH.h"
#include <avr/io.h>



void ADC_init(void)
{
	SET_BIT(ADMUX,REFS0);
	SET_BIT(ADMUX,REFS1);
	SET_BIT(ADCSRA,ADEN);
	SET_BIT(ADCSRA,ADPS2);
	SET_BIT(ADCSRA,ADPS1);

}
unsigned short ADC_Read(void)
{
  unsigned short read_val;
  SET_BIT(ADCSRA,ADSC);
  while( GET_BIT(ADCSRA,ADSC)==1);
  read_val=ADCL;
  read_val |=ADCH<<8;
  return read_val;
}
