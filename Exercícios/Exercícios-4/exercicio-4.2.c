#include <stdio.h>

int main() {
    float valor, peso;
    float soma_ponderada = 0, soma_pesos = 0;
    int continuar = 1;

    // Lógica: A variável 'continuar' atua como uma "flag" (bandeira).
    // Inicializada a 1, garante a entrada no ciclo. O teste no início permite
    // controlar dinamicamente quando o utilizador quer parar de inserir dados.
    while (continuar == 1) {
        printf("\nIntroduza o valor e o seu peso (ex: 7.5 2): ");
        scanf("%f %f", &valor, &peso);

        soma_ponderada += (valor * peso);
        soma_pesos += peso;

        printf("Deseja inserir outro valor? (1-Sim, 0-Nao): ");
        scanf("%d", &continuar);
    }

    if (soma_pesos > 0) {
        printf("\nMedia ponderada final: %.2f\n", soma_ponderada / soma_pesos);
    }

    return 0;
}