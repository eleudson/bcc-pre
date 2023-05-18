#include <stdio.h>

int main()
{
    int x = 1000000000, y;
    char ch = 'A';

    int *p;
    char *c;

    p = &x;
    c = &x;

    printf("x = %d\n", x);
    printf("p aponta para endereço  %p\n", p);
    printf("valor de x apontado por p igual %d\n", *p);
    printf("p aponta para endereço  %p\n", &x);

    printf("valor de x apontado por c igual %d\n", *p);

    y = *p + 1;

    printf("y = %d\n", y);

    return 0;
}
