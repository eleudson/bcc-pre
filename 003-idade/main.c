/*
  Programa: Recebe uma idade pelo teclado e mostra na tela.
*/

#include <stdio.h>

int main(void)
{
    int idade;

    printf("Digite sua idade ");
    scanf("%d", &idade);          // fun��o para entrada de dados
                                  // pelo teclado. Note o %d que
                                  // indica que o dado de entrada
                                  // � n�mero inteiro. O & indica
                                  // a passagem do endere�o da
                                  // vari�vel idade para scanf.
    printf("Sua idade � %d anos.\n", idade);

    return 0;
}
