#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "abertura.c"
#include "gerar_numeros.c"
#include "tempos.c"
#include "bolha.c"
#include "selecao.c"
#include "insercao.c"
#include "quicksort.c"
#include "timsort.c"


int main () {
    mostrarTelaAbertura();
    prepararNumerosRandomicos();

    ordenarUsandoBolha();       //OK
    ordenarUsandoSelecao();     //OK
    ordenarUsandoInsercao();    //OK
    ordenarUsandoQuicksort();   //OK
    ordenarUsandoTimsort();     //Falta implementar inserção
    return 0;
}

