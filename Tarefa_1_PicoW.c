#include "pico/stdlib.h"
#include <stdio.h>

#define RED_LED 13
#define GREEN_LED 11    // Definição dos LEDs
#define BLUE_LED 12

#define BUZZER 21    // Definição do buzzer

const uint col[4] = {4, 3, 2, 1};   // Definição dos pinos do teclado
const uint rw[4] = {8, 7, 6, 5};    // com as portas GPIO

const char keysMap = {
    '1', '2', '3', 'A',
    '4', '5', '6', 'B',
    '7', '8', '9', 'C',
    '*', '0', '#', 'D'
};  

int main(){
    //Primary function
    return 0;
}