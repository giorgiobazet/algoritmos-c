#include <stdio.h>
#include <string.h>

int main() {
    // Alocamos 21 posições para acomodar os 20 caracteres mais o terminador nulo '\0'
    char cadeia[21]; 
    char temp;

    printf("Introduza uma cadeia (max 20 caracteres): ");
    fgets(cadeia, 21, stdin);
    cadeia[strcspn(cadeia, "\n")] = 0; // Remove o '\n' lido pelo fgets

    int tamanho = strlen(cadeia);

    // Lógica: Trocamos o primeiro caractere com o último, o segundo com o penúltimo,
    // e assim sucessivamente até chegarmos exatamente ao meio da cadeia.
    for (int i = 0; i < tamanho / 2; i++) {
        temp = cadeia[i];
        cadeia[i] = cadeia[tamanho - 1 - i];
        cadeia[tamanho - 1 - i] = temp;
    }

    printf("Cadeia invertida: %s\n", cadeia);

    return 0;
}