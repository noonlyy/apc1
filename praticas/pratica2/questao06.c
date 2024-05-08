/*
6. Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano
de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de
depreciação - ano de fabricação) x 0,01 x valor de compra).
*/

#include <stdio.h>

int main() {
  int ano_de_fabricacao;
  int ano_de_depreciacao;
  double valor_de_compra;
  double valor_depreciado;
  double valor_final;

  printf("Entre com o valor de compra: ");
  int deu_certo = scanf("%lf", &valor_de_compra);

  printf("Entre com o ano de fabricação: ");
  deu_certo = scanf("%i", &ano_de_fabricacao);

  printf("Entre com o ano de depreciação: ");
  deu_certo = scanf("%i", &ano_de_depreciacao);

  valor_depreciado =
      (ano_de_depreciacao - ano_de_fabricacao) * 0.01 * valor_de_compra;
  valor_final = valor_de_compra - valor_depreciado;

  printf("Valor de compra....: R$ %11.2f\n", valor_de_compra);
  printf("Ano de fabricação..: R$ %11.2d\n", ano_de_fabricacao);
  printf("Ano de depreciação.: R$ %11.2d\n", ano_de_depreciacao);
  printf("Valor depreciado...: R$ %11.2f\n", valor_depreciado);
  printf("Valor final........: R$ %11.2f\n", valor_final);

  return 0;
}