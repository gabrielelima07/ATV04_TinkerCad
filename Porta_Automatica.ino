int pirPin = 3; 
int relayPin = 2; 
int pirState = LOW; 

void setup() {
  pinMode(pirPin, INPUT); 
  pinMode(relayPin, OUTPUT); 
  Serial.begin(9600); 
}

void loop() {
  int motionDetected = digitalRead(pirPin); 

  if (motionDetected == HIGH) { 
    digitalWrite(relayPin, HIGH); 
    if (pirState == LOW) {
      Serial.println("Porta aberta: Movimento detectado!"); 
      pirState = HIGH; 
    }
  } else {
    digitalWrite(relayPin, LOW); 
    if (pirState == HIGH) {
      Serial.println("Porta fechada: Nenhum movimento detectado!"); 
      pirState = LOW; 
    }
  }
}