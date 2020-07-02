int pinGnd = 4;
int pinVcc = 3;
int pinTilt = 2;
int pinLed = 13;
//int testLed = 12;
int buttonState;

void setup() {
  Serial.begin(115200);
  
  pinMode(pinGnd, OUTPUT);
  pinMode(pinVcc, OUTPUT);
  pinMode(pinTilt, INPUT);
  pinMode(pinLed, OUTPUT);
  digitalWrite(pinGnd, LOW);
  digitalWrite(pinVcc, HIGH);
}
void loop() {
  if(!digitalRead(pinTilt))
    {
    Serial.println("Tilt ON");
    }
   else
    {
    Serial.println("Tilt OFF");
    }
  
     buttonState = digitalRead(pinTilt);

  if (buttonState == HIGH)
    {
       digitalWrite(pinLed, LOW);
    }
    else 
    {
       digitalWrite(pinLed, HIGH);
    }   
  //delay(500);
}
