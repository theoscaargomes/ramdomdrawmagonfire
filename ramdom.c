#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void main(void) {
    int temaSorteado, i;

    char* nomes[9];

    nomes[0] = "Dicas de estudo por meio da tecnologia";
    nomes[1] = "Tenha uma rotina saudavel de acessos";
    nomes[2] = "Tenha animo por meio da tecnologia";
    nomes[3] = "Seja produtivo por meio da tecnologia";
    nomes[4] = "Imoralidade sexual por meio de rede sociais";
    nomes[5] = "Tenha um trabalho e futuro por meio da tecnologia";
    nomes[6] = "Estresse por excesso de consumo de tecnologia";
    nomes[7] = "Nao se sentir morno";
    nomes[8] = "Tenha uma vida equilibrada consumindo tecnologia";
    nomes[9] = "Empreenda por meio da tecnologia";

    srand(time(NULL));

    for (i = 0; i < 1; i++) {
        temaSorteado = rand() % 1;
        printf("O sorteado foi: %s\n", nomes[temaSorteado]);
    }
}
 
