#include <stdio.h>
#include <string.h>

int main() { // 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
             // 2 3 4 5 6 7 8
  char nome[31]; // U m  n o m e  d e  u m a  p e s s o a  c o n h e c i d a\0

  printf("Entre com o seu nome: ");
  int deu_certo = scanf("%[^\n]s", nome);

  printf("Olá %s!\n", nome);

  char primeiro_nome[21];
  char ultimo_nome[21];

  strcpy(primeiro_nome, "João"); // copia a string "João" para a variável primeiro_nome
  strcpy(ultimo_nome, "Silva"); // copia a string "Silva" para a variável ultimo_nome

  strcpy(nome, primeiro_nome);
  strcpy(nome, ultimo_nome); // nome = "João Silva"

  int tamanho = strlen(nome); // tamanho = 12
  printf("Seu nome tem %i caracteres.\n", tamanho);
  printf("As strings são iguais? %i\n", strcmp(primeiro_nome, ultimo_nome));

  return 0;
}