#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// ORDENAÇÃO USANDO SELEÇÃO
void ordenarUsandoSelecao() {
    printf("\nSelecao \n");
    marcarInicioDaExecucao();

    int i = 0;
    int x = 0;
    int posicao = 0; // Variavel criada para armazenar
    int ValorInicial = 0;

    for (x = 0; x < TAMANHO; x++) { // Loop de 0 até 9

        int tmp =11111;

    for (i = x; i < TAMANHO; i++) {

        if (valoresParaSelecao[i]<tmp) {
            tmp = valoresParaSelecao[i]; // Atualizo o valor de tmp
            posicao = i;
        };
    };

    ValorInicial = valoresParaSelecao[x];
    valoresParaSelecao[x] = tmp;
    valoresParaSelecao[posicao] = ValorInicial;
    i=x; 
}

    //IMPRIMI NUMEROS ORDENADOS PELO METODO SELEÇÃO
    /*
    int l = 0;
    for (l = 0; l < TAMANHO; l++) {  
    printf("%d\n", valoresParaSelecao[l]);
    }
    */
    
    marcarFinalDaExecucao();
    imprimirDuracaoDaExecucao(); //IMPRIMI TEMPO DE ORDENAÇÃO EM SEGUNDOS
}