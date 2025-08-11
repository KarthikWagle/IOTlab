// C++ code
//
void setup()
{
  for(int i=0;i<5;i++)
  pinMode(i, OUTPUT);
}
int led[]={1,2,3,4,5};
void loop()
{
  for(int i=0;i<5;i++){
  digitalWrite(led[i], HIGH);
  delay(1); // Wait for 1000 millisecond(s)
     digitalWrite(led[i], LOW);
    delay(1000);}
     for(int i=5;i>=0;i--){
  digitalWrite(led[i], HIGH);
  delay(500); // Wait for 1000 millisecond(s)
     digitalWrite(led[i], LOW);
       delay(1000);}
  
  }