#include <stdio.h>
#include <string.h>  // bliblioteca padrão para manipulação de strings

int main()
{
    char s1[80], s2[80];  //definindo strings de 80 caracteres

    printf("Digite a primeira frase\n");
    gets(s1);   // gets ler uma string até Enter ser teclado.

    printf("Digite a segunda frase\n");
    gets(s2);

    // estude as funções de manipulação de string a seguir, para
    // entender a saída do programa e outras funções de string.h

    printf("\ncomprimentos: %d %d\n\n", strlen(s1), strlen(s2));

    if (!strcmp(s1, s2)) printf("Strings iguais\n\n");

    strcat(s1, s2);
    printf("%s\n\n", s1);

    strcpy(s1, "Isso é um teste.\n\n");
    printf(s1);

    if(strchr("aqui",'q')) printf("q está em 'aqui'\n\n");

    if(strstr("sempre aqui","aqui")) printf("'aqui' encontrado\n");

    return 0;
}
