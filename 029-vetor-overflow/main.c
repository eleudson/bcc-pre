/*
  vetor_over.c
  Mostra o estouro de indice de um vetor.
*/

#include <stdio.h>

int main()
{
  int vetor[50];
  int x;

  // note que está sendo atribuído valor além do reservado (50)
  for(x=0; x<60; x++) vetor[x] = x;

  for(x=0; x<60; x++) printf("%d ", vetor[x]);

  // mesmo assim o C pega o valor do índice 60
  printf("\n\n vetor[59] = %d", vetor[59]);

  // mas mostra um valor qualquer para índice acima do atribuído
  printf("\n\n vetor[70] = %d", vetor[70]);

  return 0;
}
