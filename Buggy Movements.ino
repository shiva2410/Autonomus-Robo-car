int lp=9;
int fade=0;
int bright=5;
int rv,wv;
void setup() {

  pinMode(lp,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 if(Serial.available())
 {
  rv=Serial.parseInt();
  wv=(255./1023.)*rv;
  Serial.println(wv);
  analogWrite(lp,wv);
 
 }
  
}
