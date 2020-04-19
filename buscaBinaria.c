#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int busca( int array[], int digito, int tamanho)
{
 int inicio,fim,posicao;
 inicio=0;
 fim=tamanho-1;
 while (inicio<=fim)
 {
      posicao=(inicio+fim)/2;
      if (digito==array[posicao])
           return printf("O valor %d foi encontrado na posicao: %d do array", array[posicao], posicao);
      else if (digito<array[posicao])
           fim=posicao-1;
      else
           inicio=posicao+1;
 }
 return printf("Valor nao encontrado.\n");   /* não encontrado */
}

void buscaBinaria() {
    printf("\nBusca Binaria \n");

    //EXIBIR LISTA ORDENADA
    int l = 0;
    for (l = 0; l < TAMANHO; l++) {  
    printf("%d\n", valoresParaQuicksort[l]);
    }

    int digito = 0;
    printf("Digite o valor que deseja buscar: ");
    scanf("%d", &digito);

    //BUSCA BINARIA
    busca(valoresParaQuicksort, digito, TAMANHO);
}