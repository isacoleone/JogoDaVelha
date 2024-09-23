#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define LINHA 3
#define COLUNA 3

// Função para imprimir o tabuleiro e pedir para o jogador escolher a posição que deseja jogar
void tabuleiro(char matriz[LINHA][COLUNA], char *letra) {
    printf("___%c___|___%c___|___%c___\n", matriz[0][0], matriz[0][1], matriz[0][2]);
    printf("___%c___|___%c___|___%c___\n", matriz[1][0], matriz[1][1], matriz[1][2]);
    printf("___%c___|___%c___|___%c___\n", matriz[2][0], matriz[2][1], matriz[2][2]);

    printf("Escolha uma posicao: ");
    fflush(stdin);
    scanf(" %c", letra);

    system("CLS");
}

// Função para verificar se houve vitória
bool ganhou(char matriz[LINHA][COLUNA]) {
    bool ganhou = false;

    // Vitória na horizontal
    for (int i = 0; i < LINHA; i++) {
        if (matriz[i][0] == matriz[i][1] && matriz[i][1] == matriz[i][2]) {
            ganhou = true;
        }
    }

    // Vitória na vertical
    for (int i = 0; i < COLUNA; i++) {
        if (matriz[0][i] == matriz[1][i] && matriz[1][i] == matriz[2][i]) {
            ganhou = true;
        }
    }

    // Vitória na diagonal
    if ((matriz[0][0] == matriz[1][1] && matriz[1][1] == matriz[2][2]) || (matriz[0][2] == matriz[1][1] && matriz[1][1] == matriz[2][0])) {
        ganhou = true;
    }

    return ganhou;
}

int main() {
    bool fimDoJogo = false;
    char escolha = ' ';
    char matriz[LINHA][COLUNA] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}};

    // Definindo que o jogo continuará por 9 rodadas e enquanto nenhum jogador tiver ganhado
    for (int i = 1; i <= 9 && !fimDoJogo; i++) {
        printf("RODADA %d\n", i);

        // Chamando a função para imprimir o tabuleiro e escolher a posição
        tabuleiro(matriz, &escolha);
        
        // Atribuindo o 'X' ao primeiro jogador
        if (i % 2 != 0) {
            switch (escolha) {
            case 'a':
                if (matriz[0][0] != 'a') {      // Verificando se a posição ja foi escolhida
                    printf("Essa posicao ja foi escolhida\n");  // Se tiver sido escolhida a rodada não conta
                    i--;                                        
                }
                else {
                    matriz[0][0] = 'X';
                }
                break;

            case 'b':
                if (matriz[0][1] != 'b') {         
                    printf("Essa posicao ja foi escolhida\n");
                    i--;
                }
                else {
                    matriz[0][1] = 'X';
                }
                break;

            case 'c':
                if (matriz[0][2] != 'c') {
                    printf("Essa posicao ja foi escolhida\n");
                    i--;
                }
                else {
                    matriz[0][2] = 'X';
                }
                break;

            case 'd':
                if (matriz[1][0] != 'd') {
                    printf("Essa posicao ja foi escolhida\n");
                    i--;
                }
                else {
                    matriz[1][0] = 'X';
                }
                break;

            case 'e':
                if (matriz[1][1] != 'e') {
                    printf("Essa posicao ja foi escolhida\n");
                    i--;
                }
                else {
                    matriz[1][1] = 'X';
                }
                break;

            case 'f':
                if (matriz[1][2] != 'f') {
                    printf("Essa posicao ja foi escolhida\n");
                    i--;
                }
                else {
                    matriz[1][2] = 'X';
                }
                break;

            case 'g':
                if (matriz[2][0] != 'g') {
                    printf("Essa posicao ja foi escolhida\n");
                    i--;
                }
                else {
                    matriz[2][0] = 'X';
                }
                break;

            case 'h':
                if (matriz[2][1] != 'h') {
                    printf("Essa posicao ja foi escolhida\n");
                    i--;
                }
                else {
                    matriz[2][1] = 'X';
                }
                break;

            case 'i':
                if (matriz[2][2] != 'i') {
                    printf("Essa posicao ja foi escolhida\n");
                    i--;
                }
                else {
                    matriz[2][2] = 'X';
                }
                break;

            default:
                printf("Opcao invalida\n");   // Caso escolha uma letra diferente das do tabuleiro
                i--;
                break;
            }
        }

        // Deixando o 'O' com segundo jogador
        else {
            switch (escolha) {
            case 'a':
                if (matriz[0][0] != 'a') {        // Verificando se a posição ja foi escolhida
                    printf("Essa posicao ja foi escolhida\n");  // Se tiver sido escolhida a rodada não conta
                    i--;
                }
                else {
                    matriz[0][0] = 'O';
                }
                break;

            case 'b':
                if (matriz[0][1] != 'b') {
                    printf("Essa posicao ja foi escolhida\n");
                    i--;
                }
                else {
                    matriz[0][1] = 'O';
                }
                break;

            case 'c':
                if (matriz[0][2] != 'c') {
                    printf("Essa posicao ja foi escolhida\n");
                    i--;
                }
                else {
                    matriz[0][2] = 'O';
                }
                break;

            case 'd':
                if (matriz[1][0] != 'd') {
                    printf("Essa posicao ja foi escolhida\n");
                    i--;
                }
                else {
                    matriz[1][0] = 'O';
                }
                break;

            case 'e':
                if (matriz[1][1] != 'e') {
                    printf("Essa posicao ja foi escolhida\n");
                    i--;
                }
                else {
                    matriz[1][1] = 'O';
                }
                break;

            case 'f':
                if (matriz[1][2] != 'f') {
                    printf("Essa posicao ja foi escolhida\n");
                    i--;
                }
                else {
                    matriz[1][2] = 'O';
                }
                break;

            case 'g':
                if (matriz[2][0] != 'g') {
                    printf("Essa posicao ja foi escolhida\n");
                    i--;
                }
                else {
                    matriz[2][0] = 'O';
                }
                break;

            case 'h':
                if (matriz[2][1] != 'h') {
                    printf("Essa posicao ja foi escolhida\n");
                    i--;
                }
                else {
                    matriz[2][1] = 'O';
                }
                break;

            case 'i':
                if (matriz[2][2] != 'i') {
                    printf("Essa posicao ja foi escolhida\n");
                    i--;
                }
                else {
                    matriz[2][2] = 'O';
                }
                break;

            default:
                printf("Opcao invalida\n");
                i--;
                break;
            }
        }

        // Atribuindo o retorno da função usada para verificar se algum jogador ganhou 
        fimDoJogo = ganhou(matriz);

        // Caso houver ganhador
        if (fimDoJogo) {
            printf("Parabens! "); 

            if (i % 2 != 0) {
                printf("X ganhou");
            }
            else {
                printf("O ganhou");
            }
        }
        // Caso não houver ganhador ao final do jogo
        else if (i == 9) {
            printf("Empate");
        }
    }

    return 0;
}