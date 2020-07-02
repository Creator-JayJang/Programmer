int pinGnd = 4;
int pinVcc = 3;
int pinHit = 2;
int count = 0;

void setup() {
  Serial.begin(115200);

  pinMode(pinGnd, OUTPUT);
  pinMode(pinVcc, OUTPUT);
  pinMode(pinHit, INPUT);
  digitalWrite(pinGnd, LOW);
  digitalWrite(pinVcc, HIGH);

  // External interrupt setup
  // source : pinHit, ISR: hitISR, mode : RISING
  
  attachInterrupt(0, hitISR, RISING);
}

void loop() {
  Serial.print("Hit : ");
  Serial.println(count);
  delay(500);
}

  // External ISR function
void hitISR(void)
{
  count++; // 1 increase
}
