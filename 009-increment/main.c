/*
  Programa: Mostra a diferença de incremento de variável antes ou depois.
*/
#include <stdio.h>

int main()
{
    int x, y;

    x = 1;
    y = 10;

    x += ++y;  // incrementa y e depois soma com x.
    printf("x = %d, y = %d\n", x, y);

    //x = 1;
    //y = 10;

    x += --y;  // soma o valor de y com x e só depois incrementa y.
    printf("x = %d, y = %d\n", x, y);

    x -= y++;
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
