/*
  Programa: Bloco for sem incremento de variável de controle.
*/
#include <stdio.h>

void main(void)
{
  int x;
  float z;

  for(x=100; x != 65; ) // não há bloco de incremento ou decremento de x
  {
    z = x * x;
    printf("O quadrado de %d, %.2f\n", x, z);
    x-=5;  // x está sendo decrementado dentro do laço
  }
}
