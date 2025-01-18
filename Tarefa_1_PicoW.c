#include "pico/stdlib.h"
#include <stdio.h>

#define RED_LED 13
#define GREEN_LED 11 // Definição dos LEDs
#define BLUE_LED 12

#define BUZZER 21 // Definição do buzzer

const uint col[4] = {4, 3, 2, 1}; // Definição dos pinos do teclado
const uint rw[4] = {8, 7, 6, 5};  // com as portas GPIO

char lastKey = ' '; // última tecla pressionada
const char keysMap[16] = {
    '1', '2', '3', 'A',
    '4', '5', '6', 'B',
    '7', '8', '9', 'C',
    '*', '0', '#', 'D'};

// Configurar os pinos GPIO para entrada/saída
void setup_pins()
{
    gpio_init(RED_LED);
    gpio_set_dir(RED_LED, GPIO_OUT);
    gpio_put(RED_LED, 0);

    gpio_init(GREEN_LED);
    gpio_set_dir(GREEN_LED, GPIO_OUT);
    gpio_put(GREEN_LED, 0);

    gpio_init(BLUE_LED);
    gpio_set_dir(BLUE_LED, GPIO_OUT);
    gpio_put(BLUE_LED, 0);

    gpio_init(BUZZER);
    gpio_set_dir(BUZZER, GPIO_OUT);
    gpio_put(BUZZER, 0);

    for (int i = 0; i < 4; i++)
    {
        // Configura a linha para saida e deixa desativado
        gpio_init(rw[i]);
        gpio_set_dir(rw[i], GPIO_OUT);
        gpio_put(rw[i], 1);

        // Configura a coluna para entrada
        gpio_init(col[i]);
        gpio_set_dir(col[i], GPIO_IN);
        gpio_pull_up(col[i]);
    }
}

// Função para verificar qual tecla foi pressionada
char get_key()
{
    char res = ' ';
    for (int r = 0; r < 4; r++)
    {
        gpio_put(rw[r], 0); // Colocar linha atual em estado baixo

        for (int c = 0; c < 4; c++)
        {
            sleep_ms(5); // Aguardar 5ms
            if (gpio_get(col[c]) == 0)
            {
                gpio_put(rw[r], 1); // Restaurar linha para estado alto
                const char key = keysMap[r * 4 + c];
                res = key; // Retornar o valor da tecla pressionada
            }
        }
        gpio_put(rw[r], 1);
    }
    if (res == ' ' || res != lastKey)
    {
        lastKey = res;
        if (res != ' ')
            printf("Tecla: %c\n", res);
        return res;
    }
    else
        return ' ';
}

int main()
{
    stdio_init_all(); // Para imprimir na serial
    setup_pins();     // Configurar os pinos do teclado

    while (1)
    {
        char key = get_key(); // TECLA IDENTIFICADA

        sleep_ms(10);
    }
    return 0;
}
