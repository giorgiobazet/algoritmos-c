#include <stdio.h>

int main() {
    int i;

    // Lógica: Começamos a iterar a partir do valor máximo possível (999.999) 
    // e vamos decrescendo. Assim que encontramos o primeiro número divisível 
    // pelos três valores simultaneamente, sabemos que é o maior possível. 
    // Nesse momento, imprimimos o valor e usamos 'break' para parar a procura.
    for (i = 999999; i > 0; i--) {
        if (i % 11 == 0 && i % 13 == 0 && i % 17 == 0) {
            printf("O maior numero divisivel por 11, 13 e 17 e: %d\n", i);
            break;
        }
    }

    return 0;
}