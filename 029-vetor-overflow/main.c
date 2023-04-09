/*
  vetor_over.c
  Mostra o estouro de indice de um vetor.
*/

#include <stdio.h>

int main()
{
  int vetor[50];
  int x;

  // note que est� sendo atribu�do valor al�m do reservado (50)
  for(x=0; x<60; x++) vetor[x] = x;

  for(x=0; x<60; x++) printf("%d ", vetor[x]);

  // mesmo assim o C pega o valor do �ndice 60
  printf("\n\n vetor[59] = %d", vetor[59]);

  // mas mostra um valor qualquer para �ndice acima do atribu�do
  printf("\n\n vetor[70] = %d", vetor[70]);

  return 0;
}
