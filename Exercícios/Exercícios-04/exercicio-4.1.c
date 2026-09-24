#include <stdio.h>

int main() {
    int valor;
    int soma = 0;
    int produto = 1;
    int contador = 0;

    printf("Introduza valores inteiros (introduza 0 para terminar):\n");
    scanf("%d", &valor);

    // Lógica: O ciclo 'while' testa a condição de paragem (valor != 0) logo no início.
    // Se o primeiro valor inserido for 0, o bloco interno nunca chega a ser executado.
    while (valor != 0) {
        soma += valor;
        produto *= valor;
        contador++;
        
        // Lê o próximo valor ao final do ciclo para a validação seguinte
        scanf("%d", &valor);
    }

    if (contador > 0) {
        printf("Soma total: %d\n", soma);
        printf("Produto total: %d\n", produto);
    } else {
        printf("Nenhum valor foi inserido para calculo.\n");
    }

    return 0;
}