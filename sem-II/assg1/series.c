#include <stdio.h>

int main()
{
  int i, j, n, sum = 0;
  n = 10;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      sum += j;
    }
  }
  printf("Sum: %d", sum);
  return 0;
  return 0;
}