/*
  Programa: usando bloco de comando para isolar variáveis locais ou
            algum processamento.
*/
#include <stdio.h>

void main(void)
{
  int i=100;

  {
    int i=120;  // variável i local do bloco
    printf("Dentro %d\n", i);
  } // fim do bloco, variável interna i deixa de existir

  printf("Fora %d\n", i);
}
