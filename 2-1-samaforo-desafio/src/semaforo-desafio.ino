/*
 * Author: Edvonaldo Horácio (edvonaldo.santos@ifal.edu.br)
 * Data: DD/MM/YYYY
 * Descrição: Este programa imprime na tela "Ola mundo 3 vezes"
*/
int ledVermelho = 8;
int ledAmarelo = 9;
int ledVerde = 10;

/**!
 * @brief Breve descrição da função
 * 
 * @param pino é um inteiro
 * @param vezes é um inteiro indicando quantas vezes o led piscou
 * @param nome é uma string indicando qual led eh
 * @retval vazio
 */

void piscarLed(int pino, int vezes, String nome) {
  Serial.print("Piscando LED ");
  Serial.print(nome);
  Serial.print(" ");
  Serial.print(vezes);
  Serial.println(" vezes");

  for (int i = 0; i < vezes; i++) {
    digitalWrite(pino, HIGH);
    delay(500);
    digitalWrite(pino, LOW);
    delay(500);
  }
}

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);

  //Serial.begin(9600); // Inicia comunicação serial
}

void loop() {
  piscarLed(ledVermelho, 5, "vermelho");
  piscarLed(ledAmarelo, 3, "amarelo");
  piscarLed(ledVerde, 10, "verde");
}
