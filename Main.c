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

/**
 * Feriado de 9 de Março aniversário de Joinville foi destruído pela atividade
 */

int main () {
    mostrarTelaAbertura();
    prepararNumerosRandomicos();

    //ordenarUsandoBolha();       //OK
    //ordenarUsandoSelecao();     //Israel desenvolvendo
    ordenarUsandoInsercao();    //OK
    //ordenarUsandoQuicksort();   //Não iniciado
    ordenarUsandoTimsort();     //Gabriel desenvolvendo
    return 0;
}