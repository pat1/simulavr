 /*
 ****************************************************************************
 *
 * simulavr - A simulator for the Atmel AVR family of microcontrollers.
 * Copyright (C) 2001, 2002, 2003   Klaus Rudolph		
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 ****************************************************************************
 *
 *  $Id$
 */

#ifndef AT8515
#define AT8515
#include "avrdevice.h"


#include "hwspi.h"
#include "hwuart.h"
#include "hwacomp.h"
#include "hwtimer.h"
#include "hwextirq.h"

#include "ioregs.h" //only for mcucr here


class AvrDevice_at90s8515:public AvrDevice {
 private:
    HWPort *portx; //only used for oc1b (Timer1)
 public:
    ~AvrDevice_at90s8515();
    HWPort *porta;
    HWPort *portb;
    HWPort *portc;
    HWPort *portd;
    HWSpi *spi;
    HWUart *uart;
    HWAcomp *acomp;
    HWPrescaler *prescaler;
    HWTimer0 *timer0;
    HWTimer1 *timer1;
    HWMcucr *mcucr;
    HWExtIrq *extirq;
    HWTimer01Irq *timer01irq;
    AvrDevice_at90s8515();
    unsigned char GetRampz();
    void SetRampz(unsigned char);
};
#endif

