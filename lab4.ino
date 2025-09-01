int value_1 = 0;

void setup() {
  pinMode(A0, INPUT);    
  pinMode(7, OUTPUT);    
  pinMode(5, OUTPUT);     
  Serial.begin(9600);     
}

void loop() {
  value_1 = analogRead(A0);         
  Serial.println(value_1);          

  if (value_1 > 100) {

    digitalWrite(7, HIGH);          
    digitalWrite(5, HIGH);           
  } else if (value_1 > 63 && value_1 <= 100) {
 
    digitalWrite(7, LOW);     
  } else {
    
    digitalWrite(7, LOW);          
    digitalWrite(5, LOW);          
  }

  delay(500);  
}