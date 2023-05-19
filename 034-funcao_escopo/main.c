#include <stdio.h>

int s=11, x=33;

void main()
{
    printf("s = %d\n", s);

    int s, x = 90, m=10, n=30;

    s = soma(m, n);
    printf("Soma = %d\n", s + x);
    printf("m = %d e n = %d", m, n);
}

int soma(int a, int b)
{
    int s = a + b;
    a = 11;
    b = 31;
    return s;
}
