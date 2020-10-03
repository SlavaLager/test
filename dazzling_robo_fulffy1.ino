void setup()
{
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(7, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
}