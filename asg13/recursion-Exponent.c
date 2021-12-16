

#include <stdio.h>

int calcExp(int n, int e)
{
  if (e == 0)
    return 0;
  else if (e == 1)
    return n;
  else
    return n * calcExp(n, e - 1);
}

int main()
{
  int n, e;
  printf("Enter the number: \n");
  scanf("%d", &n);

  printf("Enter the exponent: \n");
  scanf("%d", &e);
  printf("Exponent value for %d is %d", n, calcExp(n, e));
  return 0;
}