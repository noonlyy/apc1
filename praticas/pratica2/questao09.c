/*
9. Faça um programa em C que leia um número inteiro e imprima o caractere correspondente na tabela ASCII.
*/

#include <stdio.h>

int main() {
  int numero;
  int ASCII;

  printf("Insira um número inteiro: ");
  scanf("%d", &numero);

  printf("O caractere correspondente na tabela ASCII é: %c\n", numero);
  
  return 0;
}
