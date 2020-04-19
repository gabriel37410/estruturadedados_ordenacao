#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int busca( int k[], int chave , int N)
{
 int inf,sup,meio;
 inf=0;
 sup=N-1;
 printf("Digite o valor que deseja buscar: ");
 scanf("%d", &chave);
 while (inf<=sup)
 {
      meio=(inf+sup)/2;
      if (chave==k[meio])
           return printf("Encontrado na posicao: %d do array", meio);
      else if (chave<k[meio])
           sup=meio-1;
      else
           inf=meio+1;
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

    //BUSCA BINARIA
    busca(valoresParaQuicksort, 0, TAMANHO);
}