/*
 * delay.c
 *
 *  Created on: 28 ���. 2016 �.
 *      Author: ������� ������
 */

#include "_delay_us.h"

void _delay_us(uint32_t us) {
	SysCtlDelay(SysCtlClockGet()/3000000*us) ;  // more accurate
}
