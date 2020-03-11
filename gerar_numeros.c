#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define TAMANHO 10       // Quantidades de números gerados
#define VALOR_MAXIMO 10  // Valor máximo 

int valoresRandomicos[TAMANHO];
int valoresParaBolha[TAMANHO];
int valoresParaSelecao[TAMANHO];
int valoresParaInsercao[TAMANHO];

void prepararNumerosRandomicos() {
    time_t t;
    int i = 0;
    srand((unsigned) time(&t));
    for( i = 0 ; i < TAMANHO ; i++ ) {
        valoresRandomicos[i] = (rand() % VALOR_MAXIMO);
        valoresParaBolha[i] = valoresRandomicos[i];
        valoresParaSelecao[i] = valoresRandomicos[i];
        valoresParaInsercao[i] = valoresRandomicos[i];
        //printf("%d\n", valoresRandomicos[i]);
    }

}