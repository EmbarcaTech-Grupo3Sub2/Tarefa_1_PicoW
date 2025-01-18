#include "pico/stdlib.h"
#include <stdio.h>

#define RED_LED 13
#define GREEN_LED 11    // Definição dos LEDs
#define BLUE_LED 12

#define BUZZER 21       // Definição do buzzer

const uint col[4] = {4, 3, 2, 1};   // Definição dos pinos do teclado
const uint rw[4] = {8, 7, 6, 5};    // com as portas GPIO
5
const char keysMap[4][4] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}
};  

int main() {
    // Inicialização do sistema
    stdio_init_all();

    // Inicializa o pino do buzzer como saída
    gpio_init(BUZZER);
    gpio_set_dir(BUZZER, GPIO_OUT);

    while (true) {
        // Leitura do teclado matricial seria implementada aqui
        char key = 'A'; // Exemplo de tecla 'A' sendo pressionada

        if (key == 'A') { // Verifica se a tecla 'A' foi pressionada
            gpio_put(BUZZER, 1); // Liga o buzzer
            sleep_ms(200);       // Mantém o buzzer ligado por 200ms
            gpio_put(BUZZER, 0); // Desliga o buzzer
        }

        sleep_ms(100); 
    }

    return 0;
}
