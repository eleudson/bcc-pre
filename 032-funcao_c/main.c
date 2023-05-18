#include <stdio.h>

void main()
{
    int s;

    s = soma(10, 30);
    printf("Soma = %d", s);
}

int soma(int a, int b)
{
    int s;
    s = a + b;
    return s;
}
