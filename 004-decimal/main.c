/*
  Programa: Cria, atribui e formata sa�da de vari�vel de n�mero decimal
*/

#include <stdio.h>

float n = 1234.5678;  // criando e atribuindo valor para uma
                      // vari�vel de n�mero decimal do tipo float

void main() {
  printf("%f\n", n); // formata��o padr�o de um n�mero decimal (float)

  printf("|.1  |%.1f|\n", n);  // definindo n�mero de casas decimais
  printf("|.3  |%.3f|\n", n);
  printf("|.4  |%.4f|\n", n);

  printf("|9.1 |%9.1f|\n", n);  // definindo casas decimais e tamanho
  printf("|9.3 |%9.3f|\n", n);  // total de colunas para o n�mero, que
  printf("|9.4 |%9.4f|\n", n);  // fica alinhado � direita.

  printf("|12.1|%12.1f|\n", n);  // tente entender bem essa formata��o
  printf("|12.3|%12.3f|\n", n);  // que � muito �til para organizar
  printf("|12.4|%12.4f|\n", n);  // impress�o de dados em colunas.
}
