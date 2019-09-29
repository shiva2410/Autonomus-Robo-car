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


}

void loop() {
  // put your main code here, to run repeatedly:
      for(int i=3;i<=6;i++){
      digitalWrite(i,HIGH);
      delay(1000/2);
      }
      /*for(int i=6;i>=3;i--){
      digitalWrite(i,LOW);
      delay(1000/2);
      }*/
}
