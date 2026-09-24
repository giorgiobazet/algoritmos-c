#include <stdio.h>

#define MAX_FUNC 50

int main() {
    int n;
    float salario_fixo, comissao_fixa;
    int carros_vendidos;
    
    // Lógica: Como precisamos de imprimir um relatório individual APÓS calcularmos
    // os totais e o maior valor, é obrigatório guardar os dados de cada funcionário
    // em vetores durante a leitura.
    float vendas[MAX_FUNC];
    float salarios[MAX_FUNC];
    
    float total_pago = 0;
    float maior_valor = 0;

    printf("Quantos funcionarios vai introduzir? (Max %d): ", MAX_FUNC);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\n--- Funcionario %d ---\n", i + 1);
        printf("Salario fixo mensal: ");
        scanf("%f", &salario_fixo);
        printf("Comissao fixa por carro: ");
        scanf("%f", &comissao_fixa);
        printf("Carros vendidos: ");
        scanf("%d", &carros_vendidos);
        printf("Total de vendas (R$): ");
        scanf("%f", &vendas[i]);

        // Cálculo do salário final para o vetor
        salarios[i] = salario_fixo + (comissao_fixa * carros_vendidos);

        if (vendas[i] <= 50000.00) {
            salarios[i] += vendas[i] * 0.03;
        } else if (vendas[i] <= 80000.00) {
            salarios[i] += vendas[i] * 0.05;
        } else {
            salarios[i] += vendas[i] * 0.07;
        }

        total_pago += salarios[i];

        // Atualização do maior valor encontrado
        if (salarios[i] > maior_valor) {
            maior_valor = salarios[i];
        }
    }

    // Saída global exigida antes do relatório individual
    printf("\n========================================\n");
    printf("Total pago no mes: R$ %.2f\n", total_pago);
    printf("Maior valor pago no mes: R$ %.2f\n", maior_valor);
    printf("========================================\n");

    // Lógica: Um segundo ciclo iterativo 'for' percorre os vetores previamente 
    // preenchidos para apresentar os dados armazenados de cada funcionário.
    printf("\n--- Relatorio Individual ---\n");
    for (int i = 0; i < n; i++) {
        printf("Funcionario %d -> Total de Vendas: R$ %.2f | Valor a Receber: R$ %.2f\n", 
               i + 1, vendas[i], salarios[i]);
    }

    return 0;
}