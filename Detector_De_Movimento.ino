int ledPin = 4; 
int pirPin = 2;  
int pirState = LOW; 
int val = 0; 

void setup() {
  pinMode(ledPin, OUTPUT); 
  pinMode(pirPin, INPUT);  
  Serial.begin(9600); 
}

void loop() {
  val = digitalRead(pirPin); 
  if (val == HIGH) { 
    digitalWrite(ledPin, HIGH); 
    if (pirState == LOW) {
      Serial.println("Movimento detectado!"); 
      pirState = HIGH; 
    }
  } else {
    digitalWrite(ledPin, LOW);
    if (pirState == HIGH) {
      Serial.println("Movimento encerrado!"); 
      pirState = LOW; 
    }
  }
}
