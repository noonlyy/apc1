/*
4. Faça um programa em C que leia uma tecla pressionada e determine se ela é uma
letra, um dígito ou um caractere especial
*/

#include <stdio.h>

int main() {
  char tecla;

  printf("Entre com uma tecla: ");
  int leu_certo = scanf("%c", &tecla);

  if (tecla >= 'a' && tecla <= 'z') {
    printf("A tecla pressionada é uma letra minúscula.\n");
  } else if (tecla >= 'A' && tecla <= 'Z') {
    printf("A tecla pressionada é uma letra maiúscula.\n");
  } else if (tecla >= 0 && tecla <= 9) {
    printf("A tecla pressionada é um dígito.\n");
  } else {
    printf("A tecla pressionada é um caractere especial.\n");
  }

  return 0;
}