/*
9. Faça um programa em C que converta uma idade expressa em anos, meses e dias
para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.
*/

#include <stdio.h>

int main() {

  int ano = 365;
  int mes = 30;
  int dia = 1;
  int anos;
  int meses;
  int dias;
  int idade_em_dias;

  printf("Digite a sua idade:");
  int deu_certo = scanf("%i", &anos);

  printf("Digite o mês em que você nasceu: ");
  deu_certo = scanf("%i", &meses);

  printf("Digite o dia em que você nasceu: ");
  deu_certo = scanf("%i", &dias);

  idade_em_dias = (anos * ano) + (meses * mes) + (dias * dia);

  printf("A sua idade em dias é: %i", idade_em_dias);
  deu_certo = scanf("%i", &idade_em_dias);

  return 0;
}