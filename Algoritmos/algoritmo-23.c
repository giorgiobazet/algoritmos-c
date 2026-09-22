#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c;
    double delta, x1, x2;

    printf("Entre com o coeficente A: ");
    scanf("%d", &a);

    if (a == 0) {
        printf("Se A for zero, não é uma equação de 2 grau.\n");
        return 0; 
    }

    printf("\nEntre com o coeficente B: ");
    scanf("%d", &b);

    printf("\nEntre com o coeficente C: ");
    scanf("%d", &c);

    delta = pow(b, 2) - (4 * a * c);

    if (delta > 0){

        x1 = (-b + sqrt(delta)) / (2.0 * a);
        x2 = (-b - sqrt(delta)) / (2.0 * a);

        printf("\nPossuem duas raízes reais: X1 = %.2f ,X2 = %.2f\n", x1, x2);

    }
    else if(delta == 0){

        x1 = -b / (2.0 * a);
     
        printf("\nPossuem uma raiz real: X = %.2f\n", x1);
    }
    else {
        printf("\nNão existe raiz real\n");
        printf("\nDelta igual: %.2f\n", delta);
    }

    return 0;
}