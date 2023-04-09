/*
  Programa: Calcula números primos de 0 a 100. Algoritmo 1.
*/
#include <stdio.h>

int main() {
  int vezesDivisivel = 0;

  printf("Os números primos de 1 até 100 são: \n");

  for (int n = 1; n <= 100; n++) {

    for (int i = 1; i <= n; i++) {
      if (n % i == 0) {
        vezesDivisivel++;
      }
    }

    if (vezesDivisivel == 2) {
      printf("%d ", n);
    }

    vezesDivisivel = 0;
  }

  return 0;
}
