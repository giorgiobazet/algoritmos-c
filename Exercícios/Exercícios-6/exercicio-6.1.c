#include <stdio.h>

int main() {
    int valor;

    printf("Introduza um valor inteiro: ");
    scanf("%d", &valor);

    printf("Divisores de %d: ", valor);

    // Lógica: A variável de controlo 'i' vai de 1 até ao 'valor', incrementando 1 a 1 (i++).
    // O operador módulo (%) verifica se a divisão é exata (resto zero).
    for (int i = 1; i <= valor; i++) {
        if (valor % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}