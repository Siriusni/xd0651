int pinInterrupt=2;
int tick = 0; 
int state=0;
void myfunc()
{
  Serial.print("Number: ");
  Serial.println(tick++);
  state=~state;
  digitalWrite(13,state);}
 
void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), myfunc, CHANGE);
}
 
void loop()
{
  
}
