/*
7. Faça um programa em C que leia uma estrutura contendo dia, mês e ano e
imprima a data tanto no formato BR (dd/mm/aaaa) quanto no formato US
(mm/dd/aaaa).
*/

#include <stdio.h>

struct Data {
  int dia;
  int mes;
  int ano;
};

int main() {
  struct Data data;

  printf("Digite o dia: ");
  int deu_certo = scanf("%d", &data.dia);
  printf("Digite o mês: ");
  deu_certo = scanf("%d", &data.mes);
  printf("Digite o ano: ");
  deu_certo = scanf("%d", &data.ano);

  printf("Formato BR: %02d/%02d/%04d\n", data.dia, data.mes, data.ano);

  printf("Formato US: %02d/%02d/%04d\n", data.mes, data.dia, data.ano);

  return 0;
}
