#include <stdio.h>

int main() {
    float n1, n2, n3, n4;

    printf("Digite as notas dos alunos: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    // Lógica: O especificador '%.1f' arredonda e fixa a exibição do 
    // número real (float) para ter exatamente uma casa decimal.
    printf("\nALUNO(A)    NOTA\n");
    printf("========    ====\n");
    printf("ALINE       %.1f\n", n1);
    printf("BEATRIZ     %.1f\n", n2);
    printf("MÁRIO       %.1f\n", n3);
    printf("SÉRGIO      %.1f\n", n4);

    return 0;
}