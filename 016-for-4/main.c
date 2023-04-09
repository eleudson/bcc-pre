/*
  Programa: Variável local ao for.
*/
#include <stdio.h>

void main(void)
{
  int x = 5;

  for(int x=1; x<=10; x++)
    printf("Dentro x = %d\n", x);

  printf("FORA x = %d\n", x);
}
