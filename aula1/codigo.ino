// C++ code
//
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
}

void loop()
{
  int var = digitalRead(4);
  digitalWrite(3, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(3, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
