#include <stdio.h>
#include <math.h>

int main() {
    
    const float valor_g = 2.98;
    float o_inicio, o_final, n_litros, v_recebido, l_liquido, m_consumo, o_diario;

    printf("Entre com a marcação inicial do odômetro: ");
    scanf("%f", &o_inicio);
    
    printf("Entre com a marcação final do odômetro: ");
    scanf("%f", &o_final);
    
    printf("Entre com o número de litros gastos: ");
    scanf("%f", &n_litros);
    
    printf("Entre com o valor recebido dos passageiros em reais: ");
    scanf("%f", &v_recebido);

    o_diario = o_final - o_inicio;

    m_consumo = o_diario / n_litros;

    l_liquido = v_recebido - (n_litros * valor_g);

    printf("Média de consumo em Km/l: %.2f \n", m_consumo);
    printf("Lucro líquido do dia: R$ %.2f \n", l_liquido);

    return 0;
}