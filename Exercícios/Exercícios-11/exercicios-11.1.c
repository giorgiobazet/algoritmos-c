#include <stdio.h>

int main() {
    int matriz[10][10];
    int soma = 0;

    printf("Introduza os 100 valores da matriz 10x10:\n");

    // Lógica: Para percorrer uma matriz, usamos dois laços encadeados.
    // O ciclo 'i' controla as linhas e o ciclo 'j' controla as colunas.
    // A soma apenas ocorre se a adição dos índices (i + j) resultar num número par.
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &matriz[i][j]);
            
            if ((i + j) % 2 == 0) {
                soma += matriz[i][j];
            }
        }
    }

    printf("A soma dos valores nas posicoes (i+j) pares e: %d\n", soma);

    return 0;
}