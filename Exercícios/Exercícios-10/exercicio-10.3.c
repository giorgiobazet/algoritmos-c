#include <stdio.h>
#include <string.h>

#define MAX_FUNC 50

int main() {
    int n;
    float salario_fixo, comissao_fixa;
    int carros_vendidos;
    
    // Vetores de caracteres para nomes requerem duas dimensões (matriz de char)
    char nomes[MAX_FUNC][50];
    float vendas[MAX_FUNC];
    float salarios[MAX_FUNC];
    
    float total_pago = 0;
    float maior_valor = 0;
    char nome_maior_valor[50] = "";

    printf("Quantos funcionarios vai introduzir? (Max %d): ", MAX_FUNC);
    scanf("%d", &n);
    getchar(); // Limpa o buffer do teclado (o 'Enter' deixado pelo scanf)

    for (int i = 0; i < n; i++) {
        printf("\n--- Funcionario %d ---\n", i + 1);
        printf("Nome: ");
        fgets(nomes[i], 50, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = 0;

        printf("Salario fixo mensal: ");
        scanf("%f", &salario_fixo);
        printf("Comissao fixa por carro: ");
        scanf("%f", &comissao_fixa);
        printf("Carros vendidos: ");
        scanf("%d", &carros_vendidos);
        printf("Total de vendas (R$): ");
        scanf("%f", &vendas[i]);
        getchar(); // Limpa novamente o buffer para o proximo fgets iterativo

        salarios[i] = salario_fixo + (comissao_fixa * carros_vendidos);

        if (vendas[i] <= 50000.00) {
            salarios[i] += vendas[i] * 0.03;
        } else if (vendas[i] <= 80000.00) {
            salarios[i] += vendas[i] * 0.05;
        } else {
            salarios[i] += vendas[i] * 0.07;
        }

        total_pago += salarios[i];

        // Lógica: Ao encontrar um novo maior valor, guardamos o montante numérico
        // e usamos strcpy() para copiar o conteúdo da string correspondente para
        // a variável que retém o nome associado a esse recorde.
        if (salarios[i] > maior_valor) {
            maior_valor = salarios[i];
            strcpy(nome_maior_valor, nomes[i]);
        }
    }

    printf("\n========================================\n");
    printf("Total pago no mes: R$ %.2f\n", total_pago);
    printf("Maior remuneração pertence a: %s (R$ %.2f)\n", nome_maior_valor, maior_valor);

    return 0;
}