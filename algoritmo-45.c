#include <stdio.h>

int main(){

    int n;
    float h = 0.0;

    printf("\nEntre com o valor de N: ");
    scanf("%d", &n);

    for (int dem = 1; dem <= n; dem++){
        h += 1.0 / dem;
    }

    printf("O valor de H é: %.2f\n", h);

    return 0;
}