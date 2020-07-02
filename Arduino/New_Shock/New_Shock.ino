int pinGnd = 4;
int pinVcc = 3;
int pinHit = 2;
static int count = 0;
int aPinLed[8] = {13, 12, 11, 10, 9, 8, 7, 6};

void setup() {
  Serial.begin(115200);

  pinMode(pinGnd, OUTPUT);
  pinMode(pinVcc, OUTPUT);
  pinMode(pinHit, INPUT);
  digitalWrite(pinGnd, LOW);
  digitalWrite(pinVcc, HIGH);

  // External interrupt setup
  // source : pinHit, ISR: hitISR, mode : RISING
  
  attachInterrupt(0, hitISR, FALLING);

  
  for(int i=0; i<8; i++)
  {
  pinMode(aPinLed[i], OUTPUT); // LED pin Output 설정
  }
}

void loop() {
  int i;
  for(i=0; i<8; i++)
  { 
    digitalWrite(aPinLed[i], (count>>i)&0x01);
  }
  delay(500);
  count++;
  Serial.print("loop : ");
  Serial.println(count);

}

  // External ISR function
void hitISR(void)
{
  Serial.println("hit");
  count=0;
  Serial.print("ISR : ");
  Serial.println(count);
  delay(100);
}
