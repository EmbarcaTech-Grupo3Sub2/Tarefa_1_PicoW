# Controle de pinos GPIO com o emprego de um teclado matricial.

## Descrição
Com o auxílio do simulador de eletrônica Wokwi, utilizamos um teclado matricial 4x4 para controlar determinados pinos GPIO do microcontrolador RP2040, presente na placa de desenvolvimento Raspberry Pi Pico W. Para esta atividade, realizamos o acionamento de 03 LEDs (tipo RGB), juntamente com o controle do sinal sonoro de um buzzer. Foram utilizados os seguintes componentes:

1) Teclado matricial 4x4.
2) 03 LEDs – tipo RGB.
3) Componente Buzzer.
4) Microcontrolador Raspberry Pi Pico W


## Funcionalidades
Com o uso do teclado matricial, 5 teclas (A, B, C, D, #) têm funções especefícas, sendo elas: 

  1. Clique no botão A e o LED vermelho acenderá
  2. Clique no botão B e o LED azul acenderá
  3. Clique no botão C e a LED verde acenderá
  4. Clique no botão D e todos os LEDs acenderam
  5. Clique no botão # e o Buzzer será ativado

  [Vídeo de Demonstração](https://www.dropbox.com/scl/fi/h5y34hobbbjy036jyrtj3/Tarefa-1-Pico-W.mp4?rlkey=if5mamdfwq7wf4zrswppt052u&st=fgnm1p39&dl=0)

## Como compilar
Para compilar o programa, utilize um compilador C, e rode o código para geração do arquivo `.uf2` e `.elf`. Segue um exemplo:

![botao compilador](photos_readme/compilador.png)

## Como executar
Após a compilação, execute o simulador Wokwi clicando no arquivo `diagram.json`:

![circuito](photos_readme/circuito.png)

Para testar, só clicar no play e explorar o circutio.

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
