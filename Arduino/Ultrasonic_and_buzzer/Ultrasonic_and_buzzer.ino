int pinGnd = 5;
int pinEcho = 4;
int pinTrigger = 3;
int pinVcc = 2;
int pinGnd2 = 13;
int pinBuzzer = 11;

int aPitchData[8] = {165, 147, 131, 147, 165, 165, 165, 147};


void setup() {
  Serial.begin(115200);
  
  pinMode(pinGnd, OUTPUT);
  pinMode(pinVcc, OUTPUT);
  pinMode(pinTrigger, OUTPUT);
  pinMode(pinEcho, INPUT);
  digitalWrite(pinGnd, LOW);
  digitalWrite(pinVcc, HIGH);

  pinMode(pinGnd2, OUTPUT);
  digitalWrite(pinGnd2, LOW);
  pinMode(pinBuzzer, OUTPUT);
}

void loop() {
  float fDuration, fDistance;
  
  digitalWrite(pinTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrigger, LOW);
  
  fDuration = pulseIn(pinEcho, HIGH);
  Serial.println(fDuration);
  fDistance = ((float)(340 * fDuration)) / 10000 / 2;
  Serial.print(fDistance);
  Serial.println("cm");
  delay(500);

  if (fDistance <= 100)
  {
    tone(pinBuzzer,aPitchData[1]);
    delay(500);
    noTone(pinBuzzer);
  }

  else if 
  (fDistance <= 10)
  {
    tone(pinBuzzer,aPitchData[8]);
    delay(100);
    noTone(pinBuzzer);
  }
}
