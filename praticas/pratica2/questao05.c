/*
5. Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o
índice de massa corporal (imc = peso / altura²).
*/

#include <stdio.h>

int main() {
  int peso;
  int altura;
  int imc;

  printf("Entre com o valor do seu peso: ");
  int deu_certo = scanf("%i", &peso);

  printf("Entre com o valor da sua altura: ");
  deu_certo = scanf("%i", &altura);

  imc = peso / (altura * altura);

  printf("O valor do seu imc é: %i", imc);
  deu_certo = scanf("%i", &imc);

  return 0;
}