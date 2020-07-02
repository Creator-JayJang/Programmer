int aPinSwitch[4] = {13,12,11,10};
int pinLed[4] = {2,3,4,5};
int buttonState;

void setup() {
  Serial.begin(115200);
  for(int i=0; i<4; i++) {
    pinMode(aPinSwitch[i], INPUT);
    pinMode(pinLed[i], OUTPUT);
  }
}

void loop() {
   for(int i=0; i<4; i++) {
     if(digitalRead(aPinSwitch[i])) {
       Serial.print(i);
       Serial.print("# ");
       Serial.println("Switch PUSH");
     }
     
     buttonState = digitalRead(aPinSwitch[i]);
  
     if (buttonState == HIGH)
     {
        digitalWrite(pinLed[i], HIGH);
     }
     else 
     {
        digitalWrite(pinLed[i], LOW);
     }   
  }
   delay(300);
}
