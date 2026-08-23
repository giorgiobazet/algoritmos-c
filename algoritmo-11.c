#include <stdio.h>
#include <math.h>

int main() {

    float const perc = 0.35;
    float cob_t, cob_a, cob_c, custo_final;
    float a_trigo, a_aveia, a_cevada;

    printf("Entre com o valor da cobertura por acre de trigo: ");
    scanf("%f", &cob_t);
    printf("\nEntre com o número de acre de trigo plantado: ");
    scanf("%f", &a_trigo);

    printf("\nEntre com o valor da cobertura por acre de aveia: ");
    scanf("%f", &cob_a);
    printf("\nEntre com o número de acre de aveia: ");
    scanf("%f", &a_aveia);

    printf("\nEntre com o valor da coberta por acre de cevada: ");
    scanf("%f", &cob_c);
    printf("\nEntre com o número de acre de cevadas: ");
    scanf("%f", &a_cevada);

    custo_final = ((cob_t * a_trigo) * perc) + ((cob_a * a_aveia) * perc) + ((cob_c * a_cevada) * perc);

    printf("\nO custo total do seguro: R$ %.2f", custo_final);
    
    return 0;
}