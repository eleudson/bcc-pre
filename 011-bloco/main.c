/*
  Programa: usando bloco de comando para isolar vari�veis locais ou
            algum processamento.
*/
#include <stdio.h>

void main(void)
{
  int i=100;

  {
    int i=120;  // vari�vel i local do bloco
    printf("Dentro %d\n", i);
  } // fim do bloco, vari�vel interna i deixa de existir

  printf("Fora %d\n", i);
}
