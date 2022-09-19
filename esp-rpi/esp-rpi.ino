#include <ArduinoJson.h>
#include <ESP32Servo.h>

DynamicJsonDocument doc(1024);

Servo p;
Servo t;


int width = 640, height = 480; // Camera resoulution
int xPos = 90, yPos = 50;      // initial positions of Servos
const int angle = 3;

int loco = 0;
int sos = 0;
int pan = 0;
int tilt = 0;
String temp = "";         // commands
#define RXd1 18
#define TXd1 19

void setup() {
  p.attach(12);
  t.attach(14);
  p.write(xPos);
  t.write(yPos);

  Serial.begin(38400);
  Serial1.begin(38400, SERIAL_8N1, RXd1, TXd1);

}


void loop() {



  if (Serial1.available() > 0)
  {
    temp = Serial1.readStringUntil('*');
    Serial.println(temp);
    DeserializationError err = deserializeJson(doc,  temp);
    if (err) {
      Serial.println(" Proximity deserializeJson() failed: ");
    }


    loco = doc["loco"];
    sos = doc["sos_status"];
    pan = doc["pan"];
    tilt = doc["tilt"];

    Serial.println(pan);


    if (pan > width / 2 + 100)
      xPos -= angle;
    if (pan < width / 2 - 100)
      xPos += angle;
    if (tilt < height / 2 + 100)
      yPos -= angle;
    if (tilt > height / 2 - 100)
      yPos += angle;



    //    if (yPos >= 180)
    //      yPos = 180;
    //    else if (yPos <= 0)
    //      yPos = 0;

    p.write(xPos);
    t.write(yPos);



    temp = "";
    Serial.println("");
    delay(15);
  }
}
