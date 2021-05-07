#include "Servo.h"
#include "Arduino.h"


#define ignitinoChannel1 2;
#define ignitinoChannel2 3;
#define ignitinoChannel3 4;

//İf using launch pad clamps or only servo motor
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup(){
    Serial.begin(9600);
    servo1.attach(5);
    servo2.attach(6);
    servo3.attach(7);
    servo4.attach(8);
    servo1.write(90);
    servo2.write(90);
    servo3.write(90);
    servo4.write(90);
    pinMode(ignitinoChannel1, OUTPUT);
    pinMode(ignitinoChannel2, OUTPUT);
    pinMode(ignitinoChannel3, OUTPUT);

}

void loop(){

}
