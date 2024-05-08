/*
2. Faça um programa em C que leia dois números inteiros e imprima o quociente e
o resto da divisão entre eles.
*/

#include <stdio.h>

int main() {
  int numero1;
  int numero2;
  float quociente;
  float resto;

  printf("Digite o primeiro número: ");
  int deu_certo = scanf("%d", &numero1);

  printf("Digite o segundo número: ");
  deu_certo = scanf("%d", &numero2);

  quociente = (float)numero1 / numero2;
  resto = numero1 % numero2;

  printf("O quociente da divisão é: %f", quociente);
  printf("O resto da divisão é: %f", resto);

  return 0;
}