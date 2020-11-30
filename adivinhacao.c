#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// #define TENTATIVAS 3

int main(void) {
  // ASCII Art
  printf("\n\n");
  printf("     /\\      | (_)     (_)     | |                          \n");
  printf("    /  \\   __| |___   ___ _ __ | |__   __ _  ___ __ _  ___  \n");
  printf("   / /\\ \\ / _` | \\ \\ / / | '_ \\| '_ \\ / _` |/ __/ _` |/ _ \\ \n");
  printf("  / ____ \\ (_| | |\\ V /| | | | | | | | (_| | (_| (_| | (_) |\n");
  printf(" /_/    \\_\\__,_|_| \\_/ |_|_| |_|_| |_|\\__,_|\\___\\__,_|\\___/\n");
  printf("\n\n");

  int chute = 0;
  double pontos = 1000;

  int nivel = 0;
  int totaltentativas = 0;

  srand(time(0));
  int numerosecreto = rand() % 100;
  int acertou = 0;

  printf("Qual o nível de dificuldade?\n");
  printf("(1) Fácil (2) Médio (3) Difícil\n\n");

  printf("Escolha: ");
  scanf("%d", &nivel);

  switch (nivel) {
    case 1:
      totaltentativas = 20;
      break;
    case 2:
      totaltentativas = 15;
      break;
    default:
      totaltentativas = 6;
      break;
  }

  for(int i = 0; i < totaltentativas; i++) {
    printf("Tentativa %d de %d: ", i + 1, totaltentativas);
    scanf("%d", &chute);

    if (chute < 0) {
      printf("Você não pode chutar números negativos\n");
      i--;
      continue;
    }

    //printf("Seu %do. chute foi %d!\n", tentativas, chute);

    acertou = chute == numerosecreto;
    int maior = chute > numerosecreto;

    if (acertou) {
      break;
    } else if (maior) {
      printf("Seu chute foi maior do que o número secreto!\n\n");
    } else {
      printf("Seu chute foi menor do que o número secreto!\n\n");
    }

    double pontosperdidos = abs(chute - numerosecreto) / (double)2;
    pontos = pontos - pontosperdidos;
  }

  if (acertou) {
    printf("\n\n");
    printf(" /$$    /$$  /$$$$$$   /$$$$$$  /$$$$$$$$       /$$    /$$ /$$$$$$$$ /$$   /$$  /$$$$$$  /$$$$$$$$ /$$   /$$\n");
    printf("| $$   | $$ /$$__  $$ /$$__  $$| $$_____/      | $$   | $$| $$_____/| $$$ | $$ /$$__  $$| $$_____/| $$  | $$\n");
    printf("| $$   | $$| $$  \\ $$| $$  \\__/| $$            | $$   | $$| $$      | $$$$| $$| $$  \\__/| $$      | $$  | $$\n");
    printf("|  $$ / $$/| $$  | $$| $$      | $$$$$         |  $$ / $$/| $$$$$   | $$ $$ $$| $$      | $$$$$   | $$  | $$\n");
    printf(" \\  $$ $$/ | $$  | $$| $$      | $$__/          \\  $$ $$/ | $$__/   | $$  $$$$| $$      | $$__/   | $$  | $$\n");
    printf("  \\  $$$/  | $$  | $$| $$    $$| $$              \\  $$$/  | $$      | $$\\  $$$| $$    $$| $$      | $$  | $$\n");
    printf("   \\  $/   |  $$$$$$/|  $$$$$$/| $$$$$$$$         \\  $/   | $$$$$$$$| $$ \\  $$|  $$$$$$/| $$$$$$$$|  $$$$$$/\n");
    printf("    \\_/     \\______/  \\______/ |________/          \\_/    |________/|__/  \\__/ \\______/ |________/ \\______/ \n");
    printf("\n\n");

    printf("Pontuação: %.2f\n", pontos);
  } else {
    printf("\n\n");
    printf("        \\|/ ____ \\|/       \n");
    printf("         @~/ ,. \\~@        \n");
    printf("        /_( \\__/ )_\\       \n");
    printf("           \\__U_/          \n");
    printf("\n\n");

    printf("Você perdeu! Tente novamente!\n\n");
  }
  printf("Obrigado por jogar!\n");
}
