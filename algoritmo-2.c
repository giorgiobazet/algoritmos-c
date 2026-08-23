#include <stdio.h>
#include <math.h>

int main (){
    float m, cm, dm, mm;

    printf("Entre com o(s) metro(s): ");
    scanf("%f", &m);

    cm = m * 10;
    dm = m * 100;
    mm = m * 1000;

    printf("\nO valor em metros: %.2f",m);
    printf("\nO valor em centímetros: %.2f",cm);
    printf("\nO valor em decímetros: %.2f", dm);
    printf("\nO valor em milímetros: %.2f", mm);

    return 0;
}