#include <stdio.h>
#include <math.h>

int main() {
    float d, l, c, potencia;
    int lampadas;

    printf("Entre com a potência da lâmpada: ");
    scanf("%f", &potencia);

    printf("Entre com a largura: ");
    scanf("%f", &l);

    printf("Entre com o comprimento: ");
    scanf("%f", &c);

    d = l * c;

    lampadas = (d * 18) / potencia;

    printf("O número de lâmpadas necessarias é: %d\n", lampadas);

    return 0;
}