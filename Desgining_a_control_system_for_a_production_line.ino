

#include <Servo.h>

Servo servo;

int x1 = 90; // the angle to take for the 30x30x30 box
int x2 = 135; // the angle to take for the 20x20x20 box
int x3 = 45;  // the angle to take for the 10x10x10 box  
int sensor1 = HIGH;
int sensor2 = HIGH;
int sensor3 = HIGH;

void setup() {
  
  servo.attach(4);
  pinMode(2, INPUT); // the third seonsor ( above all two )
  pinMode(7, INPUT); // the second sensor ( in the middle )
  pinMode(13, INPUT); // the first sensor ( in the bottom )
  
}

void loop() {
  sensor3=digitalRead(2); // reading the state of sensor 3
  sensor2=digitalRead(7); // reading the state of sensor 2
  sensor1=digitalRead(13); // reading the state of sensor 1
  
  if (sensor1 == LOW && sensor2 == LOW && sensor3 == LOW) // it means the box is 30x30x30 since the height of the box covered all the sensors
  {
    servo.write(x1);
    }
  else if (sensor1 == LOW && sensor2 == LOW && sensor3 == HIGH) // it means the box is 20x20x20 since the height of the box covered two sensors (the bottom and the middle)
  {
    servo.write(x2);
    }
  else if (sensor1 == LOW && sensor2 == HIGH && sensor3 == HIGH)  // it means the box is 10x10x10 since the height of the box covered only one sensor (the bottom)
  {
    servo.write(x3);
    }
  else {
    servo.write(x1); // if there is no boxes then saty in the middle path ( the same path as the 30x30x30 box) 
  }
}
