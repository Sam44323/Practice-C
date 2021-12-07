
#include <stdio.h>
int main()
{
  int i, n, a[50], sum = 0;

  printf("Enter the count of numbers you want to store: \n");

  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("%dth value enterring...:", i + 1);
    scanf("%d", &a[i]);
  }
  printf("Here are your elements: \n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
}