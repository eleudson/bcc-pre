/*
  Programa: Loop infinito. Analise o porquê!
*/
#include <stdio.h>

void main(void)
{
  int x=10;
  int y;

  for(y=11; y!=x; y++) printf("Dentro %d\n", y);

  printf("Fora %d", y);
}
