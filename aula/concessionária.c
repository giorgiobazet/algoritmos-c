#include <stdio.h>

/*
int main(){

    float salario_fixo, salario_final, total_vendas, comissao;
    int carros_v;
    const float perc = 0.05; 

    printf("Entre com o salário fixo do vendedor: ");
    scanf("%f", &salario_fixo);

    printf("Entre com a comissão: ");
    scanf("%f", &comissao);

    printf("Entre com o total de carros vendidos: ");
    scanf("%d", &carros_v);

    printf("Entre com o total de vendas: ");
    scanf("%f", &total_vendas);

    salario_final = salario_fixo + (carros_v * comissao) + (total_vendas * perc);

    printf("\nSalario final: R$%.2f\n", salario_final);
}

*/

/*
int main(){

    float salario_fixo, salario_final, total_vendas, comissao;
    int carros_v;
    const float perc = 0.05, perc2 = 0.03, lim = 100000; 

    printf("Entre com o salário fixo do vendedor: ");
    scanf("%f", &salario_fixo);

    printf("Entre com a comissão: ");
    scanf("%f", &comissao);

    printf("Entre com o total de carros vendidos: ");
    scanf("%d", &carros_v);

    printf("Entre com o total de vendas: ");
    scanf("%f", &total_vendas);

    salario_final = salario_fixo + (carros_v * comissao) + (total_vendas * perc);


    if (total_vendas >= lim){
        salario_final += total_vendas * perc2;
    }

    printf("Salário total: R$%.2f", salario_final);

    return 0;
}

*/

/*
int main(){

    float salario_fixo, salario_final, total_vendas, comissao;
    int carros_v;
    const float perc = 0.05, perc2 = 0.03, perc3 = 0.07, lim1 = 50000.0, lim2= 80000.0; 

    printf("Entre com o salário fixo do vendedor: ");
    scanf("%f", &salario_fixo);

    printf("Entre com a comissão: ");
    scanf("%f", &comissao);

    printf("Entre com o total de carros vendidos: ");
    scanf("%d", &carros_v);

    printf("Entre com o total de vendas: ");
    scanf("%f", &total_vendas);

    salario_final = salario_fixo + (carros_v * comissao);


    if (total_vendas <= lim1){
        salario_final += total_vendas * perc;
    }
    else if(total_vendas <= lim2){
        salario_final += total_vendas * perc2;
    }
    else{
        salario_final += total_vendas * perc3;
    }

    printf("Salário total: R$%.2f", salario_final);

    return 0;
}

*/
/*
int main(){

    float salario_fixo, salario_final, total_vendas, comissao;
    int carros_v;
    const float perc = 0.03, perc2 = 0.04, perc3 = 0.06, perc4 = 0.09; 

    printf("Entre com o salário fixo do vendedor: ");
    scanf("%f", &salario_fixo);

    printf("Entre com a comissão: ");
    scanf("%f", &comissao);

    printf("Entre com o total de carros vendidos: ");
    scanf("%d", &carros_v);

    printf("Entre com o total de vendas: ");
    scanf("%f", &total_vendas);

    salario_final = salario_fixo + (carros_v * comissao);

    switch (carros_v)
    {
        case 1:
        case 2:
            salario_final += total_vendas * perc;
        break;
        
        case 3:
        case 4:
        case 5:
            salario_final  += total_vendas * perc2;
        break;

        case 6:
        case 7:
        case 8:
            salario_final += total_vendas * perc3;
        break;
    }

    if (carros_v >= 9)
    {
        salario_final += total_vendas * perc4;
    }

    printf("\nSalário final: R$%.2f\n", salario_final);

    return 0;
}

*/

/*

int main(){

    float salario_fixo, salario_final, total_vendas, total_pago, comissao;
    int carros_v, qtd, cont = 1;
    const float perc = 0.05, perc2 = 0.03, perc3 = 0.07, lim1 = 50000.0, lim2= 80000.0; 

    printf("Entre com a quantidade de funcionários: ");
    scanf("%d", &qtd);

    while (cont <= qtd){

    printf("\nEntre com o salário fixo do vendedor: ");
    scanf("%f", &salario_fixo);

    printf("Entre com a comissão: ");
    scanf("%f", &comissao);

    printf("Entre com o total de carros vendidos: ");
    scanf("%d", &carros_v);

    printf("Entre com o total de vendas: ");
    scanf("%f", &total_vendas);

    salario_final = salario_fixo + (carros_v * comissao);


    if (total_vendas <= lim1){
        salario_final += total_vendas * perc;
    }
    else if(total_vendas <= lim2){
        salario_final += total_vendas * perc2;
    }
    else{
        salario_final += total_vendas * perc3;
    }

    printf("Salário total: R$%.2f\n", salario_final);
    
    total_pago += salario_final;
    cont ++;

    }

    printf("Total pago: ", total_pago);

    return 0;
}
    
*/

int main(){

    float salario_fixo, salario_final, total_vendas, total_pago = 0, comissao, media_pago;
    int carros_v, qtd, cont = 1;
    const float perc = 0.05, perc2 = 0.03, perc3 = 0.07, lim1 = 50000.0, lim2= 80000.0; 

    printf("Entre com a quantidade de funcionários: ");
    scanf("%d", &qtd);

    do{

    printf("\nEntre com o salário fixo do vendedor: ");
    scanf("%f", &salario_fixo);

    printf("Entre com a comissão: ");
    scanf("%f", &comissao);

    printf("Entre com o total de carros vendidos: ");
    scanf("%d", &carros_v);

    printf("Entre com o total de vendas: ");
    scanf("%f", &total_vendas);

    salario_final = salario_fixo + (carros_v * comissao);


    if (total_vendas <= lim1){
        salario_final += total_vendas * perc;
    }
    else if(total_vendas <= lim2){
        salario_final += total_vendas * perc2;
    }
    else{
        salario_final += total_vendas * perc3;
    }

    printf("Salário total: R$%.2f\n", salario_final);
    
    total_pago += salario_final;
    cont ++;

    } while (cont <= qtd);

    media_pago = total_pago / qtd;

    printf("Total pago: %.2f", total_pago);
    printf("\nMédia do valor pago: %.2f ", media_pago);
    return 0;
}
    