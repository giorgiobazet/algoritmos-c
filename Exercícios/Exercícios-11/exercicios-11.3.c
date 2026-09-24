#include <stdio.h>

#define MAX_FUNC 50

int main() {
    int n;
    float comissao_fixa;
    int carros_vendidos;
    
    // Lógica: Como estamos a treinar matrizes, usamos uma matriz Nx3.
    // Coluna 0: Salário Fixo | Coluna 1: Total de Vendas | Coluna 2: Salário Final
    float dados_func[MAX_FUNC][3]; 
    
    float total_pago = 0;
    float maior_valor = 0;
    float segundo_maior = 0;

    printf("Quantos funcionarios vai introduzir? (Max %d): ", MAX_FUNC);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\n--- Funcionario %d ---\n", i + 1);
        printf("Salario fixo mensal: ");
        scanf("%f", &dados_func[i][0]);
        printf("Comissao fixa por carro: ");
        scanf("%f", &comissao_fixa);
        printf("Carros vendidos: ");
        scanf("%d", &carros_vendidos);
        printf("Total de vendas (R$): ");
        scanf("%f", &dados_func[i][1]);

        // Cálculo inicial do salário final
        dados_func[i][2] = dados_func[i][0] + (comissao_fixa * carros_vendidos);

        // Bonificações baseadas no total de vendas (Coluna 1)
        if (dados_func[i][1] <= 50000.00) {
            dados_func[i][2] += dados_func[i][1] * 0.03;
        } else if (dados_func[i][1] <= 80000.00) {
            dados_func[i][2] += dados_func[i][1] * 0.05;
        } else {
            dados_func[i][2] += dados_func[i][1] * 0.07;
        }

        total_pago += dados_func[i][2];

        // Lógica para encontrar o 1º e o 2º maior valor:
        // Se o valor atual for maior que o recorde absoluto, o recorde antigo
        // passa para segundo lugar, e o atual assume a liderança.
        if (dados_func[i][2] > maior_valor) {
            segundo_maior = maior_valor;
            maior_valor = dados_func[i][2];
        } 
        // Caso não seja maior que o primeiro, mas seja maior que o segundo:
        else if (dados_func[i][2] > segundo_maior && dados_func[i][2] != maior_valor) {
            segundo_maior = dados_func[i][2];
        }
    }

    printf("\n========================================\n");
    printf("Total pago no mes: R$ %.2f\n", total_pago);
    printf("Segundo maior valor pago: R$ %.2f\n", segundo_maior);
    printf("========================================\n");

    printf("\n--- Relatorio Individual (Matriz) ---\n");
    for (int i = 0; i < n; i++) {
        printf("Func %d | Salario Fixo: R$ %.2f | Vendas: R$ %.2f | A Receber: R$ %.2f\n", 
               i + 1, dados_func[i][0], dados_func[i][1], dados_func[i][2]);
    }

    return 0;
}