#include <stdio.h>

int main() {
    float salario_fixo, comissao_fixa, total_vendas, salario_final;
    int carros_vendidos;

    printf("Salario fixo mensal: ");
    scanf("%f", &salario_fixo);
    printf("Comissao fixa por carro vendido: ");
    scanf("%f", &comissao_fixa);
    printf("Quantidade de carros vendidos: ");
    scanf("%d", &carros_vendidos);
    printf("Total de vendas (R$): ");
    scanf("%f", &total_vendas);

    salario_final = salario_fixo + (comissao_fixa * carros_vendidos);

    // Lógica: O encadeamento 'if / else if / else' cria caminhos mutuamente exclusivos.
    // Assim que uma condição é satisfeita, o bónus correspondente é aplicado e a estrutura é interrompida.
    if (total_vendas <= 50000.00) {
        salario_final += total_vendas * 0.03;
    } else if (total_vendas <= 80000.00) {
        salario_final += total_vendas * 0.05;
    } else {
        salario_final += total_vendas * 0.07;
    }

    printf("\nValor total a receber: R$ %.2f\n", salario_final);

    return 0;
}