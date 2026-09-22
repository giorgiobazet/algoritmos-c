#include <stdio.h>
#include <string.h>

/*
    int main(){

    const float salario_min = 1621.0;

    struct pessoa
    {
        char nome[50];
        int sexo;
        float salario;
    };

    struct pessoa p;

    printf("\nEntre com o nome: "); 
    scanf("%s", p.nome); 
    
    while (strcmp(p.nome,"fim") != 0){
        
        printf("\nEntre com o sexo "); 
        scanf("%d", &p.sexo); 

        printf("\nEntre com o salario: "); 
        scanf("%f", &p.salario); 

        if ((p.salario > 2 * salario_min)){
            printf("\nSexo: %d", p.sexo);
            printf("\nSalario: %.2f\n", p.salario);
        };

        printf("\nEntre com o nome: "); 
        scanf("%s", p.nome); 
    }
    
    
}
*/

/*
int main(){

    const int ano_atual = 2026;
    int ano_mj = 1, cont = 0, qtd = 3;
    char nome_mj[50];

    typedef struct candidato
    {
        char nome[50];
        int ano_nasc;
        char cidade[50];
    } t_candidato;

    t_candidato c;

    while (cont < qtd)
    {
        printf("\nEntre com o nome: "); 
        scanf("%s", c.nome); 

        printf("\nEntre com o ano de nascimento: "); 
        scanf("%d", &c.ano_nasc); 

        printf("\nEntre com a cidade de origem: "); 
        scanf("%s", c.cidade); 

        if (c.ano_nasc > ano_mj)
        {
            ano_mj = c.ano_nasc;
            strcpy(nome_mj, c.nome);
        }

        cont++;
    }

    printf("\nNome do candidato mais novo: %s", nome_mj);
    printf("\nIdade do candidato mais novo: %d\n", ano_atual - ano_mj);

}

*/

int main(){

    int x = 2, y = 3, *px, *py;

    px = &x;    
    py = &y;

    printf("%d %d\n", x, y);
    printf("%d %d\n", *px, *py);
    printf("%d %d\n", &px, &py);
}
                                                                        