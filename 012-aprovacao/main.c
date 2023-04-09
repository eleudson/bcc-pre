/*
  Programa: Avalia situação do aluno com comando if.
*/
#include <stdio.h>

int main()
{
    int nota = 0;

    printf("Informe a nota do aluno de 0 a 10\n");
    scanf("%d", &nota);

    if (nota >= 6) puts("Aprovado!");
    else if (nota >= 3) puts("Fazer prova final!");
    else puts("Reprovado!");

    return 0;
}
