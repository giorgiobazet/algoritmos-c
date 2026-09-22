#include <stdio.h>

int main(){

    int n, t1 = 1, t2 = 1, prox = 1;

    printf("Entre com o número do termo desejado: ");
    scanf("%d", &n);

    for (int i = 3; i <= n; i++){
        prox = t1 + t2;
        t1 = t2;
        t2 = prox;
    
    }

    printf("O %d termo na série de Fibonacci é: %d\n", n, prox);

    return 0;
}