#include <stdio.h>

int main() {
    int vetor[20];

    printf("Introduza 20 valores inteiros:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Indices que contem multiplos de 5: ");

    // Lógica: Aqui a avaliação é feita sobre o conteúdo da posição (vetor[i] % 5 == 0),
    // mas o que o exercício pede para imprimir é a posição na memória (o índice 'i').
    for (int i = 0; i < 20; i++) {
        if (vetor[i] % 5 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}