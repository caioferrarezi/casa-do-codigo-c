#include <stdio.h>

int main(void) {
  printf("************************************\n");
  printf("* Bem-vindo ao Jogo da Adivinhação *\n");
  printf("************************************\n");

  int numerosecreto = 42;
  int chute;
  int tentativas = 1;

  while(1) {
    printf("\nQual é o seu %do. chute? ", tentativas);
    scanf("%d", &chute);

    if (chute < 0) {
      printf("Você não pode chutar números negativos\n");
      continue;
    }

    printf("Seu %do. chute foi %d!\n", tentativas, chute);

    int acertou = chute == numerosecreto;
    int maior = chute > numerosecreto;

    if (acertou) {
      printf("Parabéns! Você acertou!\n");
      break;
    } else if (maior) {
      printf("Seu chute foi maior do que o número secreto!\n");
    } else {
      printf("Seu chute foi menor do que o número secreto!\n");
    }

    tentativas++;
  }

  printf("Obrigado por jogar!\n");
}
