
// pir sensor with arduino uno


int ledpin =5;
int pir = 6 ;

void setup()
{
  pinMode(5,OUTPUT);
  pinMode(6,INPUT);

}

void loop()
{
  int val;
  val == digitalRead(6);
if(val== "HIGH")
{
  digitalWrite(ledpin,HIGH);
  delay(1000);
}
else
{
  digitalWrite(ledpin,LOW);
  delay(1000);
}
}
