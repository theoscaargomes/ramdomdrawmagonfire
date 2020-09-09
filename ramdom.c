#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void main(void) {
    int temaSorteado, i;

    char* nomes[4];

    nomes[0] = "Dicas de estudo por meio da tecnologia";
    nomes[1] = "Tenha ânimo e bons hábitos por meio da tecnologia";
    nomes[2] = "Tenha um trabalho e futuro por meio da tecnologia";
    nomes[3] = "Estresse por excesso de consumo de tecnologia";
    
    srand(time(NULL));

    for (i = 0; i < 4; i++) {
        temaSorteado = rand() % 4;
        printf("O sorteado foi: %s\n", nomes[temaSorteado]);
    }
}
