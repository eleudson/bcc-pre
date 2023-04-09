/*
  Programa: Não vai até 100.
*/
#include <stdio.h>

void main(void)
{
  for(int t=0; t<100; t++) {
    printf("%d ", t);
    if(t==10) break;
  }
}
