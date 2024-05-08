#include <stdio.h>

int main() {
  signed char caracter_com_sinal;   // 1 byte por memoria -128 a 127
  unsigned char caracter_sem_sinal; // 1 byte por memoria 0 a 255

  signed int inteiro_com_sinal;  // 4 bytes -2bi a 2bi
  unsigned int inteiro_sem_sinal; // 4 bytes 0 a 4bi

  short int inteiro_curto; // 2 bytes por memoria -32 mil a 32 mil
  long int inteiro_longo;  // 8 bytes por memoria -9hexa a 9hexa

  long double duplo_longo; // 16 bytes -1.2e+4932 a 1.2e+4932

  return 0;
}