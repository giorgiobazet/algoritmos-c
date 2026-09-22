#include <stdio.h>
#include <math.h>

int main() {
    int qtd;
    float s = 0.0, pi, base = 1.0;
    int sinal = 1; 

    printf("\nEntre com a quantidade de termos: ");
    scanf("%d", &qtd);

    if (qtd <= 0) {
        printf("A quantidade de termos deve ser positiva.\n");
        return 0;
    }

    for (int i = 1; i <= qtd; i++) {
        s += sinal * (1.0 / pow(base, 3));
        base += 2.0;       
        sinal = -sinal;    
    }

    pi = cbrt(s * 32.0);

    printf("O valor aproximado de pi para %d termos é: %.5f\n", qtd, pi);

    return 0;
}