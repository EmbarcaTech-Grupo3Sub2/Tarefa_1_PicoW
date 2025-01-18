#  Controle de pinos GPIO com o emprego de um teclado matricial.

## Descrição
Com o auxílio do simulador de eletrônica Wokwi, utilize um teclado matricial 4x4 (ilustrado na Figura 1) para controlar determinados pinos GPIO do microcontrolador RP2040, presente na placa de desenvolvimento Raspberry Pi Pico W. Para esta atividade, realize o acionamento de 03 LEDs (tipo RGB), juntamente com o controle do sinal sonoro de um buzzer. Nesta prática, será necessário simular os seguintes componentes:

1) Teclado matricial 4x4.
2) 03 LEDs – tipo RGB.
3) Componente Buzzer.
4) Microcontrolador Raspberry Pi Pico W


## Funcionalidades
As estratégias de acionamento dos LEDs e de geração do sinal elétrico do buzzer ficarão a critério da equipe de desenvolvimento. Contudo, em caráter sugestivo, é apresentado um vídeo com uma prática de simulação associada a esta tarefa, onde da letra A até C, aciona cada uma das leds separadamente, e ao apertar na letra D todas ledes são acionadas. O buzzer é acionado ao apertar no botão # do teclado. No caso desta atividade, em virtude de o teclado matricial não ser um periférico presente na placa BitDogLab, não é necessária/obrigatória a realização de um experimento com hardware real. 



## Estrutura do Projeto
O projeto está dividido em arquivos individuais para cada tipo de unidade:

    ├── libs
        │ ├── comprimento.c
        │ ├── massa.c
        │ ├── volume.c
        │ ├── temperatura.c
        │ ├── velocidade.c
        │ ├── eletricidade.c
        │ ├── area.c
        │ ├── tempo.c
        │ ├── armazenamento.c
        │ ├── IU.c
    └── main.c
    └── README.md

## Como Compilar
Para compilar o programa, utilize um compilador C, como `gcc`. Segue um exemplo:

```bash
gcc -o conversor main.c
```

## Como Executar
Após a compilação, execute o programa com o comando:

```bash
./conversor
```

O menu interativo será exibido, permitindo ao usuário selecionar o tipo de unidade para conversão.

## Exemplo de Uso
1. Escolha o tipo de unidade no menu principal (ex: 1 para comprimento).
2. Informe a conversão desejada (ex: 1 para Metros --> Centímetros)
3. Insira o valor a ser convertido.
4. O programa exibirá o resultado da conversão.

## Requisitos
- Compilador C (gcc ou equivalente).
- Sistema operacional compatível com programas C.
- Extensão Raspberry Pi Pico 

## Desenvolvedores
- [Lucas Luige](https://github.com/lluigecm)
- [Evelyn Suzarte](https://github.com/Evelynsuzarte)
- [Caio Natividade](https://github.com/CaioNatividade)
- [Luiz Marcelo](https://github.com/devluinix)
- [Thiago Ribeiro](https://github.com/devthiagoribeiro)
- [Mateus Coelho](https://github.com/mateuscoelhw)
- [Daniel Santos](https://github.com/DanielSantos08)
- [Luan Pereira](https://github.com/naulcs)
- [Maria Vitória](https://github.com/MaryVickk)
- [Joel Santos](https://github.com/JoelSantos-JS)