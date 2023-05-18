#include <stdio.h>

void main()
{
    int a=5, b=10;
    printf("Soma de a(%d) e b(%d) = %d\n", a, b, soma(a,b));

    inverte(&a, &b);
    printf("Invertido: a = %d e b = %d", a, b);
}

int soma(int a, int b)
{
    int s = a + b;
    return s;
}

void inverte(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
