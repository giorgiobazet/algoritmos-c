#include <stdio.h>

int main(){

    int n, fatorial = 1;

    printf("Entre com um valor inteiro positivo: ");
    scanf("%d", &n);

    if(n < 0){
        printf("Valor negativo!\n");
        return 0;
    }

    for (int i = 1; i <= n; i++){
        fatorial *= i;
    }

    printf("O fatorial de %d é: %d\n", n, fatorial);
}