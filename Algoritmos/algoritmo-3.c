#include <stdio.h>
#include <math.h>

int main(){

    float mm, polegadas;

    printf("Entre com a quantidade de polegadas da chuva: ");
    scanf("%f", &polegadas);

    mm = polegadas * 25.4;

    printf("\n%.2f de polegadas de chuva é: %.2f em milímetros.", polegadas, mm);

    return 0;
}