
#include <stdio.h>
int main()
{
  int sum = 0, n, a = 0, b = 1;
  printf("Enter the nth value: ");
  scanf("%d", &n);
  printf("Fibonacci series: ");
  while (sum <= n)
  {
    printf("%d ", sum);
    a = b;
    b = sum;
    sum = a + b;
  }
}