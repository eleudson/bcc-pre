/*
  Programa: La�o do-while
*/
#include <stdio.h>

void main(void)
{
  char ch='A';
  int x=1;
  do {
    x++;
    puts("Digite uma letra qualquer ou A para sair.");
    ch = getchar();
    setbuf(stdin, NULL);  // limpa o buffer do teclado.
  } while(ch!='A');

  printf("Voc� digitou um A e x = %d", x);
}
