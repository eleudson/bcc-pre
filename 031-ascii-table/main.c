/*
  Programa: Imprime tabela ASCII.
  Fonte: https://www.includehelp.com/c-programs/c-program-print-ascii-table.aspx
*/
#include <stdio.h>

int main()
{
    unsigned char count;
    for(count=32; count< 255; count+=1)
    {
        printf("  %3d - %c",count,count);
        if(count % 6==0)
            printf("\n");
    }
    return 0;
}

