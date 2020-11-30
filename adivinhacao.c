#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PONTUACAO_INICIAL 1000.0
#define TENTATIVAS_FACIL 20
#define TENTATIVAS_MEDIO 15
#define TENTATIVAS_DIFICIL 6

int main(void) {
  // ASCII Art
  printf("\n\n");
  printf("     /\\      | (_)     (_)     | |                          \n");
  printf("    /  \\   __| |___   ___ _ __ | |__   __ _  ___ __ _  ___  \n");
  printf("   / /\\ \\ / _` | \\ \\ / / | '_ \\| '_ \\ / _` |/ __/ _` |/ _ \\ \n");
  printf("  / ____ \\ (_| | |\\ V /| | | | | | | | (_| | (_| (_| | (_) |\n");
  printf(" /_/    \\_\\__,_|_| \\_/ |_|_| |_|_| |_|\\__,_|\\___\\__,_|\\___/\n");
  printf("\n\n");

  int minimo = 0;
  int maximo = 99;

  printf("Escolha o número mínimo: ");
  scanf("%d", &minimo);
  printf("Escolha o número máximo: ");
  scanf("%d", &maximo);

  printf("\n");

  int chute = 0;
  int chuteanterior = 0;
  double pontos = PONTUACAO_INICIAL;

  int nivel = 0;
  int totaltentativas = 0;

  srand(time(0));
  int numerosecreto = rand() % (maximo + 1 - minimo) + minimo;
  int acertou = 0;

  printf("Número secreto: %d\n\n", numerosecreto);

  while (1) {
    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");

    printf("Escolha: ");
    scanf("%d", &nivel);
    printf("\n");

    switch (nivel) {
      case 1:
        totaltentativas = TENTATIVAS_FACIL;
        break;
      case 2:
        totaltentativas = TENTATIVAS_MEDIO;
        break;
      default:
        totaltentativas = TENTATIVAS_DIFICIL;
        break;
    }

    for(int i = 0; i < totaltentativas; i++) {
      printf("Tentativa %d de %d: ", i + 1, totaltentativas);
      scanf("%d", &chute);

      if (chute < 0) {
        printf("Você não pode chutar números negativos\n");
        i--;
        continue;
      } else if (chute == chuteanterior) {
        printf("Epa! Você já chutou o %d na rodada anterior\n\n", chute);
        i--;
        continue;
      }

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

      chuteanterior = chute;
    }

    if (acertou) {
      printf("\n\n");
      printf(" /$$    /$$  /$$$$$$   /$$$$$$  /$$$$$$$$\n");
      printf("| $$   | $$ /$$__  $$ /$$__  $$| $$_____/\n");
      printf("| $$   | $$| $$  \\ $$| $$  \\__/| $$\n");
      printf("|  $$ / $$/| $$  | $$| $$      | $$$$$\n");
      printf(" \\  $$ $$/ | $$  | $$| $$      | $$__/\n");
      printf("  \\  $$$/  | $$  | $$| $$    $$| $$\n");
      printf("   \\  $/   |  $$$$$$/|  $$$$$$/| $$$$$$$$\n");
      printf("    \\_/     \\______/  \\______/ |________/\n");
      printf("\n");
      printf(" /$$    /$$ /$$$$$$$$ /$$   /$$  /$$$$$$  /$$$$$$$$ /$$   /$$\n");
      printf("| $$   | $$| $$_____/| $$$ | $$ /$$__  $$| $$_____/| $$  | $$\n");
      printf("| $$   | $$| $$      | $$$$| $$| $$  \\__/| $$      | $$  | $$\n");
      printf("|  $$ / $$/| $$$$$   | $$ $$ $$| $$      | $$$$$   | $$  | $$\n");
      printf(" \\  $$ $$/ | $$__/   | $$  $$$$| $$      | $$__/   | $$  | $$\n");
      printf("  \\  $$$/  | $$      | $$\\  $$$| $$    $$| $$      | $$  | $$\n");
      printf("   \\  $/   | $$$$$$$$| $$ \\  $$|  $$$$$$/| $$$$$$$$|  $$$$$$/\n");
      printf("    \\_/    |________/|__/  \\__/ \\______/ |________/ \\______/ \n");
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

    int continuar = 0;
    printf("\n\nDeseja jogar novamente? (1) Sim (0) Não: ");
    scanf("%d", &continuar);

    printf("\n\n");

    if (!continuar) {
      break;
    }
  }

  printf("Obrigado por jogar!\n");
}
