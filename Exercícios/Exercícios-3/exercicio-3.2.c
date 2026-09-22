#include <stdio.h>

int main() {
    int n1, n2, n3, n4;

    printf("Introduza quatro valores inteiros: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    // Lógica: Em C, os testes de igualdade (==) resultam em 1 (verdadeiro) ou 0 (falso).
    // O operador lógico de ou exclusivo (XOR bit a bit '^') encadeado devolve 1 
    // apenas se houver uma quantidade ímpar de condições verdadeiras.
    if ((n1 == n2) ^ (n1 == n3) ^ (n1 == n4) ^ (n2 == n3) ^ (n2 == n4) ^ (n3 == n4)) {
        printf("Há uma quantidade impar de pares de valores iguais.\n");
    } else {
        printf("Não há uma quantidade impar de pares de valores iguais.\n");
    }

    return 0;
}