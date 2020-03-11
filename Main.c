#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "abertura.c"
#include "gerar_numeros.c"
#include "tempos.c"
#include "bolha.c"
#include "selecao.c"


int main () {

    //mostrarTelaAbertura();
    prepararNumerosRandomicos();
    //ordenarUsandoBolha();
    ordenarUsandoSelecao();

    return 0;
}