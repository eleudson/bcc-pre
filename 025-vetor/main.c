/*
  Programa: Mostra a declara��o e uso de vetor.
*/

#include <stdio.h>

void main(void)
{
  int vetor[20];  // declarando vetor de 30 n�meros inteiros.
  int x;

  // atribuindo valores
  for(x=0; x<20; ++x) vetor[x] = x + 1; // �ndice x come�a de zero

  // imprimindo valores
  for(x=0; x<20; x++) printf("%d ", vetor[x]);

  return 0;
}
