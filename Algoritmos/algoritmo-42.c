#include <stdio.h>

int main(){
    
    int a, b;
    float div;

    do{
        printf("\nLeia primeiro valor: ");
        scanf("%d", &a);

        printf("\nLeia primeiro valor: ");
        scanf("%d", &b);

        if (b == 0)
        {
            printf("\nDIVISÃO INVÁLIDA\n");

            return 0;
        }
        
        div = (float) a / b;

        printf("\nDivisão de %d por %d: %.1f\n", a, b, div);
    } while (b =! 0);

    return 0;
}