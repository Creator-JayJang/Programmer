int pinLed = 13;
int a;

void setup() {
  // UART setup baud 115200, data bit 8, parity None, stop bit 1
  Serial.begin(115200); // same Serial.begin(115200, SERIAL_8N1)
  Serial.println("Serial Test !!");
  Serial.print("ECHO >> ");
  pinMode(pinLed, OUTPUT);
}

void loop() {
 }

 void serialEvent(void) {
  char data;
  data = Serial.read();
  Serial.print(data);

  if (data == 'O')
  {
    digitalWrite(pinLed, HIGH);
  } 
  else if (data == 'X')
  {
    digitalWrite(pinLed, LOW);
  }
}
