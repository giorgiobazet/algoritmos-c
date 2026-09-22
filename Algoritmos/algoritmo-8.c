#include <stdio.h>
#include <math.h>

int main (){

    int num_eleitores, num_brancos, num_nulos, num_validos;
    float perc_brancos, perc_nulos, perc_validos;

    printf("Entre com os números de eleitores: ");
    scanf("%d", &num_eleitores);
    printf("\nEntre com os votos brancos: ");
    scanf("%d", &num_brancos);
    printf("\nEntre com os votos nulos: ");
    scanf("%d", &num_nulos);
    printf("\nEntre com os votos válidos: ");
    scanf("%d", &num_validos);

    perc_brancos= (num_brancos * 100.0)/ num_eleitores;
    perc_nulos= (num_nulos * 100.0)/ num_eleitores;
    perc_validos= (num_validos * 100.0)/ num_eleitores;

    printf("\nPercentual dos votos brancos: %.2f%%", perc_brancos);
    printf("\nPercentual dos votos nulos: %.2f%%", perc_nulos);
    printf("\nPercentual dos votos válidos: %.2f%%", perc_validos);

    return 0;
}
