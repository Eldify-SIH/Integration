
#include <ESP32Servo.h>
#define front1 17
#define front2 16
#define front3 32
#define front4 33

#define back5 25
#define back6 26
#define back7 27
#define back8 14

Servo Servofront1;
Servo Servofront2;
Servo Servofront3;
Servo Servofront4;

Servo Servoback5;
Servo Servoback6;
Servo Servoback7;
Servo Servoback8;

void locoSetup() {
  Servofront1.attach(front1);
  Servofront2.attach(front2);
  Servofront3.attach(front3);
  Servofront4.attach(front4);

  Servoback5.attach(back5);
  Servoback6.attach(back6);
  Servoback7.attach(back7);
  Servoback8.attach(back8);

  Servofront1.write(80);
  Servofront2.write(140);
  Servofront3.write(110);
  Servofront4.write(40);

  Servoback5.write(40);
  Servoback6.write(150);
  Servoback7.write(125);
  Servoback8.write(40);
}
//void locoLoop() {
//
//  forward();
//  standUp();
//  delay(500);
//  left();
//  standUp();
//  delay(500);
//  right();
//  standUp();
//  delay(500);
//}


void standUp()
{
  Serial.println("Standing Up!");
  Servofront1.write(80);
  Servofront2.write(140);
  Servofront3.write(110);
  Servofront4.write(40);

  Servoback5.write(40);
  Servoback6.write(150);
  Servoback7.write(125);
  Servoback8.write(40);
  delay(1000);
}

void forward() {
  Serial.println("Going forward");
  Servofront2.write(165);
  Servoback8.write(15);
  delay(70);
  Servofront1.write(100);
  Servoback7.write(115);
  delay(70);
  Servofront2.write(140);
  Servoback8.write(40);
  delay(70);
  Servoback5.write(30);
  delay(70);
  Servofront3.write(120);
  delay(70);
  Servofront4.write(15);
  Servoback6.write(175);
  delay(70);
  Servofront3.write(110);
  Servoback5.write(40);
  delay(70);
  Servofront4.write(40);
  Servoback6.write(150);
  delay(70);
  Servofront1.write(80);
  Servoback7.write(125);
  //    delay(500);
  delay(200);
}

void left() {
  Serial.println("Going left");
  Servofront2.write(165);
  //  Servoback8.write(15);
  delay(70);
  Servofront1.write(100);
  Servoback7.write(115);
  delay(70);
  Servofront2.write(140);
  //  Servoback8.write(40);
  delay(70);
  Servoback5.write(30);
  delay(70);
  Servofront3.write(120);
  delay(70);
  Servofront4.write(15);
  Servoback6.write(175);
  delay(70);
  Servofront3.write(110);
  Servoback5.write(40);
  delay(70);
  Servofront4.write(40);
  Servoback6.write(150);
  delay(70);
  Servofront1.write(80);
  Servoback7.write(125);
  //    delay(500);
  delay(200);
}

void sharpLeft() {
  Serial.println("Going sharp left");
  Servofront2.write(165);
  //  Servoback8.write(15);
  delay(70);
  Servofront1.write(100);
  Servoback7.write(115);
  delay(70);
  Servofront2.write(140);
  //  Servoback8.write(40);
  delay(70);
  Servoback5.write(30);
  delay(70);
  Servofront3.write(120);
  delay(70);
  //  Servofront4.write(15);
  Servoback6.write(175);
  delay(70);
  Servofront3.write(110);
  Servoback5.write(40);
  delay(70);
  //  Servofront4.write(40);
  Servoback6.write(150);
  delay(70);
  Servofront1.write(80);
  Servoback7.write(120);
  //    delay(500);
  delay(200);
}

void sharpRight() {
  Serial.println("Going sharp right");

  //   Servofront2.write(165);
  Servoback8.write(15);
  delay(70);
  Servofront1.write(100);
  Servoback7.write(115);
  delay(70);
  //  Servofront2.write(140);
  Servoback8.write(40);
  delay(70);
  Servoback5.write(30);
  delay(70);
  Servofront3.write(120);
  delay(70);
  Servofront4.write(15);
  //  Servoback6.write(175);
  delay(70);
  Servofront3.write(110);
  Servoback5.write(40);
  delay(70);
  Servofront4.write(40);
  //  Servoback6.write(150);
  delay(70);
  Servofront1.write(80);
  Servoback7.write(125);
  //    delay(500);
  delay(200);

}


void right() {
  Serial.println("Going right");

  Servofront2.write(165);
  Servoback8.write(15);
  delay(70);
  Servofront1.write(100);
  Servoback7.write(115);
  delay(70);
  Servofront2.write(140);
  Servoback8.write(40);
  delay(70);
  Servoback5.write(30);
  delay(70);
  Servofront3.write(120);
  delay(70);
  Servofront4.write(15);
  //  Servoback6.write(175);
  delay(70);
  Servofront3.write(110);
  Servoback5.write(40);
  delay(70);
  Servofront4.write(40);
  //  Servoback6.write(165);
  delay(70);
  Servofront1.write(90);
  Servoback7.write(125);
  //    delay(500);
  delay(200);


}
