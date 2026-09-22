#include <stdio.h>

int main(){

    int horas_trabalhadas, horas_extras;
    float salario_horas, salario_total;

    printf("Entre com as horas trabalhadas no mês: ");
    scanf("%d", &horas_trabalhadas);

    printf("Entre com o valor do salario por hora: ");
    scanf("%f", &salario_horas);
    
    if (horas_trabalhadas <= 220){
        salario_total = salario_horas * horas_trabalhadas;
        printf("\nO salário final é: R$%.2f\n", salario_total);
    }
    else{
        horas_extras = horas_trabalhadas - 220;
        salario_total = (salario_horas * 220) + ((horas_extras * salario_horas) * 1.5);
        printf("\nO salário final é: R$%.2f\n", salario_total);
    }

    return 0;
}