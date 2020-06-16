int i = 0;
void setup()
{
  for(i=0;i<8;i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  for(i=0;i<8;i++)
  {
    digitalWrite(i, HIGH);
    digitalWrite(7-i, HIGH);
    delay(1000);
    digitalWrite(i, LOW);
    digitalWrite(7-i, LOW);
    delay(500); 
  }
}