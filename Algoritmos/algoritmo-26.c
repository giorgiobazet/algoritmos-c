#include <stdio.h>

int main(){

    int maças_compradas; 
    float valor_final;

    printf("Entre com o número de maçãs compradas: ");
    scanf("%d", &maças_compradas);

    if (maças_compradas < 12){
        valor_final = maças_compradas * 1.30;
        printf("\nO valor final é: R$%.2f\n", valor_final); 
    }
    else{
        valor_final = maças_compradas;
        printf("\nO valor final é: R$%.2f\n", valor_final);
    }

    return 0;
}