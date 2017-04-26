# AT328P_TemplateProject

## Description
Template for ATMEL ATMega328P (tested on Arduino nano)
Just blinking code

## Installation
### AVR Eclipse plugin
http://avr-eclipse.sourceforge.net/wiki/index.php/Plugin_Download

### AVR tools
http://avr-eclipse.sourceforge.net/wiki/index.php/The_AVR_GCC_Toolchain

##### Important
If your system is not in english, you need one more step :
See the first post of this topic : https://github.com/mnlipp/avr-eclipse-fork/issues/1

## Flash
### Set fuse
Fuse generator example : http://www.engbedded.com/fusecalc/

    avrdude -c usbasp -p m328p -U lfuse:w:0xff:m -U hfuse:w:0xda:m -U efuse:w:0xff:m


### flash

    avrdude -c usbasp -p m328p -e -U flash:w:ATMega328-TemplateProject.elf

