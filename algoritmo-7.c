#include <stdio.h>
#include <math.h>

int main(){

    float salario, reajuste, salario_r;

    printf("Entre com o salário: ");
    scanf("%f", &salario);

    printf("\nEntre com o percentual de reajuste: ");
    scanf("%f", &reajuste);

    reajuste = reajuste / 100.00;

    salario_r = salario + (salario * reajuste);

    printf("\nO salário reajustado é: %.2f", salario_r);

    return 0;
}