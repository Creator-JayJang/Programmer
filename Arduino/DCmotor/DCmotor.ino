int pinPos = 5;
int pinNeg = 4;
int pinEn = 3;

void setup()
{
  pinMode(pinPos, OUTPUT);
  pinMode(pinNeg, OUTPUT);
  pinMode(pinEn, OUTPUT);
}
void loop()
{
  ClockWise(50);
  delay(3000);
  
  MotorStop();
  delay(2000);

  CounterClockWise(100);
  delay(3000);

  MotorStop();
  delay(2000);  
}
void ClockWise(int Speed)
{
  digitalWrite(pinPos, HIGH); // Positive Motor ON
  digitalWrite(pinNeg, LOW); // Negative Motor OFF
  analogWrite(pinEn, Speed); // Speed Control
}

void CounterClockWise(int Speed)
{
  digitalWrite(pinPos, LOW); // Positive Motor OFF
  digitalWrite(pinNeg, HIGH); // Negative Motor ON
  analogWrite(pinEn, Speed); // Speed Control
}

void MotorStop()
{
  digitalWrite(pinPos, LOW); // Positive Motor OFF
  digitalWrite(pinNeg, LOW); // Negative Motor OFF
}
