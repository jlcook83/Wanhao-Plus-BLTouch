/*#include "WanhaoHMI.h"
#include "Marlin.h"


//#include "MarlinSerial.h"
//#include "HardwareSerial.h"
//#include "SoftwareSerial.h"

//#define mRx 1
//#define mTx 2
SoftwareSerial HMI_SERIAL(1, 2);

char vs_lcd_data[36];
void lcd_vs_App_Page(char temp_page)
{

  vs_lcd_data[0]=0x5A;
  vs_lcd_data[1]=0xA5;
  vs_lcd_data[2]=0x04;
  vs_lcd_data[3]=0x80;
  vs_lcd_data[4]=0x03;

  vs_lcd_data[5]=0x00;
  vs_lcd_data[6]=temp_page;

  for(int i=0 ; i<7 ; i++)
  {
    HMI_SERIAL.write(vs_lcd_data[i]);
    _delay_ms(2);
  }
}
*/
