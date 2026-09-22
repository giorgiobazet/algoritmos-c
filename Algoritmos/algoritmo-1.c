#include <stdio.h>
#include <math.h>

int main() {
    int x, antecessor, sucessor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    
    antecessor = x - 1;
    sucessor = x + 1;
    
    printf("\nO antecessor de %d é: %d", x, antecessor);
    printf("\nO sucessor de %d é: %d", x, sucessor);

    return 0;
}