/*
  Programa: Saindo do programa com fun��o exit().
*/
#include <stdio.h>

void main(void)
{
  char ch='\0';
  puts("Digite qualquer caractere.");
  puts("X ou x sai direto do programa.");
  puts("A letra A sai primeiro do la�o.");
  do {
    ch = getchar();
    scanf("%*c"); //Limpeza do bufffer do teclado
	if (ch=='x' || ch=='X') {
	  puts("Saiu direto do programa");
      exit(0);
	}
  } while(ch != 'A');
  puts("Saiu do la�o e depois do programa");
}
