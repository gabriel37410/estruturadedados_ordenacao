#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void timSort(int *vetor, int posicaoInicio, int posicaoFim) {

    int i, j, k, metadeTamanho, *vetorTemp;
    if(posicaoInicio == posicaoFim) return;
    metadeTamanho = (posicaoInicio + posicaoFim ) / 2;

    timSort(vetor, posicaoInicio, metadeTamanho);
    timSort(vetor, metadeTamanho + 1, posicaoFim);

    i = posicaoInicio;
    j = metadeTamanho + 1;
    k = 0;
    vetorTemp = (int *) malloc(sizeof(int) * (posicaoFim - posicaoInicio + 1));

    while(i < metadeTamanho + 1 || j  < posicaoFim + 1) {
        if (i == metadeTamanho + 1 ) { 
            vetorTemp[k] = vetor[j];
            j++;
            k++;
        }
        else {
            if (j == posicaoFim + 1) {
                vetorTemp[k] = vetor[i];
                i++;
                k++;
            }
            else {
                if (vetor[i] < vetor[j]) {
                    vetorTemp[k] = vetor[i];
                    i++;
                    k++;
                }
                else {
                    vetorTemp[k] = vetor[j];
                    j++;
                    k++;
                }
            }
        }

    }
    for(i = posicaoInicio; i <= posicaoFim; i++) {
        vetor[i] = vetorTemp[i - posicaoInicio];
    }
    free(vetorTemp);

}

// ORDENAÇÃO USANDO TIM SORT
void ordenarUsandoTimsort() {
    printf("\nTimSort \n");
    marcarInicioDaExecucao();

    timSort(valoresParaTimsort, 0, TAMANHO -1);

    marcarFinalDaExecucao();
    
    //IMPRIMI NUMEROS ORDENADOS PELO METODO TIMSORT
    /*
    int l = 0;
    for (l = 0; l < TAMANHO; l++) {  
    printf("%d\n", valoresParaTimsort[l]);
    }
    */
    
    imprimirDuracaoDaExecucao(); //IMPRIMI TEMPO DE ORDENAÇÃO EM SEGUNDOS
}