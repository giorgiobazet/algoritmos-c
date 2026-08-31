#include <stdio.h>
#include <string.h>

int main(){

    char time_casa[50], time_visitante[50];
    int gols_casa, gols_fora, resultado;

    printf("Entre com o nome do time da casa: ");
    fgets(time_casa, 50, stdin);
    time_casa[strcspn(time_casa, "\n")] = 0;

    printf("Entre com o(s) gol(s) marcados: ");
    scanf("%d", &gols_casa);

    getchar();  

    printf("\nEntre com o nome do time visitante: ");
    fgets(time_visitante, 50, stdin);
    time_visitante[strcspn(time_visitante, "\n")] = 0;

    printf("Entre com o(s) gol(s) marcados: ");
    scanf("%d", &gols_fora);

    getchar();    

    resultado = gols_casa - gols_fora;

    if (resultado > 0){
        printf("%s, venceu!\n", time_casa);
    }
    else if(resultado < 0) {
        printf("%s, venceu!\n", time_visitante);
    }
    else{
        printf("Houve um empate!\n");
    }

}