/*
  Programa: Exemplo de um menu simples.
*/
#include <stdio.h>

int main()
{
    char opcao;

    do {
        //scanf("%*c"); //Limpeza do bufffer do teclado
        printf("*** Escolha uma Opção ***\n");
        printf("1 - Calcular Quadrado\n");
        printf("0 - Sair\n");

        opcao = getchar();
        //setbuf(stdin, NULL);  // limpa o buffer do teclado.

        switch(opcao) {
            case '1': {
                //calcular quadrado
                printf('Opcao 1');
                break;
            }
        }
        system("cls");
    } while(opcao != '0');

    printf("Bye!");

    return 0;
}
