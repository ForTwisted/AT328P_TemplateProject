/*
 * main.c
 *
 *  Created on: 25 avr. 2017
 *      Author: lchagnoleau
 */

// important : for MCU empty list : https://github.com/mnlipp/avr-eclipse-fork/issues/1

/*
 * Flash fuse :
 * avrdude -c usbasp -p m328p -U lfuse:w:0xff:m -U hfuse:w:0xda:m -U efuse:w:0xff:m
 *
 * Flash elf :
 * avrdude -c usbasp -p m328p -e -U flash:w:ATMega328-TemplateProject.elf
 *
 */

#include <avr/io.h>
#include <util/delay.h>

int main( void )
{
    // Sets Pin #5 of port B as Output
   DDRB |= (1 << PB5) ;

   while(1)
   {
      // Toggle Pin #5 of Port B
      PORTB ^= (1 << PB5) ;

      // Wait for 1 second
      _delay_ms(100) ;

   }
}
