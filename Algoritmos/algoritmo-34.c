#include <stdio.h>

int main(){

    int alpha, beta, delta, soma_angulos;

    printf("Entre com o primeiro ângulo: ");
    scanf("%d", &alpha);
    
    printf("Entre com o primeiro ângulo: ");
    scanf("%d", &beta);

    printf("Entre com o primeiro ângulo: ");
    scanf("%d", &delta);

    soma_angulos = alpha + beta + delta;
    
    if(soma_angulos == 180){
        printf("\nForma triângulo!");
    }
    else{
        printf("\nNão forma triângulo\n");
        return 0;
    }

    if(alpha == 90 || beta == 90 || delta == 90){
        printf("\nTriângulo Retângulo\n");
    }
    else if(alpha > 90 || beta > 90 || delta > 90){
        printf("\nTriângulo Obtusângulo\n");
    }
    else{
        printf("\nTriângulo Acutângulo\n");
    }
    
    return 0;
}