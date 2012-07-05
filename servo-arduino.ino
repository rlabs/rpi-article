#include <Servo.h>

/* Servo control code running on a Arduino Uno R3 */

#define SERVO 9

#define POS_A 10
#define POS_B 60
#define POS_C 110
#define POS_D 160

Servo myservo;
int pos = 0, data = 'A';

void setup()
{
  myservo.attach(9);      
  Serial.begin(9600);
  myservo.write(POS_A);
}

void loop()
{
  
 
  if(Serial.available() > 0) {
    data = Serial.read();
    if(data == 'A') {
      myservo.write(POS_A);
    } else if (data == 'B') {
      myservo.write(POS_B);
    } else if (data == 'C') {
      myservo.write(POS_C);
    } else if (data == 'D') {
      myservo.write(POS_D);
    }
  
  }
  delay(20);
}

