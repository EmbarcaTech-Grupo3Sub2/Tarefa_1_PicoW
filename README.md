# Controle de pinos GPIO com o emprego de um teclado matricial.

## Descrição
Com o auxílio do simulador de eletrônica Wokwi, utilize um teclado matricial 4x4 (ilustrado na Figura 1) para controlar determinados pinos GPIO do microcontrolador RP2040, presente na placa de desenvolvimento Raspberry Pi Pico W. Para esta atividade, realize o acionamento de 03 LEDs (tipo RGB), juntamente com o controle do sinal sonoro de um buzzer. Nesta prática, será necessário simular os seguintes componentes:

1) Teclado matricial 4x4.
2) 03 LEDs – tipo RGB.
3) Componente Buzzer.
4) Microcontrolador Raspberry Pi Pico W


## Funcionalidades
As estratégias de acionamento dos LEDs e de geração do sinal elétrico do buzzer ficarão a critério da equipe de desenvolvimento. Contudo, em caráter sugestivo, é apresentado um vídeo com uma prática de simulação associada a esta tarefa, onde da letra A até C, aciona cada uma das leds separadamente, e ao apertar na letra D todas ledes são acionadas. O buzzer é acionado ao apertar no botão # do teclado. No caso desta atividade, em virtude de o teclado matricial não ser um periférico presente na placa BitDogLab, não é necessária/obrigatória a realização de um experimento com hardware real. 


## Como compilar
Para compilar o programa, utilize um compilador C, e rode o código para geração do arquivo `.uf2` e `.elf`. Segue um exemplo:

![botao compilador](photos_readme/compilador.png)

## Como executar
Após a compilação, execute o simulador Wokwi clicando no arquivo `diagram.json`:

![circuito](photos_readme/circuito.png)


Para testar, só clicar no play e explorar o circutio.

## Exemplo de uso
1. Clique no botão A e a luz acenderá
2. Clique no botão B e a luz acenderá
3. Clique no botão C e a luz acenderá
4. Clique no botão D e a luz acenderá
5. Clique no botão # e a luz acenderá

## Requisitos
- Compilador C (gcc ou equivalente).
- Sistema operacional compatível com programas C.
- Extensão Raspberry Pi Pico 
- Wokwi conectado no VS Code

## Desenvolvedores
Equipe 2 - Grupo 3 - EmbarcaTech
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