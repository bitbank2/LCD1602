#include <lcd1602.h>

void setup() {
  // put your setup code here, to run once:
   lcd1602Init(0x27);
}

void loop() {
  // put your main code here, to run repeatedly:
        lcd1602Powerup();
        lcd1602WriteString("BitBank LCD1602");
        lcd1602SetCursor(0,1);
        lcd1602WriteString("Quitting in ...");
        lcd1602Control(1,0,1); // backlight on, underline off, blink block on 
        delay(4000);
        lcd1602Shutdown();
        delay(4000);
}
