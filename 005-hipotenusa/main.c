/*
  Programa: Dados 2 catetos do triângulo, retorna o valor da hipotenusa.
*/

#include <stdio.h>
#include <math.h>      // bliblioteca padrão de funções matemáticas.

int main()
{
    int cateto_a, cateto_b;  // mais de uma variável na mesma linha.
    float hipotenusa;

    printf("Informe os dados do triângulo:\n");
    printf("Valor do cateto A: ");
    scanf("%d", &cateto_a);
    printf("Valor do cateto B: ");
    scanf("%d", &cateto_b);

    hipotenusa = sqrt(pow(cateto_a, 2) * pow(cateto_b, 2));  // expressão
    // sqrt - raiz quadrada
    // pow  - potenciação
    // a biblioteca math.h tem muitas outras funções matemáticas.

    printf("\nA hipotenusa do triângulo de catetos %d e %d e %.1f.\n",
           cateto_a, cateto_b, hipotenusa);

    return 0;
}


