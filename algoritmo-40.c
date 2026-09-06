#include <stdio.h>

int main(){

    int idade;

    printf(" Idade         Categoria\n");
    printf("(5 - 7)        Infantil A\n");
    printf("(8 - 11)       Infantil B\n");
    printf("(12 - 13)      Juvenil A\n");
    printf("(14 - 17)      Juvenil B\n");
    printf("(18+)          Adulto\n");

    printf("\nEntre com a idade: ");
    scanf("%d", &idade);

    switch(idade){
        case 5:
        case 6:
        case 7:
            printf("\nInfantil A\n");
        break;
        case 8:
        case 9:
        case 10:
        case 11:
            printf("\nInfantil B\n");
        break;
        case 12:
        case 13:
            printf("\nJuvenil A\n");
        break;
        case 14:
        case 15:
        case 16:
        case 17:
            printf("\nJuvenil B\n");
        break;
    }

    if (idade >= 18){
        printf("\nAdulto\n");
    }

    if (idade <= 5){
        printf("\nERRO!\n");
    }


}