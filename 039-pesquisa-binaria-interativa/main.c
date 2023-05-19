//PESQUISA BINARIA: Implementação Iterativa
//Fonte: Wikipedia

void main()
{
    int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int res, chave;

    chave = 7;
    res = PesquisaBinaria(num, chave, 10);
    printf("Achou a chave %d: %d\n", chave, res);

    chave = 25;
    res = PesquisaBinaria(num, chave, 10);
    printf("NAO achou a chave %d: %d\n", chave, res);
}

int PesquisaBinaria (int vet[], int chave, int Tam)
{
     int inf = 0;     // limite inferior (o primeiro índice de vetor em C é zero          )
     int sup = Tam-1; // limite superior (termina em um número a menos. 0 a 9 são 10 números)
     int meio;
     while (inf <= sup)
     {
          meio = (inf + sup)/2;
          if (chave == vet[meio])
               return meio;
          if (chave < vet[meio])
               sup = meio-1;
          else
               inf = meio+1;
     }
     return -1;   // não encontrado
}
