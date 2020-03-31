#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// ORDENAÇÃO EM BOLHA
void ordenarUsandoBolha() {
    printf("\nBolha \n");
    marcarInicioDaExecucao();

    int i = 0, j = 0, tmp;
    for (i = 0; i < TAMANHO; i++) {
        for (j = 0; j < TAMANHO - i - 1; j++) {
            if (valoresParaBolha[j] > valoresParaBolha[j + 1]) {
                tmp = valoresParaBolha[j];
                valoresParaBolha[j] = valoresParaBolha[j + 1];
                valoresParaBolha[j + 1] = tmp;
            }
        }
    }

    marcarFinalDaExecucao();
    
    //IMPRIMI NUMEROS ORDENADOS PELO METODO BOLHA
    /*
    for (j = 0; j < TAMANHO; j++) {  
    printf("%d\n", valoresParaBolha[j]);
    }
    */

    imprimirDuracaoDaExecucao(); //IMPRIMI TEMPO DE ORDENAÇÃO EM SEGUNDOS
}