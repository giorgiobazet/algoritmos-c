#include <stdio.h>
#include <math.h>

int main(){

    float r, volume, area;
    float const pi = 3.14;

    printf("Entre com o raio da esfera: ");
    scanf("%f", &r);

    volume = 4.0/3.0 * pi * pow(r,3);

    area = 4.0 * pi * pow(r,2);

    printf("\nO volume dessa esfera é: %.2f", volume);
    printf("\nA área dessa esfera é %.2f", area);

    return 0;
}