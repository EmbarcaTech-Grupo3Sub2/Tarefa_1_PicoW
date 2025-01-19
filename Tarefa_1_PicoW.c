#include "pico/stdlib.h"
#include <stdio.h>

#define RED_LED 13
#define GREEN_LED 11    // Definição dos LEDs
#define BLUE_LED 12

#define BUZZER 21       // Definição do buzzer

const uint col[4] = {4, 3, 2, 1};   // Definição dos pinos do teclado
const uint rw[4] = {8, 7, 6, 5};    // com as portas GPIO

const char keysMap[4][4] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}
};  

char lastKey = ' '; // última tecla pressionada
const char keysFlatMap[16] = {
    '1', '2', '3', 'A',
    '4', '5', '6', 'B',
    '7', '8', '9', 'C',
    '*', '0', '#', 'D'};

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
        gpio_init(rw[i]);
        gpio_set_dir(rw[i], GPIO_OUT);
        gpio_put(rw[i], 1);

        gpio_init(col[i]);
        gpio_set_dir(col[i], GPIO_IN);
        gpio_pull_up(col[i]);
    }
}

char get_key()
{
    char res = ' ';
    for (int r = 0; r < 4; r++)
    {
        gpio_put(rw[r], 0);

        for (int c = 0; c < 4; c++)
        {
            sleep_ms(5);
            if (gpio_get(col[c]) == 0)
            {
                gpio_put(rw[r], 1);
                const char key = keysFlatMap[r * 4 + c];
                res = key;
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

void action(char key){
    switch (key)
    {
    case 'A':
        printf("acende led vermelho\n");
        //chama função que acende o led vermelho
        break;
    
    case 'B':
        printf("acende led azul\n");
        //chama função que acende o led azul
        break;
    case 'C':
        printf("acende led verde\n");
        //chama função que acende o led verde
        break;
    case 'D':
        printf("acende os tres\n");
        //chama a função que acende os três leds
        break;
    
    }
}

void led_red(){
    gpio_put(GREEN_LED, 0);
    gpio_put(BLUE_LED, 0);
    gpio_put(RED_LED, 1);
    sleep(2000);
    gpio_put(RED_LED, 0);
}

void led_green(){
    gpio_put(GREEN_LED, 1);
    gpio_put(BLUE_LED, 0);
    gpio_put(RED_LED, 0);
    sleep(2000);
    gpio_put(GREEN_LED, 0);
}

void led_blue(){
    gpio_put(GREEN_LED, 0);
    gpio_put(BLUE_LED, 1);
    gpio_put(RED_LED, 0);
    sleep(2000);
    gpio_put(BLUE_LED, 0);
}

void leds_all_on(){
    gpio_put(GREEN_LED, 1);
    gpio_put(BLUE_LED, 1);
    gpio_put(RED_LED, 1);
    sleep(2000);
    gpio_put(GREEN_LED, 0);
    gpio_put(BLUE_LED, 0);
    gpio_put(RED_LED, 0);
}



int main()
{
    stdio_init_all();
    setup_pins();

    while (1)
    {

        
        char key = get_key();
        action(get_key());
        if (key == 'A')
        {
            gpio_put(BUZZER, 1);
            sleep_ms(200);
            gpio_put(BUZZER, 0);
        }


        sleep_ms(100);
    }

    return 0;
} 