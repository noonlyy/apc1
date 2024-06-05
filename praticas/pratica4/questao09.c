/*
9. Faça um programa em C que leia matrícula e email de 10 alunos, e depois
localize o email do aluno a partir de uma matrícula lida.
*/

#include <stdio.h>
#include <string.h>

struct Aluno {
  int matricula;
  char email[100];
};

int main() {
  struct Aluno alunos[10];
  int i, matricula_busca;

  for (i = 0; i < 10; i++) {
    printf("Aluno %d:\n", i + 1);
    printf("Matrícula: ");
    int deu_certo = scanf("%d", &alunos[i].matricula);
    printf("Email: ");
    deu_certo = scanf("%s", alunos[i].email);
  }

  printf("\nDigite a matrícula do aluno para encontrar o email: ");
  int deu_certo = scanf("%d", &matricula_busca);

  for (i = 0; i < 10; i++) {
    if (alunos[i].matricula == matricula_busca) {
      printf("Email do aluno com matrícula %d: %s\n", matricula_busca,
             alunos[i].email);
      break;
    }
  }

  if (i == 10) {
    printf("Aluno com matrícula %d não encontrado.\n", matricula_busca);
  }

  return 0;
}
