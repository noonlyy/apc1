/*
10. Faça um programa em C que leia um número decimal e o converta em binário
(ex.: 9 => 1001).
*/

#include <stdio.h>

void decimalParaBinario(int n) {
    if (n > 0) {
        decimalParaBinario(n / 2);
        printf("%d", n % 2);
    }
}

int main() {
    int numero;
    printf("Digite um número decimal: ");
    int deu_certo = scanf("%d", &numero);

    printf("O número binário correspondente é: ");
    decimalParaBinario(numero);
    printf("\n");

    return 0;
}
