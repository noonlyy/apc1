/*
3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r).
Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/

#include <stdio.h>

int main() {
  const int r;
  const int PI = 3.1416;
  int raio;
  int perimetro;

  printf("Entre com um valor para o raio: ");
  int deu_certo = scanf("%i", &r);

  perimetro = 2 * PI * r;

  printf("O perimetro da pizza é: %i", perimetro);

  return 0;
}