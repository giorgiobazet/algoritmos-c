#include <stdio.h>

int main() {
    int vetor[10];
    int produto = 1;

    printf("Introduza 10 valores inteiros:\n");

    // Lógica: Em C, os índices de um vetor começam sempre em 0.
    // O índice 0 é considerado par (0 % 2 == 0). Acumulamos o produto
    // apenas quando a condição de paridade do índice se verifica.
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        
        if (i % 2 == 0) {
            produto *= vetor[i];
        }
    }

    printf("O produto dos valores nos indices pares e: %d\n", produto);

    return 0;
}