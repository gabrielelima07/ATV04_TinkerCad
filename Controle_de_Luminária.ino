int ldrPin = A0; 
int relayPin = 2; 
int ldrValue = 0;
int threshold = 600; 

void setup() {
  pinMode(relayPin, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  ldrValue = analogRead(ldrPin); 
  Serial.print("Luminosidade: "); 
  Serial.println(ldrValue); 
  
  if (ldrValue < threshold) { 
    digitalWrite(relayPin, HIGH);
    Serial.println("Luminária ligada!");
  } else { 
    digitalWrite(relayPin, LOW); 
    Serial.println("Luminária desligada!");
  }
  
  delay(1000); 
}
