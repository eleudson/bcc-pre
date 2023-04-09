/*
  Programa: Cria, atribui e formata saída de variável de número decimal
*/

#include <stdio.h>

float n = 1234.5678;  // criando e atribuindo valor para uma
                      // variável de número decimal do tipo float

void main() {
  printf("%f\n", n); // formatação padrão de um número decimal (float)

  printf("|.1  |%.1f|\n", n);  // definindo número de casas decimais
  printf("|.3  |%.3f|\n", n);
  printf("|.4  |%.4f|\n", n);

  printf("|9.1 |%9.1f|\n", n);  // definindo casas decimais e tamanho
  printf("|9.3 |%9.3f|\n", n);  // total de colunas para o número, que
  printf("|9.4 |%9.4f|\n", n);  // fica alinhado à direita.

  printf("|12.1|%12.1f|\n", n);  // tente entender bem essa formatação
  printf("|12.3|%12.3f|\n", n);  // que é muito útil para organizar
  printf("|12.4|%12.4f|\n", n);  // impressão de dados em colunas.
}
