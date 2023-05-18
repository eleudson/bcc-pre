#include <stdio.h>
#include <locale.h>

int m=50, n=60; // variável global
int soma(int a, int b);

int main()
{
    setlocale(LC_ALL, "");

    int y=10, z=20; // variável local de main()
    printf("MAIN y = %d e z = %d\n", y, z);
    printf("soma = %d\n", soma(y,z));
    printf("MAIN m = %d e n = %d\n", m, n);
    return 0;
}

int soma(int a, int b) {
    int y=30, z=40; // variável local de soma()
    printf("SOMA y = %d e z = %d\n", y, z);
    printf("SOMA m = %d e n = %d\n", m, n);

    return a + b;
}
