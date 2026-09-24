#include <stdio.h>

int main() {
    float salario_fixo, comissao_fixa, total_vendas, salario_final;
    float total_pago = 0;
    int carros_vendidos, contador = 0;
    int continuar;

    // Lógica: O 'do-while' processa os funcionários e acumula o total pago num
    // somatório geral (total_pago) e a quantidade de funcionários processados (contador)
    // para calcular a média aritmética fora do ciclo.
    do {
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

        printf("Valor a receber: R$ %.2f\n", salario_final);

        total_pago += salario_final;
        contador++;

        printf("\nProcessar outro funcionario? (1-Sim, 0-Nao): ");
        scanf("%d", &continuar);
    } while (continuar != 0);

    printf("\n========================================\n");
    printf("Total pago no mes: R$ %.2f\n", total_pago);
    
    if (contador > 0) {
        printf("Media paga por funcionario: R$ %.2f\n", total_pago / contador);
    }

    return 0;
}