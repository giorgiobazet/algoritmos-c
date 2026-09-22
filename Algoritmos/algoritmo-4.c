#include <stdio.h>
#include <math.h>

int main (){

    float fahrenheit, celsius;

    printf("Entre com a temperatura em fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = 5 * (((fahrenheit - 32)/9));

    printf("\n%f graus em fahrenheit é igual a: %f graus celsius.", fahrenheit, celsius);

    return 0;
}