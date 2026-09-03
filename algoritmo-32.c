#include <stdio.h>

int main(){
        int h1, h2, m1, m2;
    int homem_velho, homem_novo, mulher_velha, mulher_nova;
    int soma, prod;

    printf("Entre com a idade do primeiro homem: ");
    scanf("%d", &h1);
    printf("Entre com a idade do segundo homem: ");
    scanf("%d", &h2);

    printf("Entre com a idade da primeira mulher: ");
    scanf("%d", &m1);
    printf("Entre com a idade da segunda mulher: ");
    scanf("%d", &m2);

    if (h1 > h2) {
        homem_velho = h1;
        homem_novo = h2;
    } else {
        homem_velho = h2;
        homem_novo = h1;
    }

    if (m1 > m2) {
        mulher_velha = m1;
        mulher_nova = m2;
    } else {
        mulher_velha = m2;
        mulher_nova = m1;
    }

    soma = homem_velho + mulher_nova;
    prod = homem_novo * mulher_velha;

    printf("\nSoma do homem mais velho com a mulher mais nova: %d\n", soma);
    printf("Produto do homem mais novo com a mulher mais velha: %d\n", prod);

    return 0;
}