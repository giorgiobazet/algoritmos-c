#include <stdio.h>

int main(){

    int codigo;

    printf("Código            Sabor\n");
    printf(" (1)             Muçarela\n");
    printf(" (2)             Calabresa\n");
    printf(" (3)             Portuguesa\n");
    printf(" (4)             Napolitana\n");
    printf(" (5)             Quatro Queijos\n");

    printf("\nEscolha o sabor da pizza: ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        printf("\nPizza Muçarela\n");
        break;
    case 2:
        printf("\nPizza Calabresa\n");
        break;
    case 3:
        printf("\nPizza Portuguesa\n");
        break;
    case 4:
        printf("\nPizza Napolitana\n");
        break;
    case 5:
        printf("\nPizza Quatro Queijos\n");
        break;

    default:
        break;
    }
}