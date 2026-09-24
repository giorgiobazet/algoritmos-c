#include <stdio.h>

int main() {
    int soma = 0;

    // Lógica: O ciclo percorre os números de 1 a 100. Sempre que encontra um
    // múltiplo de 5, o comando 'continue' salta a instrução de soma e 
    // avança diretamente para a próxima iteração (i++).
    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0) {
            continue; 
        }
        soma += i;
    }

    printf("A soma dos numeros de 1 a 100 (excluindo multiplos de 5) e: %d\n", soma);

    return 0;
}