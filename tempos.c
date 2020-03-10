#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// MARCAÇÃO DO TEMPO DE EXECUÇÃO DAS ORDENAÇÕES
clock_t inicial, final;
void marcarInicioDaExecucao() {
inicial = clock();
//printf("%d\n\n", inicial);
}

void marcarFinalDaExecucao() {
final = clock();
//printf("%d\n\n", final);
}

void imprimirDuracaoDaExecucao() {
double duracao = ((double)final - inicial)/CLOCKS_PER_SEC;
printf("Tempo de ordenacao %f segundos\n", duracao);
}