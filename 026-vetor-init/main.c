/*
  Programa: Formas de inicialização de vetor.
*/
#include <stdio.h>

int main()
{
  int numeros[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  char frase1[14] = "Estudo no IFCE";

  char frase2[9] = {'C','u','r','s','o',' ','B','C','C'};

  for(int x=0; x<10; x++) printf("%d-", numeros[x]);
  printf("\n\n");

  for(int x=0; x<14; x++) printf("%c", frase1[x]);
  printf("\n\n");

  for(int x=0; x<9; x++) printf("%c", frase2[x]);
  printf("\n\n");

  return 0;
}
