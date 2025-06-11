#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
// Nível: Aventureiro

//Tabuleiro
int tabuleiro[10][10];

//Navios
int navio1[3]={3,3,3};
int navio2[3]={3,3,3};
int navio3[3]={3,3,3};
int navio4[3]={3,3,3};

//Posicao inicial dos navios
int posicaoA[2]={2,3};//Horizontal
int posicaoB[2]={5,5};//Vertical
int posicaoC[2]={8,1};//Diagonal
int posicaoD[2]={3,6};//Diagonal

//Função para exibir tabuleiro
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
    printf("\nInicializando o jogo!\nCriando tabuleiro!\n");
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            tabuleiro[i][j]=0;
        }
    }
    printf("Tabuleiro criado!\n");
    exibirTabuleiro();
 
    //alocando os navios no tabuleiro
    //Navio 1
    printf("\nAlocando Navio 1 - ");
    printf("Linha %d - Coluna %d\n",posicaoA[0],posicaoA[1]);
    for(int i=posicaoA[0]-1,j=posicaoA[1]-1;j<=posicaoA[0]+2;j++){
        tabuleiro[i][j]=navio1[0];//preencher tabuleiro com o navio 1 na horizontal
    }
    //Navio 2
    printf("\nAlocando Navio 2 - ");
    printf("Linha %d - Coluna %d\n",posicaoB[0],posicaoB[1]);
    for(int i=posicaoB[0]-1,j=posicaoB[1]-1;i<(posicaoB[0]+2);i++){
        tabuleiro[i][j]=navio2[0];//preencher tabuleiro com o navio 2 na vertical
    }

    //Navio 3
    printf("\nAlocando Navio 3 - ");
    printf("Linha %d - Coluna %d\n",posicaoC[0],posicaoC[1]);
    for(int i=posicaoC[0]-1,j=posicaoC[1]-1;i<=posicaoC[0]+2;i++,j++){
        tabuleiro[i][j]=navio3[0];//preencher tabuleiro com o navio 3 na diagonal
    }
    
    //Navio 4
    printf("\nAlocando Navio 4 - ");
    printf("Linha %d - Coluna %d\n",posicaoD[0],posicaoD[1]);
    for(int i=posicaoD[0]-1,j=posicaoD[1]-1;i<posicaoD[0]+2;i++,j++){//tabuleiro -1
        tabuleiro[i][j]=navio4[0];//preencher tabuleiro com o navio 4 na diagonal
    }

    printf("\nTabuleiro atualizado:\n");
    exibirTabuleiro();
    return 0;
}


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
