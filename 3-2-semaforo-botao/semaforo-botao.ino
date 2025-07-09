void setup() {
  // indicando para o arduíno quais portas vamos usar
  pinMode(13, OUTPUT);// Vermelho
  pinMode(12, OUTPUT);// Amarelo
  pinMode(11, OUTPUT);// Verde
}
 
void loop() {
  digitalWrite(13, HIGH);// Vermelho
  digitalWrite(12, LOW);// Amarelo
  digitalWrite(11, LOW);// Verde
  delay(2000);
  digitalWrite(13, LOW);// Vermelho
  digitalWrite(12, HIGH);// Amarelo
  digitalWrite(11, LOW);// Verde
  delay(2000);
  digitalWrite(13, LOW);// Vermelho
  digitalWrite(12, LOW);// Amarelo
  digitalWrite(11, HIGH);// Verde
  delay(2000);
}