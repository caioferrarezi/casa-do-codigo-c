#include <stdio.h>

int main(void)
{
  int numero = 0;

  do {
    printf("Escolha um número: ");
    scanf("%d", &numero);
  }
  while (numero < 1);

  for (int i = 1; i < 10; i++) {
    printf("%d x %d = %d\n", numero, i, numero * i);
  }
}
