/*
8. Faça um programa em C que leia nome e telefone de 10 contatos, e depois
imprima todos os contatos no formato "nome - (telefone)".
*/

#include <stdio.h>

struct Contato {
  char nome[50];
  char telefone[15];
};

int main() {
  struct Contato contatos[10];

  for (int i = 0; i < 10; i++) {
    printf("Digite o nome do contato %d: ", i + 1);
    int deu_certo = scanf("%s", contatos[i].nome);
    printf("Digite o telefone do contato %d: ", i + 1);
    deu_certo = scanf("%s", contatos[i].telefone);
  }

  for (int i = 0; i < 10; i++) {
    printf("%s - (%s)\n", contatos[i].nome, contatos[i].telefone);
  }

  return 0;
}
