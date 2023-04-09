/*
  Programa: Imprime numeros sequenciais a partir de zero,
            enquanto nao for teclado x.
*/
#include <stdio.h>

int main()
{
    char ch;
    unsigned int num = 0;

    do {
        puts("Digite uma letra qualquer ou x para sair.");
        ch = getchar();

        if (ch == 'x' || ch == 'X') break;
        scanf("%*c"); //Limpeza do bufffer do teclado

        printf("Numero %d\n\n", num);
        num++;
    } while(1);

    return 0;
}
