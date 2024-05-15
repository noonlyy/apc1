#include <stdio.h>

int main() {
  int numero;
  int numero_valido = 0;

  while (numero_valido == 0) {
    printf("Entre com um numero de 1 a 10: ");
    int deu_certo = scanf("%i", &numero);
    numero_valido = numero >= 1 && numero <= 10;

    if (deu_certo && numero_valido) {
      printf("Segue o jogo!\n");
    } else {
      getchar(); // limpar loop infinito
      printf("Numero invalido. Tente novamente!\n");
    }
 
  }
  return 0;
}


//   do {
//     printf("Entre com um numero de 1 a 10: ");
//     int deu_certo = scanf("%i", &numero);
//     numero_valido = numero >= 1 && numero <= 10;

//     if (deu_certo && numero_valido) {
//       printf("O numero é valido!\n");
//     } else {
//       getchar(); // limpar loop infinito
//       printf("Numero invalido. Tente novamente!\n");
//     }
//   } while (numero_valido == 0);
    
//   return 0;
// }