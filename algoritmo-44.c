#include <stdio.h>

int main(){

    float nota1, nota2, media;
    int qtd, cont = 1;

    printf("Entre com a quantidade de funcionários: ");
    scanf("%d", &qtd);

    while (cont <= qtd){

        printf("\nEntre com a nota da primeira avaliação: ");
        scanf("%f", &nota1);

        printf("\nEntre com a nota da segunda avaliação: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2 ;

        if(media < 5){
           printf("\nMédia: %.2f", media);
           printf("\nNecessita de treianmento adicional.\n");  
        }
        else if(media < 7){
           printf("\nMédia: %.2f", media);
           printf("\nEm observação.\n");
        }
        else{
           printf("\nMédia: %.2f", media);
           printf("\nPromovido!\n");
        }

        cont++;
        
    }

    return 0;
}