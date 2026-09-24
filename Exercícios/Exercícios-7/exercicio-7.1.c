#include <stdio.h>

int main() {
    int valor, n;
    int multiplo;

    printf("Introduza um valor inteiro: ");
    scanf("%d", &valor);
    printf("Introduza a quantidade de multiplos (N): ");
    scanf("%d", &n);

    printf("Multiplos de %d (ate %d termos ou menores que 100):\n", valor, n);

    // Lógica: O ciclo está configurado para iterar N vezes. No entanto, se
    // o múltiplo calculado atingir ou ultrapassar 100, o comando 'break' 
    // interrompe imediatamente o ciclo, ignorando as iterações restantes.
    for (int i = 1; i <= n; i++) {
        multiplo = valor * i;
        if (multiplo >= 100) {
            break;
        }
        printf("%d ", multiplo);
    }
    printf("\n");

    return 0;
}