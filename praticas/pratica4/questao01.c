/*
1. Faça um programa em C que preencha uma matriz com 10 números, depois leia um
número e localize a posição dele na matriz.
*/

#include <stdio.h>

int main() {
  int matriz[10];
  int numero, posicao = -1;

  printf("Digite 10 números:\n");
  for (int i = 0; i < 10; i++) {
    int deu_certo = scanf("%d", &matriz[i]);
  }

  printf("Digite o número a ser localizado: ");
  int deu_certo = scanf("%d", &numero);

  for (int i = 0; i < 10; i++) {
    if (matriz[i] == numero) {
      posicao = i;
      break;
    }
  }

  if (posicao != -1) {
    printf("O número %d está na posição %d da matriz.\n", numero, posicao);
  } else {
    printf("O número %d não foi encontrado na matriz.\n", numero);
  }

  return 0;
}
