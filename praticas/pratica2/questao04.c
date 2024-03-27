/*
4. Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).
*/

#include <stdio.h>

int main(){
  int largura;
  int comprimento;
  int area;
  int hectares;

  hectares = 10.000;   

  printf("Digite a largura do terreno: ");
  int deu_certo = scanf("%i", &largura);

  printf("Digite o comprimento do terreno: ");
  deu_certo = scanf("%i", &comprimento);

  area = largura * comprimento;
  hectares = area / hectares;

  printf("A área do terreno é: %i", hectares);
  deu_certo = scanf("%i", &hectares);
  
  
  return 0;
}