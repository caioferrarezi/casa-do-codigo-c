#include <stdio.h>

int main(void)
{
  int soma = 0;

  for (int i = 1; i <= 100; i++)
  {
    soma += i;
  }

  printf("Somal dos números de 1 a 100: %d\n", soma);
}
