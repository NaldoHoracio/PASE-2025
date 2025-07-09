/*
 * Author: Edvonaldo Horácio (edvonaldo.santos@ifal.edu.br)
 * Data: 25/06/2025
 * Descrição: Este programa é a implementação de um semáforo
 * usando Arduino UNO
*/

#define TEMPO_ON_VERMELHO 500
#define TEMPO_OFF_VERMELHO 250
#define TEMPO_ON_AMARELO 800
#define TEMPO_OFF_AMARELO 400
#define TEMPO_ON_VERDE 600
#define TEMPO_OFF_VERDE 300


#define LED_VERMELHO 8// Definindo LED_VERMELHO como 8
#define LED_AMARELO 9// Definindo LED_AMARELO como 9
#define LED_VERDE 10// Definindo LED_VERDE como 10

/**!
 * @apresentacao Esta função faz um LED piscar 
 * um determinado número de vezes
 *
 * @parametro pinoLed: um inteiro que recebe o valor do pino do led
 * @parametro qtdeDeVezes: um inteiro que recebe a quantidade de vezes que o led vai piscar
 * @retval
 */
void piscarLed(int pinoLed, int qtdeDeVezes, int tempoOn, int tempoOff)
{
  for(int i = 0; i < qtdeDeVezes; ++i)
  {
    digitalWrite(pinoLed, HIGH);
    delay(tempoOn);
    digitalWrite(pinoLed, LOW);
    delay(tempoOff);
  }
}


void setup()
{
  pinMode(LED_VERMELHO, OUTPUT);// Led vermelho
  pinMode(LED_AMARELO, OUTPUT);// Led amarelo
  pinMode(LED_VERDE, OUTPUT);// Led verde  
}

void loop()
{
  piscarLed(LED_VERMELHO, 5, TEMPO_ON_VERMELHO, TEMPO_OFF_VERMELHO);
  piscarLed(LED_AMARELO, 3, TEMPO_ON_AMARELO, TEMPO_OFF_AMARELO);
  piscarLed(LED_VERDE, 10, TEMPO_ON_VERDE, TEMPO_OFF_VERDE);
}