#include <stdio.h>

int main(void)
{
  int a = 0, b = 0, o = 0;

  printf("Escolha o primeiro número: ");
  scanf("%d", &a);

  printf("\n");

  printf("Escolha o segundo número: ");
  scanf("%d", &b);

  printf("\n");

  printf("(1) soma (2) subtração (3) multiplicação (4) divisão\n");
  printf("Escolha a operação: ");
  scanf("%d", &o);

  printf("\n");

  switch(o)
  {
    case 1:
      printf("%d + %d = %d\n", a, b, a + b);
      break;
    case 2:
      printf("%d - %d = %d\n", a, b, a - b);
      break;
    case 3:
      printf("%d * %d = %d\n", a, b, a * b);
      break;
    case 4:
      printf("%d / %d = %d\n", a, b, a / b);
      break;
  }
}
