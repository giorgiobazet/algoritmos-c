#include <stdio.h>

int main() {
    float salario_fixo, comissao_fixa, total_vendas, salario_final;
    float total_pago_mes = 0;
    int carros_vendidos;
    int continuar = 1;

    // Lógica: O ciclo decorre normalmente para cada funcionário, mas possui 
    // uma verificação de limite máximo. Se o plafond de 500.000,00 for excedido,
    // um alerta é emitido e o comando 'break' força a saída imediata do ciclo.
    while (continuar == 1) {
        printf("\n--- Novo Funcionario ---\n");
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

        total_pago_mes += salario_final;

        if (total_pago_mes > 500000.00) {
            printf("\n[ALERTA] Orcamento mensal de R$ 500.000,00 ultrapassado!\n");
            printf("O total atingiu R$ %.2f. Calculos interrompidos.\n", total_pago_mes);
            break; 
        }

        printf("Valor a receber: R$ %.2f\n", salario_final);

        printf("Processar outro funcionario? (1-Sim, 0-Nao): ");
        scanf("%d", &continuar);
    }

    return 0;
}