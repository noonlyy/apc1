/*
7. Escrever um programa em C que liste os 10 primeiros números da série de
Fibonacci.
*/

#include <stdio.h>

int main() {
  int n1 = 0, n2 = 1, next, i;

  printf("Os primeiros 10 números da série de Fibonacci são:\n");

  for (i = 0; i < 10; i++) {
    if (i <= 1)
      next = i;
    else {
      next = n1 + n2;
      n1 = n2;
      n2 = next;
    }
    printf("%d\n", next);
  }
  return 0;
}