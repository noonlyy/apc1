/*
2. Faça um programa em C que leia as notas de 10 alunos, calcule a média da
turma e contabilize quantos alunos estão com a nota acima da média.
*/

#include <stdio.h>

int main() {
  float notas[10];
  float somaNotas = 0.0;
  float mediaTurma;
  int alunosAcimaMedia = 0;

  printf("Digite as notas dos 10 alunos:\n");
  for (int i = 0; i < 10; i++) {
    printf("Aluno %d: ", i + 1);
    int deu_certo = scanf("%f", &notas[i]);
    somaNotas += notas[i];
  }

  mediaTurma = somaNotas / 10;

  for (int i = 0; i < 10; i++) {
    if (notas[i] > mediaTurma) {
      alunosAcimaMedia++;
    }
  }

  printf("Média da turma: %.2f\n", mediaTurma);
  printf("Alunos com nota acima da média: %d\n", alunosAcimaMedia);

  return 0;
}