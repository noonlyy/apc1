/*
1. Faça um programa em C que leia três números reais e imprima a média
aritmética destes números.
*/

#include <stdio.h>

int main() {
  int numero1;
  int numero2;
  int numero3;

  printf("Digite o primeiro número: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Digite o segundo número: ");
  deu_certo = scanf("%i", &numero2);

  printf("Digite o terceiro número: ");
  deu_certo = scanf("%i", &numero3);

  float media = (numero1 + numero2 + numero3) / 3;

  printf("A média aritmética é: %f", media);

  return 0;
}