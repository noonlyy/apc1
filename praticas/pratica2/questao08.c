/*
9. Faça um programa em C que leia um número inteiro e imprima o caractere correspondente na tabela ASCII.
*/

#include <stdio.h>

int main() {
  double numero;
  
  printf("Digite um numero inteiro: ");
  scanf("%lf", &numero);

  printf("O caractere correspondente na tabela ASCII eh: %f\n", numero);
  
  return 0;
}