#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// ORDENAÇÃO USANDO INSERÇÃO
void ordenarUsandoInsercao() {
    printf("\nInsercao \n");
    marcarInicioDaExecucao();

    int i = 0, j = 0, tmp;
    for (i = 1; i < TAMANHO; i++) { 
        tmp = valoresParaInsercao[i]; 
        j = i - 1; 
        while (j >= 0 && valoresParaInsercao[j] > tmp) { 
            valoresParaInsercao[j + 1] = valoresParaInsercao[j]; 
            j = j - 1; 
        } 
        valoresParaInsercao[j + 1] = tmp; 
    }

    marcarFinalDaExecucao();
    
    //IMPRIMI NUMEROS ORDENADOS PELO METODO INSERÇÃO
    /*
    for (j = 0; j < TAMANHO; j++) {  
    printf("%d\n", valoresParaInsercao[j]);
    }
    */

    imprimirDuracaoDaExecucao(); //IMPRIMI TEMPO DE ORDENAÇÃO EM SEGUNDOS
}