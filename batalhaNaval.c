#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
// Nível: novato

int tabuleiro[10][10];
int navio1[3]={3,3,3};
int navio2[3]={3,3,3};

void exibirTabuleiro(){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%d ",tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    //Inicializando tabuleiro com zeros representando a água
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            tabuleiro[i][j]=0;
        }
    }
    printf("Posicao inicial do tabuleirio:\n");
    exibirTabuleiro();

    //posicao inicial dos navios
    int posicaoA[2]={2,3};//Horizontal
    int posicaoB[2]={5,5};//Vertical
    
    
    //alocando os navios no tabuleiro
    //Navio 1
    printf("\nAlocando Navio 1\n");
    printf("Linha %d - Coluna %d\n",posicaoA[0],posicaoA[1]);
    for(int i=posicaoA[0]-1,j=posicaoA[1]-1;j<=(posicaoA[0]+2);j++){
        tabuleiro[i][j]=navio1[0];//preencher tabuleiro com o navio 1 na horizontal
    }
    //Navio 2
    printf("\nAlocando Navio 2\n");
    printf("Linha %d - Coluna %d\n",posicaoB[0],posicaoB[1]);
    for(int i=posicaoB[0]-1,j=posicaoB[1]-1;i<=(posicaoB[0]+2);i++){
        tabuleiro[i][j]=navio2[0];//preencher tabuleiro com o navio 1 na vertical
    }
    printf("\nTabuleiro atualizado:\n");
    exibirTabuleiro();
    return 0;
}

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
