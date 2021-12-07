#include <stdio.h>

int main()
{
  int i, n, a[50];

  printf("Enter the count of numbers you want to store: \n");

  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("%dth value enterring...:", i + 1);
    scanf("%d", &a[i]);
  }
  int max = a[i], min = a[i];

  for (i = 0; i < n; i++)
  {
    if (a[i] > max)
      max = a[i];
    else if (a[i] < min)
      min = a[i];
  }

  printf("The max value is %d \n", max);
  printf("The min value is %d \n", min);
}