#include <stdio.h>
#include <string.h>

int main() {
    // 10 cadeias, alocando 32 espaços (30 caracteres + '\n' + '\0')
    char matriz[10][32];
    int especiais = 0;

    printf("Introduza as 10 cadeias de texto:\n");
    for (int i = 0; i < 10; i++) {
        fgets(matriz[i], 32, stdin);
        matriz[i][strcspn(matriz[i], "\n")] = '\0'; // Remove a quebra de linha

        // Lógica: Percorre cada caractere da cadeia até encontrar o terminador nulo '\0'.
        // Avalia a tabela ASCII: se o caractere não for uma letra maiúscula, nem minúscula,
        // nem um dígito, então é classificado como "especial".
        for (int j = 0; matriz[i][j] != '\0'; j++) {
            char c = matriz[i][j];
            if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))) {
                especiais++;
            }
        }
    }

    printf("\nTotal de caracteres especiais (incluindo espacos): %d\n", especiais);

    return 0;
}