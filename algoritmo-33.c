#include <stdio.h>

int main(){
    
    float altura, peso_ideal;
    int sexo;

    printf("Entre com a altura: ");
    scanf("%f", &altura);

    printf("Entre com o sexo (1) Homem (2) Mulher: ");
    scanf("%d", &sexo);

    if (sexo == 1)
    {
        peso_ideal = (72.7 * altura) - 58;
    }
    else if (sexo == 2){
        peso_ideal = (62.1 * altura) - 44.7;
    }
    else{
        printf("Sexo inválido");
    }

    printf("Seu peso ideal: %.1f", peso_ideal);

    return 0;
}