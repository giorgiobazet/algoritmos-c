#include <stdio.h>
#include <math.h>

/*
int main(){
    int a, b, c;
    float media;

    printf("Entre com o primeiro número: ");
    scanf("%d", &a);

    printf("Entre com o segundo número: ");
    scanf("%d", &b);

    printf("Entre com o terceiro número: ");
    scanf("%d", &c);

    media = (a + b + c) / 3.0;

    printf("\nA media dos números digitados e: %.2f\n", media);

    return 0;
}

*/

/*
int main(){
    
    int a, b, soma, sub, prod;
    float div;

    printf("Entre com o primeiro número: ");
    scanf("%d", &a);

    printf("Entre com o segundo número: ");
    scanf("%d", &b);

    soma = a + b;
    sub = a - b;
    prod = a * b;
    div = (float)a / b;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", sub);
    printf("Multiplicação: %d\n", prod);
    printf("Divisão: %.2f\n", div);

    return 0;
}

*/

/*
int main(){
    int valor;

    printf("Entre com um valor inteiro: ");
    scanf("%d", &valor);

    if (valor % 2 == 0) {
        printf("O valor digitado é par.\n");
    } else {
        printf("O valor digitado é ímpar.\n");
    }

    return 0;
}

*/

/*
int main(){

    int a, b, c, d;

    printf("Entre com quatro valores inteiros: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if ((a == b) || (a == c) || (a == d) || (b == c) || (b == d) || (c == d)){
        printf("Há algum valor par de valores iguais");
    }
    else{
        printf("Não há algum valor par de valores iguais");
    }

    return 0;
}

*/


/*
    int main(){

    int a, b;

    printf("Entre com 2 valores inteiros: ");
    scanf("%d %d", &a, &b);

    if (a % b == 0){
        printf("É divisível");
    }
    else{
        printf("Não é divisível");
    }

    return 0;

}
*/

/*
    int main(){

        int mes;

        printf("Entre com o número do mês desejado: ");
        scanf("%d", &mes);

        switch (mes){
            case 1:
                printf("\nJAN\n");
                break;
            case 2:
                printf("\nFEV\n");
                break;
            case 3: 
                printf("\nMAR\n");
                break;
            case 4:
                printf("\nABR\n");
                break;
            case 5:
                printf("\nMAI\n");
                break;
            case 6:
                printf("\nJUN\n");
                break;
            case 7:
                printf("\nJUL\n");
                break;
            case 8:
                printf("\nAGO\n");
                break;
            case 9: 
                printf("\nSET\n");
                break;
            case 10:
                printf("\nOUT\n");
                break;
            case 11:
                printf("\nNOV\n");
                break;
            case 12:
                printf("\nDEZ\n");
                break;
            default:
                printf("ERRO");
        }
        
    }

*/

/*
int main(){

    int valor, cont = 1, soma = 0, prod = 1, qtd;

    printf("Entre com a quantidade de valores");
    scanf("%d", &qtd);

    while (cont <= qtd){
        printf("Entre com valor: ");
        scanf("%d", &valor);

        soma += valor;
        prod *= valor;
        
        cont++;
    }

    printf("\nValor: %d\n", soma);
    printf("\nValor: %d\n", prod);
}
*/

/*
int main(){

    int valor, soma = 0, prod = 1;

    printf("Entre com valor: ");
    scanf("%d", &valor);

    while (valor > 0){
        soma += valor;
        prod *= valor;

        printf("Entre com valor: ");
        scanf("%d", &valor);
    }
    

    printf("\nValor: %d\n", soma);
    printf("\nValor: %d\n", prod);
}
*/

/*

int main(){

    int valor, soma = 0, prod = 1;
    char sim = 's';

    while (sim == 's'){
        printf("Entre com valor: ");
        scanf("%d", &valor);

        soma += valor;
        prod *= valor;

        getchar();
        printf("Deseja continuar? s/n ");
        scanf("%c", &sim);
        getchar();
    }
    

    printf("\nValor: %d\n", soma);
    printf("\nValor: %d\n", prod);

    return 0;

}

*/

/*
int main(){

    float valor, peso, num = 0.0, den = 0.0;
    float media_p;
    char sim = 's';

    while (sim == 's'){
        printf("Entre com o valor: ");
        scanf("%f", &valor);

        printf("Entre com o peso: ");
        scanf("%f", &peso);

        num += (valor * peso);
        den += peso;

        peso++;

        getchar();
        printf("Deseja continuar? s/n ");
        scanf("%c", &sim);
        getchar();
    }

    media_p = num / den;
    printf("Média ponderada: %.2f", media_p);
}
*/

/*
    int main(){

    int qtd, a, b, dif, cont = 1;
    float div;

    printf("Entre com a quantidade de pares: ");
    scanf("%d", &qtd);

    do{

        printf("Entre com os pares: ");
        scanf("%d %d", &a, &b );

        dif = b - a;
        div = (float)b / a;

        printf("\nDiferença: %d", dif);
        printf("\nDivisão %.2f\n", div);

        cont++;

    } while (cont <= qtd);

    return 0;
}
*/

/*
    int main(){
    float media_g, valor, prod = 1;
    int cont = 0;
    char sim = 's';

    do{
        printf("Entre com os valores de cada elemento: ");
        scanf("%f", &valor);
        
        prod *= valor;
        cont++;

        getchar();
        printf("Deseja continuar? s/n ");
        scanf("%c", &sim);
        getchar();

    }while (sim == 's');

    media_g = pow(valor, 1.0 / cont);
    printf("Média geométrica: %.2f", media_g);
}

*/
