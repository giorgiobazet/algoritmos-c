#include <stdio.h>
#include <string.h>

int main() {
    char cadeia[41];

    printf("Introduza uma cadeia (max 40 caracteres): ");
    fgets(cadeia, 41, stdin);
    cadeia[strcspn(cadeia, "\n")] = 0;

    // Lógica: O ciclo percorre a cadeia até encontrar o terminador '\0'.
    // Na tabela ASCII, a diferença numérica entre uma letra minúscula e 
    // a sua correspondente maiúscula é exatamente 32.
    for (int i = 0; cadeia[i] != '\0'; i++) {
        if (cadeia[i] >= 'a' && cadeia[i] <= 'z') {
            cadeia[i] = cadeia[i] - 32; 
        }
    }

    printf("Cadeia em maiusculas: %s\n", cadeia);

    return 0;
}