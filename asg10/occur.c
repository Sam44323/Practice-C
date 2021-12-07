#include <stdio.h>

int main()
{
  int i, n, a[50], searchEle = 0, count = 0;

  printf("Enter the count of numbers you want to store: \n");

  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("%dth value enterring...:", i + 1);
    scanf("%d", &a[i]);
  }

  printf("Enter the value you want to search for: \n");
  scanf("%d", &searchEle);

  for (i = 0; i < n; i++)
  {
    if (a[i] == searchEle)
    {
      count++;
      printf("%d value is present in %dth position: \n", searchEle, i + 1);
    }
  }
  if (count == 0)
    printf("No such element in the array");
  else
    printf("The total number of occurrences: %d", count);
}