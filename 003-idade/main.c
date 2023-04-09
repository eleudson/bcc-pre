/*
  Programa: Recebe uma idade pelo teclado e mostra na tela.
*/

#include <stdio.h>

int main(void)
{
    int idade;

    printf("Digite sua idade ");
    scanf("%d", &idade);          // função para entrada de dados
                                  // pelo teclado. Note o %d que
                                  // indica que o dado de entrada
                                  // é número inteiro. O & indica
                                  // a passagem do endereço da
                                  // variável idade para scanf.
    printf("Sua idade é %d anos.\n", idade);

    return 0;
}
