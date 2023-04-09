/*
  Programa: Usando a função de saída puts().
*/

#include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];

   strcpy(str1, "tutorialspoint");  // outra forma de atribuir valor a string
   strcpy(str2, "compileonline");

   puts(str1);  // puts imprime o valor de uma string sem qualquer formatação
   puts(str2);  // puts aceita um parâmetro string e já faz quebra de linha
   puts("A função puts() não aceita interpolação tipo %d ou %c.");

   return(0);
}
