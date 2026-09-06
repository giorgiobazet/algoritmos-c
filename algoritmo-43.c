#include <stdio.h>

int main(){

    int valor, soma = 0, cont = 0;
    float media;

    do{
        printf("\nEntre com um valor: ");
        scanf("%d", &valor);
        
        if(valor > 0){
            soma += valor;
            cont++;
        }
       
    }while (valor > 0);

    media = (float)soma / cont;

    printf("A média dos valores informados são: %.2f", media);

    return 0;
}