#include <stdio.h>

int main()
{
    int rol[80];
    int qtd=0, soma=0, mediana=0, x_meio=0;
    float media;

    printf("Quantos números irá digitar? ");
    scanf("%d", &qtd);

    for(int x=0; x < qtd; x++) {
        printf("Número %d? ", x + 1);
        scanf("%d", &rol[x]);
    }

    for(int x=0; x < qtd; x++) soma += rol[x];

    media = soma / (float) qtd;  // ou dividir por (qtd * 1.0) para resultado decimal
    printf("Media aritmetica = %f\n", media);

    x_meio = qtd/2;  // indice do elemento do meio do vetor
    if(qtd % 2 == 0){
        mediana = (rol[x_meio-1] + rol[x_meio])/2;
    } else {
        mediana = rol[x_meio];
    }
    printf("Mediana = %f", mediana);

    return 0;
}

/*
Rol: é a ordenação dos dados coletados na amostra,
     em ordem crescente ou decrescente.
*/
