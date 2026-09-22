#include <stdio.h>

int main(){
     
    int x, y, z;

    printf("Entre com o primeiro valor inteiro: ");
    scanf("%d", &x);

    printf("\nEntre com o segundo valor inteiro: ");
    scanf("%d", &y);

    printf("\nEntre com o terceiro valor inteiro: ");
    scanf("%d", &z);

    if ((y > x) && (z > x)){
        printf("\nO menor valor é: %d\n", x);
    }
    else if ((x > y) && (z > y)){
        printf("\nO menor valor é: %d\n", y);
    }
    else{
        printf("\nO menor valor é: %d\n", z);
    }
    
    return 0;

}