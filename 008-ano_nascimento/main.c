/*
  Programa: Dados a idade e o ano atual, retorna o ano de nascimento.
*/

#include <stdio.h>

int main()
{
    int idade, ano_atual, ano_nascimento;

    printf("Informe os dados da pessoa:\n");
    printf("Idade: ");
    scanf("%d", &idade);
    printf("Ano atual: ");
    scanf("%d", &ano_atual);

    ano_nascimento = ano_atual - idade;

    printf("\nAno de nascimento e %d.\n", ano_nascimento);

    return 0;
}
