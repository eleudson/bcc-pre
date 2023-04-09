/*
  Programa: Calcula média de um vetor de notas.
*/
#include <stdio.h>

#define QTD_NOTAS 10  // boa prática para definir tamanho de vetor

int main()
{

  int notas[QTD_NOTAS] = {9, 5, 7, 10, 4, 3, 9, 8, 6, 8};
  int soma = 0;
  float media = 0;

  // somando as notas
  for(int x=0; x<QTD_NOTAS; x++) soma += notas[x];
  printf("Soma = %d\n", soma);

  media = soma / 10.0;
  printf("Media = %.1f", media);

  return 0;
}
