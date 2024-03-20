/*
8. Faça um programa em C que converta um tempo expresso em segundos para um valor em horas, minutos e segundos (ex.: 1000 segundos corresponde a 0 horas 16 minutos e 40 segundos).
*/

#include <stdio.h>

int main(){
  int segundos;
  int minutos;
  int horas;

  printf("Digite um valor em segundos:");
  scanf("%d", &segundos);

  horas = segundos / 3600;
  segundos %= 3600;
  minutos = segundos / 60;
  segundos %= 60;

  printf("%d:%d:%d\n", horas, minutos, segundos);


  return 0;
}