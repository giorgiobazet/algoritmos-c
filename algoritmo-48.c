#include <stdio.h>
#include <math.h>

int main(){
    int qtd;
    float s = 0.0, pi;
    float den = pow(1,3);

    printf("Entre com a quantidade de termos: ");
    scanf("%d", &qtd);

    for (int i = 0; i <= qtd; i++){
        
        s += 1.0 / den; 
        den += 2;
    }

    pi = pow((s * 32), -3);

    printf("O valor de pi é: %.2f", pi);

}