//PESQUISA BINARIA: Implementação Recursiva
//Fonte: Wikipedia

void main()
{
    int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int res, chave;

    chave = 7;
    res = PesquisaBinaria(chave, num, 0, 9);
    printf("Achou a chave %d: %d\n", chave, res);

    chave = 25;
    res = PesquisaBinaria(chave, num, 0, 9);
    printf("NAO achou a chave %d: %d\n", chave, res);
}

// x => chave | v[] => vetor ordenado
// e => limite inferior (esquerda) | d => limite superior (direita)
int PesquisaBinaria (int x, int v[], int e, int d)
{
 int meio = (e + d)/2;
 if (v[meio] == x)
    return meio;
 if (e >= d)
    return -1; // não encontrado
 else
     if (v[meio] < x)
        return PesquisaBinaria(x, v, meio+1,      d);
     else
        return PesquisaBinaria(x, v,      e, meio-1);
}
