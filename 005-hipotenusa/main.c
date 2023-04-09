/*
  Programa: Dados 2 catetos do tri�ngulo, retorna o valor da hipotenusa.
*/

#include <stdio.h>
#include <math.h>      // bliblioteca padr�o de fun��es matem�ticas.

int main()
{
    int cateto_a, cateto_b;  // mais de uma vari�vel na mesma linha.
    float hipotenusa;

    printf("Informe os dados do tri�ngulo:\n");
    printf("Valor do cateto A: ");
    scanf("%d", &cateto_a);
    printf("Valor do cateto B: ");
    scanf("%d", &cateto_b);

    hipotenusa = sqrt(pow(cateto_a, 2) * pow(cateto_b, 2));  // express�o
    // sqrt - raiz quadrada
    // pow  - potencia��o
    // a biblioteca math.h tem muitas outras fun��es matem�ticas.

    printf("\nA hipotenusa do tri�ngulo de catetos %d e %d e %.1f.\n",
           cateto_a, cateto_b, hipotenusa);

    return 0;
}


