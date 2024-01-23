#include <stdio.h>

int main()
{
  int n, check;
  scanf("%d", &n);
  int a[n];
  int primes[n];
  int prime_count = 0;

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < n; i++) 
  {
    check = 1;
    if (a[i] < 2)
    {
      check = 0;
    }
    for (int j = 2; j * j <= a[i]; j++)
    {
      if (a[i] % j == 0) {
        check = 0;
        break;
      }
    }
    if (check == 1)
    {
      primes[prime_count] = a[i];
      prime_count++;
    }
  }

  if(prime_count == 0)
    printf("0");
  else
  {
    for (int i = 0; i < prime_count; i++)
    {
      printf("%d ", primes[i]);
    }
    printf("\n");
  }
  return 0;
}

