
#include <stdio.h>

int main()
{
  int n, i, sum = 0;

  printf("Enter the number for the range summation: \n");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
    sum += i;

  printf("The range summation till %d is %d", n, sum);
}