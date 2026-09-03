#include <stdio.h>

int main(){

    float indice_poluição;

    printf("Entre com o índice de poluição: ");
    scanf("%f", &indice_poluição);

    if (indice_poluição <= 0.25){
        printf("Aceitável\n");
    }
    else if(indice_poluição < 0.4){
        printf("Primeiro grupo deve suspender suas atividades\n");
    }
    else if(indice_poluição < 0.5){
        printf("Primeiro e segundo grupo devem suspender suas atividades\n");
    }
    else{
        printf("Todos os grupos devem suspender suas atividades\n");
    }

    return 0;
}