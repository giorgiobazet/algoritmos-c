#include <stdio.h>

int main() {
    int n1, n2, n3, n4;

    printf("Digite quatro valores inteiros: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    // Lógica: Usa-se o operador lógico OU (||) para testar todas as combinações possíveis entre os quatro valores.
    if (n1 == n2 || n1 == n3 || n1 == n4 || n2 == n3 || n2 == n4 || n3 == n4) {
        printf("Existe pelo menos um par de valores iguais.\n");
    }

    return 0;
}