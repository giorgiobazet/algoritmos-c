#include <stdio.h>

int main(){

    int h_inicias, h_finais, min_inicias, min_finais, duracao_inicial, duracao_final, duracao_total, h_jogo, m_jogo;

    printf("Entre com a hora que começou: ");
    scanf("%d", &h_inicias);

    printf("Entre com a minutos que começou: ");
    scanf("%d", &min_inicias);

    printf("Entre com a hora que terminou: ");
    scanf("%d", &h_finais);

    printf("Entre com a minutos que terminou: ");
    scanf("%d", &min_finais);

    duracao_inicial = (h_inicias * 60) + min_inicias;

    duracao_final = (h_finais * 60) + min_finais;

    if (duracao_final <= duracao_inicial){
        duracao_total = (1440 - duracao_inicial) + duracao_final;
        h_jogo = duracao_total / 60;
        m_jogo = duracao_total % 60;

        printf("\nO jogo durou: %d Horas e %d Minutos.\n", h_jogo, m_jogo);
    }
    else{
        duracao_total = duracao_final - duracao_inicial;
        h_jogo = duracao_total / 60;
        m_jogo = duracao_total % 60;

        printf("\nO jogo durou: %d Horas e %d Minutos.\n", h_jogo, m_jogo);
    }

    return 0;
}