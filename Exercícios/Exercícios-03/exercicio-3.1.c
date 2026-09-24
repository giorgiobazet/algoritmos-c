#include <stdio.h>

int main() {
    int val1, val2;

    printf("Introduza dois valores inteiros: ");
    scanf("%d %d", &val1, &val2);

    // Lógica: A decisão composta (if/else) avalia a condição principal (resto zero).
    // Se for verdadeira executa o primeiro bloco; caso contrário, executa o bloco 'else'.
    if (val2 != 0 && val1 % val2 == 0) {
        printf("O valor %d é divisivel por %d.\n", val1, val2);
    } else {
        printf("O valor %d não é divisivel por %d.\n", val1, val2);
    }

    return 0;
}