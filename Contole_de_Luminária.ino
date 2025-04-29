int ldrPin = A0; 
int relayPin = 2; 
int ldrValue = 0; // Variável para armazenar o valor lido do LDR
int threshold = 600; // Limite de luminosidade para acionar a luz 

void setup() {
  pinMode(relayPin, OUTPUT); // relé como saída
  Serial.begin(9600); // Inicializa a comunicação 
}

void loop() {
  ldrValue = analogRead(ldrPin); // Lê o valor do LDR
  Serial.print("Luminosidade: "); 
  Serial.println(ldrValue); // Exibe o valor no monitor 
  
  if (ldrValue < threshold) { // Se a luminosidade estiver abaixo do limite
    digitalWrite(relayPin, HIGH); // Ativa o relé para ligar a luminária
    Serial.println("Luminária ligada!");
  } else { // Se a luminosidade estiver acima do limite
    digitalWrite(relayPin, LOW); // Desativa o relé para desligar a luminária
    Serial.println("Luminária desligada!");
  }
  
  delay(1000); 
}