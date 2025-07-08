/*
 * Author: Edvonaldo Horácio (edvonaldo.santos@ifal.edu.br)
 * Data: 25/06/2025
 * Descrição: Este programa liga um LED na porta 8
 * usando Arduino UNO
*/

void setup() 
{
  // indicando para o arduino quais portas vamos usar
  pinMode(8, OUTPUT);// Vermelho
}
 
void loop() 
{
  digitalWrite(8, HIGH);// Vermelho
  delay(2000);
  digitalWrite(8, LOW);// Vermelho
  delay(2000);
}