/*
10. Faça um programa em C que leia o número de mês, valide o número com os meses
definidos por uma enumeração e imprima o nome do mês.
*/

#include <stdio.h>

enum Meses {
    Janeiro = 1,
    Fevereiro,
    Marco,
    Abril,
    Maio,
    Junho,
    Julho,
    Agosto,
    Setembro,
    Outubro,
    Novembro,
    Dezembro
};

int main() {
    int numero_mes;

    printf("Digite o número do mês (1 a 12): ");
    int deu_certo = scanf("%d", &numero_mes);

    switch (numero_mes) {
        case Janeiro:
            printf("Janeiro\n");
            break;
        case Fevereiro:
            printf("Fevereiro\n");
            break;
        case Marco:
            printf("Março\n");
            break;
        case Abril:
            printf("Abril\n");
            break;
        case Maio:
            printf("Maio\n");
            break;
        case Junho:
            printf("Junho\n");
            break;
        case Julho:
            printf("Julho\n");
            break;
        case Agosto:
            printf("Agosto\n");
            break;
        case Setembro:
            printf("Setembro\n");
            break;
        case Outubro:
            printf("Outubro\n");
            break;
        case Novembro:
            printf("Novembro\n");
            break;
        case Dezembro:
            printf("Dezembro\n");
            break;
        default:
            printf("Número de mês inválido!\n");
    }

    return 0;
}