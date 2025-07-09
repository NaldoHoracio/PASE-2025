/*
 * Author: Edvonaldo Horácio (edvonaldo.santos@ifal.edu.br)
 * Data: 25/06/2025
 * Descrição: Este programa é a implementação de um semáforo
 * usando Arduino UNO
*/

#define TEMPO_ON_VERMELHO 1000
#define TEMPO_ON_AMARELO 1000
#define TEMPO_ON_VERDE 1000

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
  int i = 0;

  do{
    digitalWrite(LED_VERMELHO, HIGH);
    delay(TEMPO_ON_VERMELHO);
    digitalWrite(LED_VERMELHO, LOW);
    delay(1000);
    i++;
  }while(i < 5);
  
  i = 0;

  do{
    digitalWrite(LED_AMARELO, HIGH);
    delay(TEMPO_ON_AMARELO);
    digitalWrite(LED_AMARELO, LOW);
    delay(1000);
    i++;
  }while(i < 5);

  i = 0;
  do{
    digitalWrite(LED_VERDE, HIGH);
    delay(TEMPO_ON_VERDE);
    digitalWrite(LED_VERDE, LOW);
    delay(1000);
    i++;
  }while(i < 5);
}