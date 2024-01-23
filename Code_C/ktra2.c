#include <stdio.h>

int main()
{
  int x, n = 1;
  if (scanf("%d", &x) != 1 || x < 0)
  {
    printf("NO\n");
    return 0;
  }
  while (n * (n + 1) / 2 <= x)
  {
    n++;
  }
  printf("%d\n", n);
  return 0;
}

