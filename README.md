Plugin for PIC microcontrollers
Tested with a PIC1F628a and a 128x64 SSD1306 Oled display

Should work with other PIC's too. Software driven
See the 'main.c' for most of the possibilities it can do.

I used old-school stuff, PIC16F628a, HI-TECH compiler and MPLAB (not X)

You'll have to change the #include <htc.h> If you use the modern stuff
try <xc.c> :-)

Tried to 'catch' all eventualities for the x- and y positions but might have missed something in the beta test.
So open an issue if something's not right, and I'll try to solve it.
