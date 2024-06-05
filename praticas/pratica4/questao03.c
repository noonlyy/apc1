/*
3. Faça um programa em C que leia a quantidade e o preço de 10 produtos de um
nota fiscal e imprima o valor total de cada produto e o valor total da nota.
*/

#include <stdio.h>

int main() {
  int quantidade;
  float preco, totalNota = 0.0;

  for (int i = 1; i <= 10; i++) {
    printf("Produto %d:\n", i);
    printf("Quantidade: ");
    int deu_certo = scanf("%d", &quantidade);
    printf("Preço: ");
    deu_certo = scanf("%f", &preco);

    float valorProduto = quantidade * preco;
    printf("Valor do produto %d: R$ %.2f\n", i, valorProduto);

    totalNota += valorProduto;
  }

  printf("Valor total da nota: R$ %.2f\n", totalNota);

  return 0;
}
