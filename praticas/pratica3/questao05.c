#include <stdio.h>

int main () {
  int numero;

  printf("Entre com um numero inteiro: ");
  int deu_certo = scanf("%i", &numero);

  if (deu_certo) {


  } else {
    printf("Numero invalido!\n");
  }

  return 0;