#include <stdio.h>

struct Funcionario {
    float salario_fixo;
    float comissao_fixa;
    int carros_vendidos;
    float total_vendas;
    int tempo_servico; 
    float salario_final;
};

int main() {
    int n;

    printf("Quantos funcionarios deseja processar? ");
    scanf("%d", &n);

    // Declara um vetor do tipo struct Funcionario
    struct Funcionario equipa[n];

    for (int i = 0; i < n; i++) {
        printf("\n--- Funcionario %d ---\n", i + 1);
        printf("Tempo de servico (anos): ");
        scanf("%d", &equipa[i].tempo_servico);
        printf("Salario fixo mensal: ");
        scanf("%f", &equipa[i].salario_fixo);
        printf("Comissao fixa por carro: ");
        scanf("%f", &equipa[i].comissao_fixa);
        printf("Carros vendidos: ");
        scanf("%d", &equipa[i].carros_vendidos);
        printf("Total de vendas (R$): ");
        scanf("%f", &equipa[i].total_vendas);

        // Lógica de cálculo encapsulada na estrutura do funcionário i
        equipa[i].salario_final = equipa[i].salario_fixo + (equipa[i].comissao_fixa * equipa[i].carros_vendidos);

        if (equipa[i].total_vendas <= 50000.00) {
            equipa[i].salario_final += equipa[i].total_vendas * 0.03;
        } else if (equipa[i].total_vendas <= 80000.00) {
            equipa[i].salario_final += equipa[i].total_vendas * 0.05;
        } else {
            equipa[i].salario_final += equipa[i].total_vendas * 0.07;
        }
    }

    printf("\n=== Relatorio: Funcionarios com menos de 2 anos de servico ===\n");
    for (int i = 0; i < n; i++) {
        // O filtro final acede diretamente à propriedade 'tempo_servico' guardada na estrutura
        if (equipa[i].tempo_servico < 2) {
            printf("Funcionario %d -> Total de Vendas: R$ %.2f | Valor a Receber: R$ %.2f\n", 
                   i + 1, equipa[i].total_vendas, equipa[i].salario_final);
        }
    }

    return 0;
}