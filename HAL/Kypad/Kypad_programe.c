/*
 * Kypad_programe.c
 *
 *  Created on: Jan 27, 2025
 *      Author: engineering
 */
#include"Kypad_interface.h"
#include"../../MCAL/DIO/DIO_interface.h"

void keypad_vInit()
{
	    DIO_vsetpindirection('D',0,1);
	    DIO_vsetpindirection('D',1,1);
	    DIO_vsetpindirection('D',2,1);
	    DIO_vsetpindirection('D',3,1);
	    DIO_vsetpindirection('D',4,0);
	    DIO_vsetpindirection('D',5,0);
	    DIO_vsetpindirection('D',6,0);
	    DIO_vsetpindirection('D',7,0);
	    DIO_vconnectpullup  ('D',4,1);
	    DIO_vconnectpullup  ('D',5,1);
	    DIO_vconnectpullup  ('D',6,1);
	    DIO_vconnectpullup  ('D',7,1);
}
char keypad_write()
{
	 char arr[4][4]={{'7','8','9','/'},{'4','5','6','*'},{'A','B','C','D'},{'A','0','=','+'}};
		 char row,coloumn,x;
		 char returnval=0xff;
		 for(row=0;row<4;row++)
		 {
			 DIO_vwritepin('D',0,1);
			 DIO_vwritepin('D',1,1);
			 DIO_vwritepin('D',2,1);
			 DIO_vwritepin('D',3,1);
			 DIO_vwritepin('D',row,0);

			for(coloumn=0;coloumn<4;coloumn++)
			{
				x=DIO_u8readpin('D',(coloumn+4));
				if(x==0)
				 {
					 returnval=arr[row][coloumn];
					 break;
				 }
			}

			if(x==0)
			{
				break;
			}
		}
		 return returnval ;
}

