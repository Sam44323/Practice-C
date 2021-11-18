
#include <stdio.h>
#include <math.h>

int main()
{
  int n, series, res;
  printf("Enter the Nth term you want to find out: \n");
  scanf("%d", &n);
  if (n % 2 == 1)
  {
    series = (n + 1) / 2;
    res = pow(2, series - 1);
    printf("%d ", res);
  }
  else
  {
    series = n / 2;
    res = pow(3, series - 1);
    printf("%d ", res);
  }
  return 0;
}