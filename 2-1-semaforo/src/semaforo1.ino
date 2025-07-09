/*
 * Author: Edvonaldo Horácio (edvonaldo.santos@ifal.edu.br)
 * Data: 25/06/2025
 * Descrição: Este programa é a implementação de um semaforo1
 * usando Arduino UNO
*/

/**!
 * @apresentacao Função setup
 */
void setup()
{
  pinMode(8, OUTPUT);// Led vermelho
  pinMode(9, OUTPUT);// Led amarelo
  pinMode(10, OUTPUT);// Led verde  
}


/**!
 * @apresentacao Função loop
 * Esta função insere as instruções que o 
 * arduino irá executar. Equivale a main do C++
 */
void loop()
{
  digitalWrite(8, HIGH);// Liga LED vermelho
  delay(4000);
  digitalWrite(8, LOW);// Desliga LED vermelho
  
  digitalWrite(10, HIGH);// Liga LED verde
  delay(5000);
  digitalWrite(10, LOW);// Desliga LED verde

  digitalWrite(9, HIGH);// Liga LED amarelo
  delay(3000);
  digitalWrite(9, LOW);// Desliga LED amarelo
}