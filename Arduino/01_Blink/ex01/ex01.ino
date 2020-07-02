int aPinLed[8] = {13, 12, 11, 10, 9, 8, 7, 6};

void setup() {
  // put your setup code here, to run once:

  for(int i=0; i<8; i++)
{
pinMode(aPinLed[i], OUTPUT); // LED pin Output 설정
}
  }

void loop() {
  // put your main code here, to run repeatedly:
  
  int i;
for(i=0; i<4; i++)
{
digitalWrite(aPinLed[i], HIGH);
digitalWrite(aPinLed[i+4], HIGH);// LED ON
delay(50); 
digitalWrite(aPinLed[i], LOW);
digitalWrite(aPinLed[i+4], LOW);// LED OFF
//delay(100); 
} 

for(i=7; i>3; i--)
{
digitalWrite(aPinLed[i], HIGH); // LED ON
digitalWrite(aPinLed[i-4], HIGH);
delay(50); 
digitalWrite(aPinLed[i], LOW);
digitalWrite(aPinLed[i-4], LOW);// LED OFF
//delay(100); 
} 
}
 
/*  digitalWrite(pinLed0, HIGH);
  delay(1000);
  digitalWrite(pinLed0, LOW);
  delay(1000);*/
 
