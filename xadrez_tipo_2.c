#include <stdio.h>

// movimentação bispo em diagonal (direita cima)
void bispo(int movimentos) {
    for (movimentos;movimentos>=1;movimentos--)
    {
        printf("Direita\n");
        printf("Cima\n");
    }
}
// movimentação torre direita 5x
void torre(int movimentos) {
    if (movimentos == 0) return;
    printf("Direita\n");
    torre(movimentos - 1);
}
// movimentação rainha 5x esquerda
void rainha(int movimentos) {
    if (movimentos == 0) return;
    printf("Esquerda\n");
    rainha(movimentos - 1);
}
// cavalo andando em L
void cavalo() {
    for (int i = 0; i < 2; i++) 
    {
        printf("Baixo\n");
    }
    for (int j = 0; j < 1; j++) 
    {
        printf("Esquerda\n");
    }
}

void cavalo_2() {
    int movimentos = 2;
    for (int i = 0, j = 1; i < movimentos; i++, j--) 
    {
        if (i == 1) continue; 
        printf("Cima(2x)\n");
    }
    printf("Direita\n");
}

int main() {
    printf("Movimentacao do Bispo:\n");
    bispo(5);

    printf("\nMovimentacao da Torre:\n");
    torre(5);

    printf("\nMovimentacao da Rainha:\n");
    rainha(8);

    printf("\nMovimentacao do Cavalo:\n");
    cavalo();

    printf("\nMovimentacao do Cavalo nivel Mestre:\n");
    cavalo_2();
    
    return 0;
}
