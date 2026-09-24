#include <stdio.h>

int main() {
    int num_funcionarios;
    float salario_fixo, comissao_fixa, total_vendas, salario_final, carros_vendidos;
    
    float soma_faixa1 = 0, soma_faixa2 = 0, soma_faixa3 = 0;
    int cont_faixa1 = 0, cont_faixa2 = 0, cont_faixa3 = 0;

    printf("Quantos funcionarios deseja processar? ");
    scanf("%d", &num_funcionarios);

    // Lógica: O ciclo 'for' é o ideal aqui porque sabemos previamente a quantidade exata
    // de iterações (num_funcionarios). O 'i' serve apenas como contador.
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

        // Separa e contabiliza cada pagamento de acordo com a sua faixa
        if (total_vendas <= 50000.00) {
            salario_final += total_vendas * 0.03;
            soma_faixa1 += salario_final;
            cont_faixa1++;
        } else if (total_vendas <= 80000.00) {
            salario_final += total_vendas * 0.05;
            soma_faixa2 += salario_final;
            cont_faixa2++;
        } else {
            salario_final += total_vendas * 0.07;
            soma_faixa3 += salario_final;
            cont_faixa3++;
        }
        
        printf("Valor a receber: R$ %.2f\n", salario_final);
    }

    printf("\n=== Medias por Faixa de Bonificacao ===\n");
    if (cont_faixa1 > 0) printf("Ate R$50.000: R$ %.2f\n", soma_faixa1 / cont_faixa1);
    if (cont_faixa2 > 0) printf("Entre R$50.000 e R$80.000: R$ %.2f\n", soma_faixa2 / cont_faixa2);
    if (cont_faixa3 > 0) printf("Acima de R$80.000: R$ %.2f\n", soma_faixa3 / cont_faixa3);

    return 0;
}