#include <stdio.h>
#include <math.h> // Necessario para a funcao pow()

int main() {
    float valor;
    float produto = 1.0;
    int contador = 0;
    int continuar;

    // Lógica: A média geométrica é calculada elevando o produto de todos 
    // os N valores à potência de (1/N). O ciclo acumula o produto e a contagem.
    do {
        printf("\nIntroduza um valor real: ");
        scanf("%f", &valor);

        produto *= valor;
        contador++;

        printf("Deseja inserir outro valor? (1-Sim, 0-Nao): ");
        scanf("%d", &continuar);
    } while (continuar != 0);

    if (contador > 0) {
        printf("\nMedia geometrica: %.2f\n", pow(produto, 1.0 / contador));
    }

    return 0;
}