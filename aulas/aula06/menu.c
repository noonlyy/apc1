#include <stdio.h>

int main() {
  char opcao;

  printf("MENU PRINCIPAL\n");
  printf("1 - Consultar saldo\n");
  printf("2 - Recarregar\n");
  printf("3 - Ver mensagens\n");
  printf("4 - Falar com atendente\n");
  printf("0 - Sair\n");

  printf("Entre com uma opção: ");
  int leu_certo = scanf("%c", &opcao);

  switch (opcao) {
  case '1':
    printf("Seu saldo é R$ 324.36\n");
    break;
  case '2': {
    float valor;
    printf("Entre com o valor da recarga: ");
    int leu_certo = scanf("%f", &valor);
    if (!leu_certo) {
      printf("Valor inválido!\n");
    }
    break;
    printf("Recarga de R$ %.2f realizada com sucesso!\n", valor);
  } break;
  case '3':
    printf("Você não tem mensagens!\n");
    break;
  case '4':
    printf("Iniciando atendimento...\n");
    break;
  case '0':
    printf("Saindo...\n");
    break;
  default:
    printf("Opção inválida!\n");
  }

  return 0;
}