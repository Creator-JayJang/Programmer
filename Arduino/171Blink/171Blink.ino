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
for(i=0; i<8; i++)
{
digitalWrite(aPinLed[i], HIGH);
delay(100); 
digitalWrite(aPinLed[i], LOW);
}
}
 
