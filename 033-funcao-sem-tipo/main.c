#include <stdio.h>

float sem_tipo_3();

void main()
{
    printf("Retorno 1 = %d\n", sem_tipo_1());
    printf("Retorno 2 = %d\n", sem_tipo_2());
    printf("Retorno 3 = %f\n", sem_tipo_3());
    printf("Retorno 4 = %c\n", sem_tipo_4());
}

sem_tipo_1(){ }

sem_tipo_2(){ return 10; }

float sem_tipo_3(){ return 10.6; }

sem_tipo_4(){ return 'A'; }
