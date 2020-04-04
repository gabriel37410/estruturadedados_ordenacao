#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void quick_sort(int *a, int left, int right) {
	int i, j, x, y;
	
	i = left;
	j = right;
	x = a[(left + right) / 2];
	
	while(i <= j) {
		while(a[i] < x && i < right) {
			i++;
		}
		while(a[j] > x && j > left) {
			j--;
		}
		if(i <= j) {
			y = a[i];
			a[i] = a[j];
			a[j] = y;
			i++;
			j--;
		}
	}
	
	if(j > left) {
		quick_sort(a, left, j);
	}
	if(i < right) {
		quick_sort(a, i, right);
	}
}

// ORDENAÇÃO USANDO QUICK SORT
void ordenarUsandoQuicksort() {
    printf("\nQuick Sort \n");
    marcarInicioDaExecucao();

    quick_sort(valoresParaQuicksort, 0, TAMANHO -1);
   
    marcarFinalDaExecucao();
    
    //IMPRIMI NUMEROS ORDENADOS PELO METODO QUICKSORT
    /*
    int l = 0;
    for (l = 0; l < TAMANHO; l++) {  
    printf("%d\n", valoresParaQuicksort[l]);
    }
    */
    

    imprimirDuracaoDaExecucao(); //IMPRIMI TEMPO DE ORDENAÇÃO EM SEGUNDOS
}