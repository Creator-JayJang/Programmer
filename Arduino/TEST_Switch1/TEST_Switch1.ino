int pinGnd = 4;
int pinVcc = 3;
int pinTilt = 2;

void setup() {
  Serial.begin(115200);
  
  pinMode(pinGnd, OUTPUT);
  pinMode(pinVcc, OUTPUT);
  pinMode(pinTilt, INPUT_PULLUP);
  digitalWrite(pinGnd, LOW);
  digitalWrite(pinVcc, HIGH);
}
