#include <LiquidCrystal.h> //Import the LCD library
//Include^
//Init
LiquidCrystal lcd(23, 22, 1, 3, 21, 5,17); /*Initialize the LCD and
                                        tell it which pins is
                                        to be used for communicating*/


const int contrast = 13;

void setup() {
  analogWrite(contrast, 130);
  // put your setup code here, to run once:
  lcd.begin(16, 2); //Tell the LCD that it is a 16x2 LCD
  //pinMode-ing OUTPUT makes the specified pin output power
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.print(" Hello, World!!"); //Output " Hello, World!!" on the first line of the LCD
  lcd.setCursor(0, 1); /*Set the (invisible) cursor on the first place second row of the LCD.
                        Cursor values are 0-indexed, 0 would the be the first place.
                        The cursor coordinates are X,Y coordinates.*/
  lcd.print("16x2 LCD Screen");
  delay(1000); //Wait a second
  for (int l = 0; l < 16; l++) { //For loop. Repeating 16 times
    lcd.scrollDisplayRight(); //Scroll whole screen to the right once
    delay(90); //Slight delay for animation
  }
  delay(1000);
  for (int l = 0; l < 16; l++)
    lcd.scrollDisplayLeft();
  for (int l = 51; l > -1; l--) { //Repeating 51 times
    analogWrite(bri, l * 5);
    delay(35);
  }
  delay(1000);
  for (int l = 0; l < 51; l++) { //Repeating 51 times
    analogWrite(contra, l * 5);
    delay(35);
  }
  delay(1000);
  lcd.setCursor(0, 0);
}
