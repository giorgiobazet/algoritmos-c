#include <stdio.h>

int main(){

    int valor, prod = 1, soma = 0;

    printf("\nEntre com o valor: ");
    scanf("%d", &valor);

    while (valor > 0){
        soma += valor;
        prod *= valor;

        printf("\nEntre com o valor: ");
        scanf("%d", &valor);
    }

    printf("\nSoma: %d", soma);
    printf("\nProduto: %d\n", prod);

    return 0;
}