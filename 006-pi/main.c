/*
  Programa: Dados a altura e o raio de um cilindro circular,
            retorna o valor do volume.
            Obs.: PI é definido como constante.
*/
#include <stdio.h>

const float PI=3.141592;  // definindo a constante PI

int main()
{
    int altura, raio;
    float volume;

    printf("Informe os dados do cilindro circular:\n");
    printf("Valor da altura: ");
    scanf("%d", &altura);
    printf("Valor do raio: ");
    scanf("%d", &raio);

    volume = PI * raio * altura;

    printf("\nO volume do cilindro circular de altura %d e raio %d é %.1f.\n",
           altura, raio, volume);

    return 0;
}
