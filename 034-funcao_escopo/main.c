#include <stdio.h>

int s=11, x=33;

void main()
{
    int s;

    s = soma(10, 30);
    printf("Soma = %d", s + x);
}

int soma(int a, int b)
{
    int s = a + b;
    return s;
}
