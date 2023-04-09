/*
  Programa: Soma de números inteiros
*/

#include <stdio.h>

int main()
{
	int a;  // declarando variável do tipo número inteiro.
	int b;

    a = 10; // atribuindo valores inteiros às variáveis.
    b = 30;

    printf("Soma é igual a %d", a + b); // saída formatada com iterpolação
                                        // de string com %d, para indicar
                                        // local onde o valor da soma inteira
                                        // será incluído na saída.

    return 0;
}
