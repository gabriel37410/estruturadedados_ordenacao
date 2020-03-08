#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <time.h>


#define TAMANHO 1000
#define VALOR_MAXIMO 10000

int valoresRandomicos[TAMANHO];
int valoresParaBolha[TAMANHO];
int valoresParaInsercao[TAMANHO];
int valoresParaSelecao[TAMANHO];

void prepararNumerosRandomicos() {
    time_t t;
    int i = 0;
    int j = 0;
    srand((unsigned) time(&t));
    for( i = 0 ; i < TAMANHO ; i++ ) {
        valoresRandomicos[i] = (rand() % VALOR_MAXIMO);
        valoresParaBolha[j] = valoresRandomicos[i];
        valoresParaInsercao[j] = valoresRandomicos[i];
        valoresParaSelecao[j] = valoresRandomicos[i];
        j++;
        //printf("%d\n", valoresRandomicos[i]);
    }

}