/**************************************************************************************

PIC16F628A to OLED
Example functions for OLED SSD1306
ARV november 2025

***************************************************************************************/

#include "main.h"
uint8_t count[] = "1234";
unsigned short i = 0;
uint8_t degree[] = {0x00, 0x06, 0x09, 0x09, 0x06}; // degree symbol

void main() {
	CMCON = 0b111;		//comparator off

	init_I2C(); // set ports for I2C
	Oled_Init(SSD1306_SWITCHCAPVCC, SSD1306_I2C_ADDRESS);

	Oled_ClearDisplay(0);
  	Oled_GotoXY(1, 2);
  	Oled_Print("SSD1306 Oled display.\n\n");
  	Oled_Print("V1.0 november 2025\n ARV");
  __delay_ms(2000);

  	// clear the screen
//  	Oled_ClearDisplay(0);

//  	Oled_GotoXY(6, 2);   
//  	Oled_Print((uint8_t *) "Scroll text");
//  __delay_ms(2000);

  	Oled_StartScrollRight(1, 3);
  __delay_ms(2000);
  	Oled_StopScroll();

  	Oled_StartScrollLeft(1, 1);
  __delay_ms(2000);
  	Oled_StopScroll();

  	Oled_StartScrollDiagRight(1, 1);
  __delay_ms(1000);
  	Oled_StopScroll();

  	Oled_StartScrollDiagLeft(1, 1);
  __delay_ms(1000);
  	Oled_StopScroll();

  __delay_ms(1000);
  	Oled_ClearDisplay(0);

	Oled_GotoXY(9,4);
	Oled_Print("deg 20");
	Oled_PutCustomC(degree);
	Oled_PutC('C');
  __delay_ms(2000);

	Oled_GotoXY(1,1);
	Oled_Print("1,1");
	Oled_GotoXY(2,2);
	Oled_Print("2,2");
	Oled_GotoXY(3,3);
	Oled_Print("3,3");
	Oled_GotoXY(4,4);
	Oled_Print("4,4");
	Oled_GotoXY(5,5);
	Oled_Print("5,5");
	Oled_GotoXY(6,6);
	Oled_Print("6,6");
	Oled_GotoXY(7,7);
	Oled_Print("7,7");
	Oled_GotoXY(8,8);
	Oled_Print("8,8");
  __delay_ms(2000);

	Oled_ClearDisplay(0);
	Oled_GotoXY(2,4);

	Oled_Printscaled("Invert", 2);
  __delay_ms(1000);
	Oled_InvertDisplay(1);
  __delay_ms(2000);
	Oled_InvertDisplay(0);
  	Oled_ClearDisplay(0);


	Oled_GotoXY(1,1);
	Oled_Print("abcde");
	Oled_GotoXY(1,4);
	Oled_Printscaled("fghij", 2);
	Oled_GotoXY(1,8);
	Oled_Printscaled("klmno", 3);
  __delay_ms(2000);
	Oled_ClearDisplay(0);

  	while(1) {
	    count[0] = (i / 1000) % 10 + '0';   // extract hundreds digit
	    count[1] = (i / 100)  % 10 + '0';   // extract hundreds digit
    	count[2] = (i / 10)   % 10 + '0';   // extract tens digit
	    count[3] =  i         % 10 + '0';   // extract ones digit

    	Oled_GotoXY(1, 6);
    	Oled_Printscaled(count, 4);

    	i += 1;   // increment i

  	  __delay_ms(1000);
  }

}

// End



