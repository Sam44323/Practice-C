
#include <stdio.h>

int main()
{
  int n, rem, sum = 0, i;

  printf("Enter a number: \n");
  scanf("%d", &n);

  // finding the divisors of the number
  for (i = 1; i < n; i++)
  {
    if (n % i == 0)
    {
      sum += i;
    }
  }
  if (sum == n)
  {
    printf("%d is a perfect number", n);
  }
  else
  {
    printf("%d is not a perfect number", n);
  }
}