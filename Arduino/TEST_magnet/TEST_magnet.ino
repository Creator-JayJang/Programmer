int pinGnd = 4;
int pinVcc = 3;
int pinReed = 2;
int pinLed = 13;
int buttonState;


void setup() {
  Serial.begin(115200);
  pinMode(pinGnd, OUTPUT);
  pinMode(pinVcc, OUTPUT);
  pinMode(pinReed, INPUT);
  pinMode(pinLed, OUTPUT);
  digitalWrite(pinGnd, LOW);
  digitalWrite(pinVcc, HIGH);
}

void loop() {
  if(digitalRead(pinReed)) { // Reed read
  Serial.println("Mini Reed OFF"); // HIGH
  }
  else {
  Serial.println("Mini Reed ON"); // LOW
  }
  
     buttonState = digitalRead(pinReed);

  if (buttonState == HIGH)
    {
       digitalWrite(pinLed, LOW);
    }
    else 
    {
       digitalWrite(pinLed, HIGH);
    }   
  delay(500);
}
