/*
 * Author: Edvonaldo Horácio (edvonaldo.santos@ifal.edu.br)
 * Data: 25/06/2025
 * Descrição: Este programa é a implementação de um semaforo2
 * usando Arduino UNO
*/

#define TEMPO_ON_VERMELHO 4000// Tempo que o LED vermelho fica aceso
#define TEMPO_ON_AMARELO 3000// Tempo que o LED amarelo fica aceso
#define TEMPO_ON_VERDE 5000// Tempo que o LED verde fica aceso

#define LED_VERMLEHO 8// Definindo LED_VERMELHO como 8
#define LED_AMARELO 9// Definindo LED_AMARELO como 9
#define LED_VERDE 10// Definindo LED_VERDE como 10

/**!
 * @apresentacao Função setup
 *
 *
 * @parametro 
 * @retval
 */
void setup()
{
  pinMode(LED_VERMLEHO, OUTPUT);// Led vermelho
  pinMode(LED_AMARELO, OUTPUT);// Led amarelo
  pinMode(LED_VERDE, OUTPUT);// Led verde  
}


/**!
 * @apresentacao Função loop
 *
 * Esta função executa as instruções que o 
 * arduino irá executar. Equivale a main do C++
 *
 * @parametro 
 * @retval
 */
void loop()
{
  digitalWrite(LED_VERMLEHO, HIGH);
  delay(TEMPO_ON_VERMELHO);
  digitalWrite(LED_VERMLEHO, LOW);
  
  digitalWrite(LED_VERDE, HIGH);
  delay(TEMPO_ON_VERDE);
  digitalWrite(LED_VERDE, LOW);

  digitalWrite(LED_AMARELO, HIGH);
  delay(TEMPO_ON_AMARELO);
  digitalWrite(LED_AMARELO, LOW);
}