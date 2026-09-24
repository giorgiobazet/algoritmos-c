#include <stdio.h>

int main() {
    int num_funcionarios;
    float salario_fixo, comissao_fixa, total_vendas, salario_final;
    float total_pago_mes = 0;
    int carros_vendidos;

    printf("Quantos funcionarios deseja processar? ");
    scanf("%d", &num_funcionarios);

    // O ciclo 'for' é o mais seguro para usar com 'continue' ao ler dados,
    // pois o incremento (i++) ocorre de forma automática.
    for (int i = 1; i <= num_funcionarios; i++) {
        printf("\n--- Funcionario %d ---\n", i);
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

        printf("Valor a receber: R$ %.2f\n", salario_final);

        // Lógica: Se o salário final ultrapassar os 5000.00, o 'continue' 
        // impede que o valor seja somado ao 'total_pago_mes', passando logo
        // para o próximo funcionário.
        if (salario_final > 5000.00) {
            continue;
        }

        total_pago_mes += salario_final;
    }

    printf("\n========================================\n");
    printf("Total pago (apenas funcionarios <= R$ 5000.00): R$ %.2f\n", total_pago_mes);

    return 0;
}