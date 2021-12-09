

#include <stdio.h>

int main()
{
  int min = 0, max = 0, arr[50], n = 0, i;

  printf("Enter the count of numbers you want to store: \n");

  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("%dth value enterring...:", i + 1);
    scanf("%d", &arr[i]);
  }

  if (n == 1)
  {
    min = max = arr[0];
  }
  /* If there are more than one elements, then initialize min and max*/
  if (arr[0] > arr[1])
  {
    max = arr[0];
    min = arr[1];
  }
  else
  {
    max = arr[1];
    min = arr[0];
  }
  for (int i = 2; i < n; i++)
  {
    if (arr[i] > max)
      max = arr[i];
    else if (arr[i] < min)
      min = arr[i];
  }
  printf("Maximum value: %d \n", max);
  printf("Minimum value: %d \n", min);
}