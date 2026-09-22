#include <stdio.h>

int main() {
    char c1, c2, c3;

    printf("Digite três caracteres: ");
    
    // Lógica: O espaço em branco antes de cada '%c' faz o scanf ignorar
    // teclas 'Enter' ou espaços vazios remanescentes no buffer do teclado.
    scanf(" %c %c %c", &c1, &c2, &c3);

    printf("Ordem inversa: %c %c %c\n", c3, c2, c1);

    return 0;
}