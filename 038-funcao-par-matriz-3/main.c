/* imprimir alguns números */
/* Schildt, 3ed, pg. 143   */

#include <stdio.h>

void display(int *num); // parametro como ponteiro para inteiro
                        // aponta para o primeiro elemento da matriz
                        // FORMA PROFISSIONAL DE PARAMETRO DE MATRIZ
void main(void)
{
    int t[10], i;

    for (i=0; i<10; ++i) t[i]=i;
    display(t);
}

void display(int *num)
{
    int i;

    for (i=0; i<10; ++i) printf("%d ", num[i]);
}
