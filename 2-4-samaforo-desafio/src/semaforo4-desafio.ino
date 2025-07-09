/*
 * Author: Edvonaldo Horácio (edvonaldo.santos@ifal.edu.br)
 * Data: 25/06/2025
 * Descrição: Este programa é a implementação de um semáforo
 * usando Arduino UNO
*/

#define TEMPO_ON_VERMELHO 1500
#define TEMPO_OFF_VERMELHO 250
#define TEMPO_ON_AMARELO 1500
#define TEMPO_OFF_AMARELO 250
#define TEMPO_ON_VERDE 1500
#define TEMPO_OFF_VERDE 250

#define LED_VERMELHO 8// Definindo LED_VERMELHO como 8
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
  pinMode(LED_VERMELHO, OUTPUT);// Led vermelho
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
  int i;
  for(i = 0; i < 5; ++i)
  {
    digitalWrite(LED_VERMELHO, HIGH);
    delay(TEMPO_ON_VERMELHO);
    digitalWrite(LED_VERMELHO, LOW);
    delay(TEMPO_OFF_VERMELHO);
  }

  for(i = 0; i < 3; ++i)
  {
    digitalWrite(LED_AMARELO, HIGH);
    delay(TEMPO_ON_AMARELO);
    digitalWrite(LED_AMARELO, LOW);
    delay(TEMPO_OFF_AMARELO);
  }

  for(i = 0; i < 10; ++i)
  {
    digitalWrite(LED_VERDE, HIGH);
    delay(TEMPO_ON_VERDE);
    digitalWrite(LED_VERDE, LOW);
    delay(TEMPO_OFF_VERDE);
  }
}