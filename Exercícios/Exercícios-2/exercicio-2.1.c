#include <stdio.h>

int main() {
    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    // Lógica: Utiliza-se o operador módulo (%). Se o resto da divisão por 2 for diferente de zero, o número é ímpar.
    if (valor % 2 != 0) {
        printf("O valor %d é impar.\n", valor);
    }

    return 0;
}