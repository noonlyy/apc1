/* 1. Faça um programa em C que determine se um número inteiro lido é par ou
 ímpar.
 */

#include <stdio.h>

int main() {
  int numero;

  printf("Entre com um número inteiro: ");
  int leu_certo = scanf("%i", &numero);

  if (leu_certo) {
    int numero_eh_divisivel_por_2 = numero % 2 == 0;

    if (numero_eh_divisivel_por_2) {
      printf("O número %i é par!\n", numero);
    } else {
      printf("O número %i é ímpar!\n", numero);
    }
  } else {
    printf("Não foi possível ler o número inteiro!\n");
  }

  return 0;
}