#include <stdio.h>
#include <math.h>

int main(){

    float t, s1, s2, s3, area;

    printf("Entre com os 3 lados de um triângulo: ");
    scanf("%f %f %f", &s1,&s2,&s3);

    t = (s1+s2+s3)/2;
    area = sqrt(t *((t - s1) * (t - s2) * (t - s3)));

    printf("\nA área do triângulo é: %f", area);

    return 0;
}