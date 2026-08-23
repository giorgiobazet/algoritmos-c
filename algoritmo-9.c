#include <stdio.h>
#include <math.h>

int main() {

    float custo_fabrica, custo_final;
    const float perc_d = 0.28;
    const float perc_i = 0.45;

    printf("Entre com o custo de fabrica de um carro: ");
    scanf("%f", &custo_fabrica);

    custo_final = custo_fabrica + (custo_fabrica * perc_d) + (custo_fabrica * perc_i);

    printf("O custo final: %.2f\n", custo_final);

    return 0;
}