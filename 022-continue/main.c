/*
  Programa: N�o imprime m�ltiplos de 5.
*/
#include <stdio.h>

void main(void)
{
  for(int t=0; t<30; t++) {
    if(t % 5 == 0) continue; // vai direto para pr�xima intera��o
    printf("%d ", t);
  }
}
