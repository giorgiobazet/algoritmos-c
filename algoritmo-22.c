#include <stdio.h>

int main(){

    int x, y, z;

    printf("Entre com um valor inteiro: ");
    scanf("%d", &x);

    printf("\nEntre com um valor inteiro: ");
    scanf("%d", &y);

    printf("\nEntre com um valor inteiro: ");
    scanf("%d", &z);

   if (x >= y && y >= z) {
        printf("%d, %d, %d\n", x, y, z);
    }
    else if (x >= z && z >= y) {
        printf("%d, %d, %d\n", x, z, y);
    }
    else if (y >= x && x >= z) {
        printf("%d, %d, %d\n", y, x, z);
    }
    else if (y >= z && z >= x) {
        printf("%d, %d, %d\n", y, z, x);
    }
    else if (z >= x && x >= y) {
        printf("%d, %d, %d\n", z, x, y);
    }
    else {
        printf("%d, %d, %d\n", z, y, x);
    }

    return 0;
}
