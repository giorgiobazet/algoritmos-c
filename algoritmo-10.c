#include <stdio.h>

int main() {

    const float perc = 0.03; 
    float salario_fixo, total_vendas, bonus_aparelhos, salario_final;
    int aparelhos_vendidos;

    printf("Entre com o número de aparelhos vendidos: ");
    scanf("%d", &aparelhos_vendidos);
    
    printf("\nEntre com o valor total das vendas: ");
    scanf("%f", &total_vendas);
    
    printf("\nEntre com o salário fixo: ");
    scanf("%f", &salario_fixo);
    
    printf("\nBônus por cada aparelho vendido: ");
    scanf("%f", &bonus_aparelhos);

    salario_final = salario_fixo + (total_vendas * perc) + (aparelhos_vendidos * bonus_aparelhos);

    printf("O salário mensal final: R$ %.2f\n", salario_final);

    return 0;
}