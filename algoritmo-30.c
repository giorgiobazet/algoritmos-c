#include <stdio.h>

int main(){

    float salario_fixo, valor_vendas, salario_final, vendas_extras;
    const float perc_1 = 0.03;
    const float perc_2 = 0.05;

    printf("Entre com o salário fixo: ");
    scanf("%f", &salario_fixo);

    printf("Entre com o valor de vendas: ");
    scanf("%f", &valor_vendas);

    if (valor_vendas <= 1.500){
        salario_final = salario_fixo + (valor_vendas * perc_1);
        printf("\nSalário final: %.2f\n", salario_final);
    }
    else{
        vendas_extras = valor_vendas - 1.500;
        salario_final = salario_fixo + ((valor_vendas * perc_1) + (vendas_extras * perc_2));
        printf("\nSalário final: %.2f\n", salario_final);
    }

    return 0;
}