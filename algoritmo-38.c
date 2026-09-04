#include <stdio.h>
#include <math.h>

int main(){

    int codigo, soma = 0, sub = 0, prod = 1, x, y;
    float div = 1, pot = 1;

    printf("Código            Operação\n");
    printf(" (1)              Adição\n");
    printf(" (2)              Subtração\n");
    printf(" (3)              Multiplicação\n");
    printf(" (4)              Divisão\n");
    printf(" (5)              Potenciação\n");

    printf("\nEscolha o sabor da pizza: ");
    scanf("%d", &codigo);

    printf("Entre com o primeiro valor: ");
    scanf("%d", &x);

    printf("Entre com o segundo valor: ");
    scanf("%d", &y);

    switch (codigo)
    {
    case 1:
        soma = x + y;
        printf("\nSoma: %d\n", soma);
        break;
    case 2:
        sub = x - y;
        printf("\nSubtração: %d\n", sub);
        break;
    case 3:
        prod = x * y;
        printf("\nMultiplicação: %d\n", prod);
        break;
    case 4:
        div = (float)x / y;
        printf("\nDivisão: %f\n", div);
        break;
    case 5:
        pot = pow(x, y);
        printf("\nPotenciação: %f\n", pot);
        break;

    default:
        printf("ERRO");
        break;
    }
}