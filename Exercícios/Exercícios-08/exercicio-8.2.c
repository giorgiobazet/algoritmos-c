#include <stdio.h>

int main() {
    int valor;
    int soma = 0;

    printf("Introduza valores inteiros (introduza 0 para terminar):\n");

    // Lógica: O ciclo infinito é quebrado com 'break' se o valor for 0.
    // Se o valor for negativo, o 'continue' impede que ele seja adicionado à soma.
    while (1) {
        scanf("%d", &valor);

        if (valor == 0) {
            break; 
        }

        if (valor < 0) {
            continue;
        }

        soma += valor;
    }

    printf("Soma dos valores positivos inseridos: %d\n", soma);

    return 0;
}