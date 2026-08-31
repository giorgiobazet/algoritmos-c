#include <stdio.h>

int main(){

    float n1, n2, media;

    printf("Entre com a nota da primeira avaliação: ");
    scanf("%f", &n1);

    printf("\nEntre com a nota da segunda avaliação: ");
    scanf("%f", &n2);

    media = (n1 + n2)/2.0;

    if(media >= 6.0){
        printf("\nAprovado\n");
    }
    else if(media >= 4.0 && media < 6.0){
        printf("\nRecuperação\n");
    }
    else{
        printf("\nReprovado\n");
    }

    return 0;
}