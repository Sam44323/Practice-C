
#include <stdio.h>
#include <math.h>

int main()
{
  int i, n, odd = 0, even = 0;
  printf("Enter Nth term for range output : ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    // if i is odd
    if (i % 2 != 0)
    {
      if (i > 1)
        odd = odd + 2;
    }
    else
    {
      even = odd / 2;
    }
  }

  if (n % 2 != 0)
  {
    printf("%d", odd);
  }
  else
  {
    printf("%d", even);
  }

  return 0;
}