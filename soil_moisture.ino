int value = 0;

void setup() {
  pinMode(3, OUTPUT);
 
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  value = analogRead(A0);
  Serial.println(value);

  if (value >= 800) {
    digitalWrite(3, LOW);
    Serial.println("High moisture");
  } else if (value > 600 && value < 800) {
    digitalWrite(3, LOW);
    Serial.println("Medium moisture");  
  } else {
    digitalWrite(3, LOW);
    Serial.println("Low moisture");
  }

  delay(500);
}