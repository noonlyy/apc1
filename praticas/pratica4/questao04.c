/*
4. Faça um programa em C que leia uma frase de até 30 caracteres preenchendo uma
matriz 6x5 e depois imprima a matriz percorrendo coluna por coluna.
*/

#include <stdio.h>
#include <string.h>

int main() {
#include <stdio.h>
#include <string.h>

  int main() {
    char frase[31];
    char matriz[6][5];
    int i, j, k = 0;

    printf("Digite uma frase de até 30 caracteres: ");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    for (i = 0; i < 6; i++) {
      for (j = 0; j < 5; j++) {
        if (frase[k] != '\0') {
          matriz[i][j] = frase[k];
          k++;
        } else {
          matriz[i][j] = ' ';
        }
      }
    }

    printf("\nMatriz percorrida coluna por coluna:\n");
    for (j = 0; j < 5; j++) {
      for (i = 0; i < 6; i++) {
        printf("%c", matriz[i][j]);
      }
      printf("\n");
    }

    return 0;
  }

  return 0;
}
