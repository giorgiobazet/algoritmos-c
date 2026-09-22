#include <stdio.h>
#include <string.h>
#define TAM 20

/*
int main(){
 
    int valor, cont = 1, n, mult;

    printf("Entre com um valor inteiro: ");
    scanf("%d", &valor);

    printf("Entre com a quantidade de multíplos: ");
    scanf("%d", &n);

    while(cont <= n){

        mult = valor * cont;
        
        if (mult > 100)
            break;
            printf("%d, ", mult);
        
        cont ++;
    }

    return 0;
}

*/


/*
int main(){

    int const valor = 10000000, div1 = 11, div2 = 13, div3 = 17;
    int cont = valor;

    while (cont >= 1){
        
        if((cont % div1 == 0) && (cont % div2 == 0) && (cont % div3 == 0)){
            printf("%d", cont);
            break;

            cont--;
        }
    }

    return 0;

}

*/

/*
int main(){
    
    int cont;

    for (cont = 1; cont <= 100; cont++){
        
        if(cont % 5 == 0){
            continue;

            printf("%d", cont);
        }
    }

    return 0;
}

*/

/*
int main(){

    int valor, soma = 0;
    char sim;

    do
    {
        printf("\nEntre com o valor: ");
        scanf("%d", &valor);

        if (valor <= 0){
            continue;

            soma += valor;

            printf("Deseja continuar? S/N");
            scanf(" %c", sim);
        }


    } while ((sim == 'S'));
    
    return 0;
}

*/

/*
    int main(){
    int vet[TAM], i, prod = 1;

    for(i = 0; i < TAM; i++){

        printf("Entre com um valor -> ");
        scanf("%d", &vet[i]);

        if (i % 2 == 0)
        {
            prod *= vet[i];
        }

    }

    printf("\nProduto: %d\n", prod);

    return 0;
}

*/

/*
    int main(){
    int vet[TAM], i;

    for(i = 0; i < TAM; i++){

        printf("Entre com um valor -> ");
        scanf("%d", &vet[i]);

        if (vet[i] % 5 == 0)
        {
            printf("\n%d, ", i);
        }

    }

    return 0;
}
*/

int main(){

    char str[TAM];
    int i;

    printf("Entre com a cadeia: ");
    scanf("%s", str);
}
