/*
  Programa: Laço while
*/
#include <stdio.h>

void main(void)
{
  char ch='\0';

  puts("Digite qualquer letra, ou a letra A para sair do loop.");
  while(ch!='A') ch = getchar();

  printf("Você digitou um A");
}
