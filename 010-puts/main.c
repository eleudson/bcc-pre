/*
  Programa: Usando a fun��o de sa�da puts().
*/

#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];

   strcpy(str1, "tutorialspoint");  // outra forma de atribuir valor a string
   strcpy(str2, "compileonline");

   puts(str1);  // puts imprime o valor de uma string sem qualquer formata��o
   puts(str2);  // puts aceita um par�metro string e j� faz quebra de linha
   puts("A fun��o puts() n�o aceita interpola��o tipo %d ou %c.");

   return(0);
}
