#include <stdio.h>

int main() {
    int v1, v2;
    int continuar;

    // Lógica: A estrutura 'do-while' garante que a leitura e os cálculos
    // ocorram pelo menos uma vez antes de avaliar a condição de paragem no final.
    do {
        printf("\nIntroduza o par de valores inteiros (v1 v2): ");
        scanf("%d %d", &v1, &v2);

        printf("Diferenca (v2 - v1): %d\n", v2 - v1);
        
        if (v1 != 0) {
            printf("Razao (v2 / v1): %.2f\n", (float)v2 / v1);
        } else {
            printf("Razao: Divisao por zero nao permitida.\n");
        }

        printf("Deseja inserir outro par? (1-Sim, 0-Nao): ");
        scanf("%d", &continuar);
    } while (continuar != 0);

    return 0;
}