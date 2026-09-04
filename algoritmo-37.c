#include <stdio.h>

int main(){

    int codigo;

    printf("Código     Sabor      Preço\n");
    printf(" (1)      Abacaxi     R$3,50\b");
    printf(" (2)      Acerola     R$4,00\n");
    printf(" (3)      Caju        R$4,00\n");
    printf(" (4)      Goiaba      R$3,50\n");
    printf(" (5)      Laranja     R$3,00\n");
    printf(" (6)      Limão       R$3,00\n");
    printf(" (7)      Mamão       R$4,00\n");
    printf(" (8)      Maracujá    R$4,50\n");
    printf(" (9)      Melão       R$4,00\n");
    printf(" (10)     Morango     R$4,50\n");

    printf("Escolha o sabor do seu suco: ");
    scanf("%d", &codigo);

    switch(codigo)
    {
        case 1:
            printf("\nSuco de abacaxi\n");
        break;
        case 2:
            printf("\nSuco de acerola\n");
        break;
        case 3:
            printf("\nSuco de caju\n");
        break;
        case 4:
            printf("\nSuco de goiaba\n");
        break;
        case 5:
            printf("\nSuco de laranja");
        break;
        case 6:
            printf("\nSuco de limão\n");
        break;
        case 7:
            printf("\nSuco de mamão\n");
        break;
        case 8:
            printf("\nSuco de maracujá\n");
        break;
        case 9:
            printf("\nSuco de melão\n");
        break;
        case 10:
            printf("\nSuco de morango\n");
        break;
        default:
            printf("\nERRO!\n");
        break;

    }

}