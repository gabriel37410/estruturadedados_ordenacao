#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// ORDENAÇÃO USANDO SELEÇÃO
void ordenarUsandoSelecao() {
    printf("\nSelecao \n\n");
    marcarInicioDaExecucao();


    int i = 0;
    int x = 0;
    int y = 0;
    int posicao = 0;
    int n = TAMANHO;

    for (x = 0; x < TAMANHO; x++) {
    int tmp =0;
        for (i = 0; i < n; i++) {
                if (valoresParaSelecao[i]>tmp) {
                    tmp = valoresParaSelecao[i];
                    posicao = i;
                }
        }

        for (y = posicao; y <TAMANHO ; y++) {
            valoresParaSelecao[y]=valoresParaSelecao[y+1];
        }
        valoresParaSelecao[TAMANHO-i] = tmp;
        n = n - 1;
    }
    //printf("\n\n%d\n\n",tmp);

    //IMPRIMI NUMEROS ORDENADOS PELO METODO BOLHA
int j=0;
    for (j = 0; j < TAMANHO; j++) {  
    printf("%d\n", valoresParaSelecao[j]);
    }
    



    marcarFinalDaExecucao();
    imprimirDuracaoDaExecucao(); //IMPRIMI TEMPO DE ORDENAÇÃO EM SEGUNDOS
}