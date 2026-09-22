#include <stdio.h>
#include <math.h>

int main () {
    float d_metros, d_km;
    float c_pista, c_carro, v_paradas, l_necessario;
    int v_percorridas, n_reabastecimento;

    printf("Entre com o comprimento da pista (em metros): ");
    scanf("%f", &c_pista);
    printf("Entre com o número total de voltas: ");
    scanf("%d", &v_percorridas);
    printf("Entre com o número de reabastecimentos desejados: ");
    scanf("%d", &n_reabastecimento);
    printf("Entre com o consumo do carro: ");
    scanf("%f", &c_carro);

    v_paradas = (float) v_percorridas / (n_reabastecimento + 1);

    d_metros = v_paradas * c_pista;

    d_km = d_metros / 1000.0;

    l_necessario = d_km / c_carro;

    printf("O numero minimo até o 1° reabastecimento é: %.2f\n", 
    l_necessario);

    return 0;
}