// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int servoPin = 3; 
// Create a servo object 
Servo Servo1; 
void setup() { 
   // We need to attach the servo to the used pin number 
   Servo1.attach(servoPin); 
   Servo1.write(0);
   Serial.begin(9600);
  
}
void loop(){ 
Serial.println("0");
   delay(2000);
   Servo1.write(50);
   delay(5000);
   Serial.println("1");
   Servo1.write(0);
    
      
}
