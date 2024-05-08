#include <stdio.h>

int main() {
  printf("\x1b[32m----------------------------------\n");
  printf("        N O T A   L E G A L       \n");
  printf("----------------------------------\x1b[0m\n");
  printf("ITEM             QTD      VALOR   \n");
  printf("%-16s %03i %10.2f\n", "Pizza", 1, 29.00);
  printf("%-16s %03i %10.2f\n", "Biscoito Globo", 4, 2.00);
  printf("%-16s %03i %10.2f\n", "Pastel", 2, 6.00);

  // printf("Pizza             1          29.00\n");
  // printf("Biscoito Globo    4           2.00\n");
  // printf("Pastel            2           6.00\n");

  printf("----------------------------------\n");
  // printf("TOTAL              7      49.00   \n");

  int total_quantidade = 1 + 4 + 2;
  float total_valor = 29.00 + 2.00 + 6.00;
  printf("TOTAL......... : %3i %10.2f\n", total_quantidade, total_valor);

  return 0;
}