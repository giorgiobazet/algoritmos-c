#include <stdio.h>

int main(){

    int x, y;

    printf("Entre com o primeiro valor inteiro: ");
    scanf("%d", &x);

    printf("\nEntre com o segundo valor inteiro: ");
    scanf("%d", &y);

    if (x > y)
        printf("\nO maior valor é: %d\n", x);
    else
        printf("\nO maior valor é: %d\n", y);

    return 0;
}