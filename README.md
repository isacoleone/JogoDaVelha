# Jogo da Velha em C

Este é um projeto simples de um **Jogo da Velha** (ou "Tic-Tac-Toe") implementado em linguagem C. O jogo é jogado no terminal, onde dois jogadores humanos competem alternadamente.

## Regras do Jogo
- Dois jogadores se enfrentam em um tabuleiro 3x3.
- Um jogador utiliza o símbolo `X` e o outro o `O`.
- O objetivo é alinhar três símbolos iguais em uma linha, coluna ou diagonal.
- O jogo termina quando um dos jogadores vence ou quando todas as posições estão preenchidas (empate).

## Como Jogar

1. **Compile o código fonte:**
   ```bash
   gcc -o main main.c
2. **Execute o jogo:**
   ```bash
   ./main.exe
3. **Fazendo uma Jogada:**
- O jogador deve escolher uma posição de 'a' a 'i' correspondente a um espaço vazio no tabuleiro.
- O jogador X joga primeiro, seguido pelo jogador O.
- Após cada jogada, o tabuleiro será atualizado e mostrado novamente no terminal.
  
4. **Condições de Vitória:**
Um jogador vence ao alinhar três símbolos iguais (X ou O) em uma linha, coluna ou diagonal.

5. **Empate:**
Se todas as posições do tabuleiro forem preenchidas e nenhum jogador alinhar três símbolos, o jogo termina em empate.

6. **Reiniciando o Jogo:**
Após o término de uma partida, os jogadores podem optar por reiniciar o jogo e jogar novamente.

## Funcionalidades
- Tabuleiro dinâmico que atualiza após cada jogada.
- Detecção automática de vitória ou empate.
- Jogabilidade simples e interativa via terminal.

## Exemplo de Interface
  
     a | b | c 
    -----------
     d | e | f 
    -----------
     g | h | i

## Requisitos
**Sistema Operacional:** Qualquer sistema operacional que suporte o compilador GCC.

**Compilador:** GCC (ou compatível).

## Contribuições
Contribuições são bem-vindas! Se você encontrar problemas ou tiver sugestões de melhorias, sinta-se à vontade para abrir uma issue ou enviar um pull request.

