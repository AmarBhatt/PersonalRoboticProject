/*
Arduino - Motor Control
*/

const int motorR1A = 22;
const int motorR1B = 23;
const int motorF1A = 24;
const int motorF1B = 25;

const int motorR2A = 50;
const int motorR2B = 51;
const int motorF2A = 52;
const int motorF2B = 53;

const int motorR1E = 7;
const int motorF1E = 6;
const int motorR2E = 5;
const int motorF2E = 4;

void setup(){
  Serial.begin(9600);
  
  pinMode(motorR1A, OUTPUT);
  pinMode(motorR1B, OUTPUT);
  pinMode(motorF1A, OUTPUT);
  pinMode(motorF1B, OUTPUT);
  
  pinMode(motorR2A, OUTPUT);
  pinMode(motorR2B, OUTPUT);
  pinMode(motorF2A, OUTPUT);
  pinMode(motorF2B, OUTPUT);
  
  Serial.println("Start Motors");
//  pinMode(motor1E, OUTPUT);
//  pinMode(motor2E, OUTPUT);
}

void loop(){
//  Serial.println("Start Front Motor");
//  analogWrite(motorF1E, 255);
//  digitalWrite(motorF1A, HIGH);
//  digitalWrite(motorF1B, LOW);
//  delay(5000);
//  digitalWrite(motorF1A, LOW);
//  digitalWrite(motorF1B, HIGH);
//  delay(5000);
//  analogWrite(motorF1E, 0);
//  digitalWrite(motorF1A, LOW);
//  digitalWrite(motorF1B, LOW);
//  //delay(1000);
//  Serial.println("Start Back Motor");
//  analogWrite(motorR1E, 255);
//  digitalWrite(motorR1A, HIGH);
//  digitalWrite(motorR1B, LOW);
//  delay(5000);
//  digitalWrite(motorR1A, LOW);
//  digitalWrite(motorR1B, HIGH);
//  delay(5000);
//  analogWrite(motorR1E, 0);
//  digitalWrite(motorR1A, LOW);
//  digitalWrite(motorR1B, LOW);
//  //delay(1000);
  
  
   Serial.println("Start Front Motor 1");
  //Move Front Motor 1
  analogWrite(motorF1E, 255);
  digitalWrite(motorF1A, HIGH);
  digitalWrite(motorF1B, LOW);
  delay(5000);//Reverse
  digitalWrite(motorF1A, LOW);
  digitalWrite(motorF1B, HIGH);
  delay(5000);
  //Turn Front Motor 1 OFF
  analogWrite(motorF1E, 0);
  digitalWrite(motorF1A, LOW);
  digitalWrite(motorF1B, LOW);
  //delay(5000);
  
  Serial.println("Start Rear Motor 1");
  //Move Rear Motor 1
  analogWrite(motorR1E, 255);
  digitalWrite(motorR1A, HIGH);
  digitalWrite(motorR1B, LOW);
  delay(5000);//Reverse
  digitalWrite(motorR1A, LOW);
  digitalWrite(motorR1B, HIGH);
  delay(5000);
  //Turn Rear Motor 1 OFF
  analogWrite(motorR1E, 0);
  digitalWrite(motorR1A, LOW);
  digitalWrite(motorR1B, LOW); 
  
  Serial.println("Start Rear Motor 2");
  //Move Rear Motor 2
  analogWrite(motorR2E, 255);
  digitalWrite(motorR2A, HIGH);
  digitalWrite(motorR2B, LOW);
  delay(5000);//Reverse
  digitalWrite(motorR2A, LOW);
  digitalWrite(motorR2B, HIGH);
  delay(5000);
  //Turn Rear Motor 2 OFF
  analogWrite(motorR2E, 0);
  digitalWrite(motorR2A, LOW);
  digitalWrite(motorR2B, LOW);
  
  Serial.println("Start Front Motor 2");
  //Move Front Motor 2
  analogWrite(motorF2E, 255);
  digitalWrite(motorF2A, HIGH);
  digitalWrite(motorF2B, LOW);
  delay(5000);//Reverse
  digitalWrite(motorF2A, LOW);
  digitalWrite(motorF2B, HIGH);
  delay(5000);
  //Turn Front Motor 2 OFF
  analogWrite(motorF2E, 0);
  digitalWrite(motorF2A, LOW);
  digitalWrite(motorF2B, LOW);
}
