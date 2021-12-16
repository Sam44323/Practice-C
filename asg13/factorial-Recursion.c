

#include <stdio.h>

int factorial(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
}

int main()
{
  int n;
  printf("Enter the input: \n");
  scanf("%d", &n);

  printf("Factorial of %d is %d", n, factorial(n));
  return 0;
}