#include <stdio.h>

int main()
{
  int i, n, a[50], evenSum = 0, oddSum = 0;

  printf("Enter the count of numbers you want to store: \n");

  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("%dth value enterring...:", i + 1);
    scanf("%d", &a[i]);
  }

  for (i = 0; i < n; i++)
  {
    if (a[i] % 2 == 0)
      evenSum += a[i];
    else
      oddSum += a[i];
  }

  printf("The even numbers sum is: %d \n", evenSum);
  printf("The odd numbers sum is: %d \n", oddSum);
}