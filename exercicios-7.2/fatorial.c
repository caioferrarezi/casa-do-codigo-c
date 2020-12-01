#include <stdio.h>

int main(void)
{
  int a = 0, f = 1;

  printf("Escolha o número: ");
  scanf("%d", &a);

  printf("\n");

  for (int i = a; i > 0; i--)
  {
    f *= i;

    if (i == 1)
    {
      printf("%d", i);
    }
    else
    {
      printf("%d x ", i);
    }
  }

  printf(" = %d\n", f);
}
