int status=0;
void setup(){
  pinMode(9,INPUT);
  pinMode(2,OUTPUT);
  
}
void loop(){
  status=digitalRead(9);
  if(status==0)
{
  digitalWrite(2,LOW);
  }
  else{
    digitalWrite(2,HIGH);
  }
}
