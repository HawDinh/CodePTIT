#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d", &n);

  int a[100000], count = 0;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      a[count++] = i;
      if (i != n / i) {
        a[count++] = n / i;
      }
    }
  }

  for(int i = 0; i < count - 1; i++)
  {
    for(int j = i; j < count; j++)
    {
      if(a[i] > a[j])
      {
        int tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
      }
    }
  }

  if (count >= 3) {
    printf("%d %d %d\n", a[count - 3], a[count - 2], a[count - 1]);
  } else {
    printf("THIEU\n");
  }

  return 0;
}
Vi?t cho Tran Huwu Phuc

