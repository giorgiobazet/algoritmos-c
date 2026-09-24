#include <stdio.h>
#include <string.h>

#define TOTAL_INSCRITOS 500

struct Candidato {
    char nome[50];
    int ano_nascimento;
    char cidade[50];
};

int main() {
    struct Candidato inscritos[TOTAL_INSCRITOS];
    int indice_mais_jovem = 0;
    int maior_ano = 0; // Quanto maior o ano de nascimento, mais jovem é a pessoa
    int ano_atual = 2026;

    printf("Introduza os dados dos %d inscritos:\n", TOTAL_INSCRITOS);

    for (int i = 0; i < TOTAL_INSCRITOS; i++) {
        printf("\nInscrito %d\nNome: ", i + 1);
        fgets(inscritos[i].nome, 50, stdin);
        inscritos[i].nome[strcspn(inscritos[i].nome, "\n")] = '\0';

        printf("Ano de nascimento: ");
        scanf("%d", &inscritos[i].ano_nascimento);
        getchar();

        printf("Cidade de origem: ");
        fgets(inscritos[i].cidade, 50, stdin);
        inscritos[i].cidade[strcspn(inscritos[i].cidade, "\n")] = '\0';

        // Lógica: Avaliamos o ano de nascimento para encontrar o maior valor numérico.
        // Guardamos o índice desse candidato para aceder aos seus dados no final.
        if (inscritos[i].ano_nascimento > maior_ano) {
            maior_ano = inscritos[i].ano_nascimento;
            indice_mais_jovem = i;
        }
    }

    int idade = ano_atual - inscritos[indice_mais_jovem].ano_nascimento;

    printf("\n=== Candidato Mais Jovem ===\n");
    printf("Nome: %s\n", inscritos[indice_mais_jovem].nome);
    printf("Idade: %d anos\n", idade);

    return 0;
}