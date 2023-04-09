/*
  Programa: Ler 10 n�meros inteiros e mostra quais s�o pares e �mpares.
*/

#include <stdio.h>

int main()
{
    int num[10];

    puts("Digite 10 n�meros inteiros!");
    for(int x=0; x<10; ++x) {
        printf("Num. %d = ", x + 1);
        scanf("%d", &num[x]);
    }

    puts("Os n�meros digitados s�o:");
    for(int x=0; x<10; ++x) printf("%d-", num[x]);

    puts("Listando pares e �mpares.");
    for(int x=0; x<10; ++x){
        if (num[x] % 2 == 0) printf("\n%d e par, na posicao %d", num[x], x+1);
        else if (num[x] % 3 == 0) printf("\n%d e impar, na posicao %d", num[x], x+1);
    }
    return 0;
}
