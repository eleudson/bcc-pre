/*
  Programa: Bloco for sem incremento de vari�vel de controle.
*/
#include <stdio.h>

void main(void)
{
  int x;
  float z;

  for(x=100; x != 65; ) // n�o h� bloco de incremento ou decremento de x
  {
    z = x * x;
    printf("O quadrado de %d, %.2f\n", x, z);
    x-=5;  // x est� sendo decrementado dentro do la�o
  }
}
