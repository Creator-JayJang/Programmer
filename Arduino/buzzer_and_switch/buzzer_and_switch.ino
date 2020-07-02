int aPinSwitch[8] = {13,12,11,10,9,8,7,6};
int pinGnd = 5;
int pinBuzzer = 3;


// 3 octave - Do, Re, Mi, Fa, So, La, Ti, 4 octave - Do
int aPitchData[8] = {131, 147, 165, 175, 196, 220, 247, 262};

void setup() {
  Serial.begin(115200);
  for(int i=0; i<8; i++) {
    pinMode(aPinSwitch[i], INPUT);
  }
  pinMode(pinGnd, OUTPUT);
  digitalWrite(pinGnd, LOW);
  pinMode(pinBuzzer, OUTPUT);
}

void loop() {
  for(int i=0; i<8; i++) {
    if(digitalRead(aPinSwitch[i])) {
      Serial.print(i);
      Serial.print("# ");
      Serial.println("Switch PUSH");
    tone(pinBuzzer,aPitchData[i]);
    delay(500);
    noTone(pinBuzzer);
    }
  }
delay(500);
}
