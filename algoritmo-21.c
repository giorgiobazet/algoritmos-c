#include <stdio.h>

int main(){

    int x, y;

    printf("Entre com um valor inteiro: ");
    scanf("%d", &x);

    printf("\nEntre com um valor inteiro: ");
    scanf("%d", &y);

    if (x > y){
        printf("\n%d, %d\n", y, x);
    }
    else{
        printf("\n%d, %d\n", x, y);
    }

    return 0;
}