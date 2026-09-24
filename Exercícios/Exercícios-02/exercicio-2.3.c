#include <stdio.h>

int main() {
    float salario_fixo, comissao_fixa, total_vendas, salario_final;
    int carros_vendidos;

    printf("Salario fixo mensal: ");
    scanf("%f", &salario_fixo);
    printf("Comissao fixa por carro: ");
    scanf("%f", &comissao_fixa);
    printf("Quantidade de carros vendidos: ");
    scanf("%d", &carros_vendidos);
    printf("Total de vendas (R$): ");
    scanf("%f", &total_vendas);

    // Lógica base: Soma do salário fixo, comissões por unidade e os 5% sobre o total de vendas.
    salario_final = salario_fixo + (comissao_fixa * carros_vendidos) + (total_vendas * 0.05);

    // Lógica da decisão: Adiciona 3% extra sobre o total de vendas apenas se o valor ultrapassar os 100.000,00.
    if (total_vendas > 100000.00) {
        salario_final += total_vendas * 0.03;
    }

    printf("\nValor total a receber: R$ %.2f\n", salario_final);

    return 0;
}