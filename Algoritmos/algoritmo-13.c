#include <stdio.h>
#include <math.h>

int main() {

    float c, l, a, d;
    int caixas;

    printf("Entre com o comprimento: ");
    scanf("%f", &c);

    printf("Entre com a largura: ");
    scanf("%f", &l);

    printf("Entre com a altura: ");
    scanf("%f", &a);

    d = ((c * a) * 2) + ((l * a) * 2);

    caixas = ceil( d / 1.5 );

    printf("O número de caixas necessárias é: %d", caixas);

    return 0;

}