

#include <stdio.h>

int gcd(int n1, int n2)
{
  if (n2 == 0)
  {
    return n1;
  }
  else
  {
    return gcd(n2, n1 % n2);
  }
}

int main()
{
  int n1, n2;

  printf("Enter first positive number: \n");
  scanf("%d", &n1);
  printf("Enter second positive number: \n");
  scanf("%d", &n2);

  printf("GCD of %d and %d is %d \n", n1, n2, gcd(n1, n2));
  return 0;
}