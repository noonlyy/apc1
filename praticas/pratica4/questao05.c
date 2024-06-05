/*
5. Faça um programa em C que leia uma string e a imprima em maiúsculo e em
minúsculo.
*/

#include <ctype.h>
#include <stdio.h>

void maiusculo(char s1[], char s2[]) {
  int i = 0;
  while (s1[i] != '\0') {
    s2[i] = toupper(s1[i]);
    i++;
  }
  s2[i] = '\0';
}

void minusculo(char s1[], char s2[]) {
  int i = 0;
  while (s1[i] != '\0') {
    s2[i] = tolower(s1[i]);
    i++;
  }
  s2[i] = '\0';
}

int main() {
  char str1[] = "Ola. Bom dia.";
  char str2[500];

  printf("String original: %s\n", str1);
  maiusculo(str1, str2);
  printf("String maiúscula: %s\n", str2);
  minusculo(str1, str2);
  printf("String minúscula: %s\n", str2);

  return 0;
}