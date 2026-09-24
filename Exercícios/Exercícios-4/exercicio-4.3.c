#include <stdio.h>

int main() {
    float salario_fixo, comissao_fixa, total_vendas, salario_final;
    float total_pago_mes = 0;
    int carros_vendidos;
    int processar_novo = 1;

    // Lógica: O ciclo 'while' processa os dados individualmente. O acumulador 
    // 'total_pago_mes' guarda o somatório fora do ciclo, não sendo reiniciado 
    // a cada novo funcionário avaliado.
    while (processar_novo == 1) {
        printf("\n--- Dados do Funcionario ---\n");
        printf("Salario fixo mensal: ");
        scanf("%f", &salario_fixo);
        printf("Comissao fixa por carro: ");
        scanf("%f", &comissao_fixa);
        printf("Carros vendidos: ");
        scanf("%d", &carros_vendidos);
        printf("Total de vendas (R$): ");
        scanf("%f", &total_vendas);

        salario_final = salario_fixo + (comissao_fixa * carros_vendidos);

        if (total_vendas <= 50000.00) {
            salario_final += total_vendas * 0.03;
        } else if (total_vendas <= 80000.00) {
            salario_final += total_vendas * 0.05;
        } else {
            salario_final += total_vendas * 0.07;
        }

        printf("=> A receber por este funcionario: R$ %.2f\n", salario_final);
        
        // Acumula o valor calculado ao montante geral da empresa
        total_pago_mes += salario_final;

        printf("\nProcessar outro funcionario? (1-Sim, 0-Nao): ");
        scanf("%d", &processar_novo);
    }

    printf("\n========================================\n");
    printf("Valor TOTAL pago no mes: R$ %.2f\n", total_pago_mes);

    return 0;
}