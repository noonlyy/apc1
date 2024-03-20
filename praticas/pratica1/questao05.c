/*
5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).
*/

#include <stdio.h>

int main(){
  double gigabytes;
  unsigned long long bytes;

  printf("Digite o valor em Gigabytes: ");
  scanf("%lf", &gigabytes);

  bytes = gigabytes * 1024 * 1024 * 1024;

  printf("%.2f Gigabytes equivalem a %llu Bytes.\n", gigabytes, bytes);
  
  return 0;
}