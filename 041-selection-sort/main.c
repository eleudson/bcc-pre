//PESQUISA BINARIA: Implementação Recursiva
//Fonte: Wikipedia

void main()
{
    int num[10] = {9, 7, 8, 1, 2, 0, 4, 3, 6, 5};
    int tam = 10;

    selection_sort(num, tam);

    for (int i = 0; i < (tam-1); i++) printf("%d ", num[i]);
}

void selection_sort(int num[], int tam) {
  int i, j, min, aux;
  for (i = 0; i < (tam-1); i++)
  {
     min = i;
     for (j = (i+1); j < tam; j++) {
       if(num[j] < num[min])
         min = j;
     }
     if (i != min) {
       aux = num[i];
       num[i] = num[min];
       num[min] = aux;
     }
  }
}
