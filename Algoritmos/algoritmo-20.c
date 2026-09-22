#include <stdio.h>

int main(){

    int x, y, z, soma;

    printf("Entre com o primeiro valor inteiro: ");
    scanf("%d", &x);

    printf("\nEntre com o segundo valor inteiro: ");
    scanf("%d", &y);

    printf("\nEntre com o terceiro valor inteiro: ");
    scanf("%d", &z);

    if ((x > z) && (y > z)){
        soma = x + y ;
        printf("A soma de %d e %d é igual a: %d\n", x, y, soma);
    }
    else if ((y > x) && (z > x)){
        soma = y + z ;
        printf("A soma de %d e %d é igual a: %d\n",y, z, soma);
    }
    else {
        soma = x + z ;
        printf("A soma de %d e %d é igual a: %d\n",x, z, soma);
    }

    return 0;
}