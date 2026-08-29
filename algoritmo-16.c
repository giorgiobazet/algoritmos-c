#include <stdio.h>

int main(){
    
    int valor;

    printf("Entre com um valor inteiro: ");
    scanf("%d", &valor);

    if (valor % 2 == 0)
        printf("\nPar\n");
    else
        printf("\nÍmpar\n");
    
    return 0;
}