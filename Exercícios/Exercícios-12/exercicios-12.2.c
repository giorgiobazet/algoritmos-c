#include <stdio.h>
#include <string.h>

int main() {
    // 20 cadeias, alocando 52 espaços para acomodar até 50 caracteres com segurança
    char matriz[20][52];

    printf("Introduza as 20 cadeias de texto:\n");
    for (int i = 0; i < 20; i++) {
        fgets(matriz[i], 52, stdin);
        matriz[i][strcspn(matriz[i], "\n")] = '\0';

        // Lógica: O código ASCII para letras maiúsculas e minúsculas tem uma diferença
        // exata de 32. Subtrair 32 converte minúscula para maiúscula; somar 32 faz o inverso.
        for (int j = 0; matriz[i][j] != '\0'; j++) {
            if (matriz[i][j] >= 'a' && matriz[i][j] <= 'z') {
                matriz[i][j] -= 32;
            } else if (matriz[i][j] >= 'A' && matriz[i][j] <= 'Z') {
                matriz[i][j] += 32;
            }
        }
    }

    printf("\n--- Cadeias Convertidas ---\n");
    for (int i = 0; i < 20; i++) {
        printf("%s\n", matriz[i]);
    }

    return 0;
}