int m;
int sum = 0;
void setup() {
  // put your setup code here, to run once:
  digitalWrite(3, LOW);
  pinMode(3,OUTPUT);
  digitalWrite(4, LOW);
  pinMode(4,OUTPUT);
  digitalWrite(5, LOW);
  pinMode(5,OUTPUT);
  digitalWrite(6, LOW);
  pinMode(6,OUTPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int j = 1; j<=4; j++){
if(Serial.available()>0){
m=Serial.read();
Serial.println(m);
}

switch(m){
  case 48:
  digitalWrite(3,HIGH);
  delay(500);
  sum = 10*sum + 3;
  digitalWrite(3,LOW);
  delay(500);
  break;
  case 49:
  digitalWrite(4,HIGH);
  delay(500);
  sum = 10*sum + 4;
  digitalWrite(4,LOW);
  delay(500);
  break;
  case 50:
  digitalWrite(5,HIGH);
  delay(500);
  sum = 10*sum + 5;
  digitalWrite(5,LOW);
  delay(500);
  break;
  case 51:
  digitalWrite(6,HIGH);
  delay(500);
  sum = 10*sum + 6;
  digitalWrite(6,LOW);
  delay(500);
  break;
  }
}


for(int i = 1; i<=4; i++){
  digitalWrite(sum%10, HIGH);
  delay(500);
  digitalWrite(sum%10, LOW);
  delay(500);
  sum = sum/10;
}
  
}
