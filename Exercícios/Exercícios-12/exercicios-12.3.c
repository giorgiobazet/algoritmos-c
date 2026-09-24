#include <stdio.h>
#include <string.h>

#define MAX_FUNC 50

int main() {
    int n;
    float comissao_fixa;
    int carros_vendidos;
    
    // Matriz de caracteres bidimensional para suportar vários nomes
    char nomes[MAX_FUNC][50];
    float dados_func[MAX_FUNC][3]; 
    
    float maior_valor = -1, segundo_maior = -1;
    char nome_maior[50] = "", nome_segundo[50] = "";

    printf("Quantos funcionarios vai introduzir? (Max %d): ", MAX_FUNC);
    scanf("%d", &n);
    getchar(); // Limpa o buffer ('Enter') para que o fgets funcione corretamente

    for (int i = 0; i < n; i++) {
        printf("\n--- Funcionario %d ---\n", i + 1);
        printf("Nome: ");
        fgets(nomes[i], 50, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';

        printf("Salario fixo mensal: ");
        scanf("%f", &dados_func[i][0]);
        printf("Comissao fixa por carro: ");
        scanf("%f", &comissao_fixa);
        printf("Carros vendidos: ");
        scanf("%d", &carros_vendidos);
        printf("Total de vendas (R$): ");
        scanf("%f", &dados_func[i][1]);
        getchar(); // Limpar novamente o buffer

        // Cálculo da remuneração final
        dados_func[i][2] = dados_func[i][0] + (comissao_fixa * carros_vendidos);

        if (dados_func[i][1] <= 50000.00) {
            dados_func[i][2] += dados_func[i][1] * 0.03;
        } else if (dados_func[i][1] <= 80000.00) {
            dados_func[i][2] += dados_func[i][1] * 0.05;
        } else {
            dados_func[i][2] += dados_func[i][1] * 0.07;
        }

        // Lógica: Para identificar os dois maiores, verificamos primeiro se o valor 
        // atual bate o recorde máximo. Caso bata, o recorde antigo desce para o 
        // segundo lugar, arrastando também a cópia do nome através de strcpy().
        if (dados_func[i][2] > maior_valor) {
            segundo_maior = maior_valor;
            strcpy(nome_segundo, nome_maior);
            
            maior_valor = dados_func[i][2];
            strcpy(nome_maior, nomes[i]);
        } else if (dados_func[i][2] > segundo_maior) {
            segundo_maior = dados_func[i][2];
            strcpy(nome_segundo, nomes[i]);
        }
    }

    printf("\n========================================\n");
    printf("1o Maior Salario: %s (R$ %.2f)\n", nome_maior, maior_valor);
    printf("2o Maior Salario: %s (R$ %.2f)\n", nome_segundo, segundo_maior);
    printf("========================================\n");

    return 0;
}