/*
3. Faça um programa em C que imprima um qualitativo associado a uma nota lida
conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 =
Ótimo, e imprima Nota inválida nos demais casos.
*/

#include <stdio.h>

int main () {
  int nota;

  printf("Entre com a nota: ");
  int leu_certo = scanf("%i", &nota);

  // if (nota == 1) {
  //   printf("Nota ruim.\n");
  // } else if (nota == 2) {
  //   printf("Nota insuficiente.\n");
  // } else if (nota == 3) {
  //   printf("Nota suficiente.\n");
  // } else if (nota == 4) {
  //   printf("Nota boa.\n");
  // } else if (nota == 5) {
  //   printf("Nota ótima.\n");
  // } else {
  //   printf("Nota inválida.\n");
  // }

  switch(nota) {
    case 1: printf("Nota ruim.\n"); break;
    case 2: printf("Nota insuficiente.\n"); break;
    case 3: printf("Nota suficiente.\n"); break;
    case 4: printf("Nota boa.\n"); break;
    case 5: printf("Nota ótima.\n"); break;
    default: printf("Nota inválida.\n"); 
  }
  
  return 0;
}