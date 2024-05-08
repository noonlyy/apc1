/*
8. Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2,
y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).
*/

#include <math.h>
#include <stdio.h>

float calcularDistancia(float x1, float y1, float x2, float y2) {
  return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main() {
  float x1, y1, x2, y2;
  float distancia;

  printf("Digite as coordenadas do primeiro ponto (x1, y1): ");
  scanf("%f %f", &x1, &y1);

  printf("Digite as coordenadas do segundo ponto (x2, y2): ");
  scanf("%f %f", &x2, &y2);

  distancia = calcularDistancia(x1, y1, x2, y2);

  printf("A distância entre os pontos (%.2f, %.2f) e (%.2f, %.2f) é: %.2f\n",
         x1, y1, x2, y2, distancia);

  return 0;
}
