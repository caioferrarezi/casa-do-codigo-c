#include <stdio.h>

int main(void)
{
  int a[3];

  for (int i = 0; i < 3; i++)
  {
    printf("Escolha o %dº número: ", i + 1);
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (a[i] < a[j])
      {
        int aux = a[j];
        a[j] = a[i];
        a[i] = aux;
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    printf("%dº número: %d\n", i + 1, a[i]);
  }
}
