#include <stdio.h>

int main() {
    int base, n;
    long long potencia = 1; // Usado para evitar overflow (limite de memória) rapidamente

    printf("Introduza a base (valor inteiro): ");
    scanf("%d", &base);
    printf("Introduza o numero de potencias (N): ");
    scanf("%d", &n);

    printf("\nAs %d primeiras potencias de %d sao:\n", n, base);

    // Lógica: O ciclo 'for' executa exatamente 'N' vezes. 
    // A cada iteração, o valor anterior é multiplicado pela base.
    for (int i = 1; i <= n; i++) {
        potencia *= base;
        printf("%d^%d = %lld\n", base, i, potencia);
    }

    return 0;
}