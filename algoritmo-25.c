#include <stdio.h>

int main(){

    int ano_atual, ano_nasc, x;

    printf("Entre com o ano atual: ");
    scanf("%d", &ano_atual);

    printf("Entre com o ano do seu nascimento: ");
    scanf("%d", &ano_nasc);

    x = ano_atual - ano_nasc;

    if (x >= 18){
        printf("\nPode votar na atual eleição.\n");
    }
    else{
        printf("\nNão pode votar na atual eleição.\n");
    }

    return 0;
}