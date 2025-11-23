MAY NOT BE BUG FREE

Plugin for PIC microcontrollers.

https://www.youtube.com/shorts/9FisDHUpdi8

Tested with a PIC1F628a and a 128x64 SSD1306 Oled display

Should work with other PIC's too. Software driven.

See the 'main.c' for most of the possibilities it can do. And oledlib.c for some other functions not used in the example file.


I used old-school stuff, PIC16F628a, HI-TECH compiler and MPLAB (not X)

You'll have to change the #include <htc.h> If you use the modern stuff.
try <xc.c> :-)

Tried to 'catch' all eventualities for the x- and y positions but might have missed something in the beta test.
So open an issue if something's not right, and I'll try to solve it.

19 nov 2025 
V1.1 Added Oled_rotate() function.

