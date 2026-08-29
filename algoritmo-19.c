#include <stdio.h>

int main(){

    int valor;

    printf("Entre com um valor: ");
    scanf("%d", &valor);

    if (valor > 0)
        printf("Positivo\n");
    else if (valor < 0)
        printf("Negativo\n");
    else
        printf("Nulo\n");
        
    return 0;

}