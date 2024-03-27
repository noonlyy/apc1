/*
3. Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).
*/

#include <stdio.h>

int main(){
  float celsius;
  float fahrenheit;
  
  printf("Digite a temperatura em graus Celsius: ");
  int deu_certo = scanf("%f", &celsius);

  fahrenheit = (celsius * 9/5) + 32;

  printf("A temperatura em graus Fahrenheit é: %f", fahrenheit);
  deu_certo = scanf("%f", &fahrenheit);

  return 0;
}