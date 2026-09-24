#include <stdio.h>

int main() {
    int matriz[20][20];

    printf("Introduza os 400 valores da matriz 20x20:\n");
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Indices (linha, coluna) com valores divisiveis por 3:\n");

    // Lógica: Avaliamos o conteúdo da matriz na posição [i][j]. Se o resto 
    // da divisão por 3 for zero, imprimimos os índices que localizam esse valor.
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            if (matriz[i][j] % 3 == 0) {
                printf("[%d][%d] ", i, j);
            }
        }
    }
    printf("\n");

    return 0;
}