#include <stdio.h>
#include <string.h>

#define SALARIO_MINIMO 1621.00

// Lógica: A 'struct' agrupa as características de uma entidade (Pessoa).
// Permite criar variáveis complexas que contêm múltiplos tipos de dados.
struct Pessoa {
    char nome[50];
    char sexo;
    float salario;
};

int main() {
    int n;
    
    printf("Quantas pessoas deseja registar? ");
    scanf("%d", &n);
    getchar();

    struct Pessoa pessoas[n];

    for (int i = 0; i < n; i++) {
        printf("\n--- Pessoa %d ---\n", i + 1);
        printf("Nome: ");
        fgets(pessoas[i].nome, 50, stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0';
        
        printf("Sexo (M/F): ");
        scanf("%c", &pessoas[i].sexo);
        
        printf("Salario (R$): ");
        scanf("%f", &pessoas[i].salario);
        getchar();
    }

    printf("\n=== Pessoas com rendimento superior a 2 salarios ===\n");
    for (int i = 0; i < n; i++) {
        // Acede-se aos campos da estrutura utilizando o operador ponto (.)
        if (pessoas[i].salario > (2 * SALARIO_MINIMO)) {
            printf("Sexo: %c | Salario: R$ %.2f\n", pessoas[i].sexo, pessoas[i].salario);
        }
    }

    return 0;
}