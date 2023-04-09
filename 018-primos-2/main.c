/*
  Programa: Imprime números primos entre 0 e 100, pelo Crivo de Erastotenes.
  Fonte: https://brasilescola.uol.com.br/o-que-e/matematica/o-que-e-numero-primo.htm
*/
#include <stdio.h>

int main()
{
    printf("Numeros primos entre 0 e 100.\n");

    for(int n = 0; n <= 100; n++) {
        /*** Crivo de Eratostenes (nao primos) ***/
        if (n <= 1);                      // menor que 1
        else if ((n != 2) && (n%2 == 0)); // nao 2 e divisivel por 2
        else if ((n != 3) && (n%3 == 0)); // nao 3 e divisivel por 3
        else if ((n != 5) && (n%5 == 0)); // nao 5 e divisivel por 5
        else if ((n != 7) && (n%7 == 0)); // nao 7 e divisivel por 7
        else printf("%d ", n);
    }

    return 0;
}
