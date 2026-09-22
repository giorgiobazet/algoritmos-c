#include <stdio.h>

int main(){

    int a, b, c;

    printf("Leia um lado do triângulo: ");
    scanf("%d", &a);

    printf("Leia um lado do triângulo: ");
    scanf("%d", &b);

    printf("Leia um lado do triângulo: ");
    scanf("%d", &c);

    if (a < b + c && b < a + c && c < a + b){
        printf("\nForma triângulo\n");
    }
    else{
        printf("\nNão forma triângulo\n");
    }

    return 0;
}