#include <stdio.h>

int main(){

    int codigo;

    printf("Código     Procedência\n");
    printf(" (1)          Norte\n");
    printf(" (2)           Sul\n");
    printf(" (3)          Oeste\n");
    printf(" (4)          Leste\n");
    printf(" (5)         Nordeste\n");
    printf(" (6)         Nordeste\n");
    printf(" (7)         Sudeste\n");
    printf(" (8)         Sudeste\n");
    printf(" (9)         Sudeste\n");
    printf(" (10)        Noroeste\n");
    printf(" (11)        Sudoeste\n");

    printf("Escolha o código para procedência: ");
    scanf("%d", &codigo);

    switch(codigo)
    {
        case 1:
            printf("\nNorte\n");
        break;
        case 2:
            printf("\nSul\n");
        break;
        case 3:
            printf("\nOeste\n");
        break;
        case 4:
            printf("\nLeste\n");
        break;
        case 5:
        case 6:
            printf("\nNordeste\n");
        break;
        case 7:
        case 8:
        case 9:
            printf("\nSudeste\n");
        break;
        case 10:
            printf("\nNoroeste\n");
        break;
        case 11:
            printf("\nSudoeste");
        break;
        default:
            printf("\nImportado\n");
        break;

    }

}