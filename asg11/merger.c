

#include <stdio.h>

int main()
{
  int a[50], b[50], c[100], i, j, l1, l2, count, swap = 0;

  printf("Enter the count of numbers you want to store for first array: \n");
  scanf("%d", &l1);

  for (i = 0; i < l1; i++)
  {
    printf("%dth value enterring...:", i + 1);
    scanf("%d", &a[i]);
  }

  printf("Enter the count of numbers you want to store for second array: \n");
  scanf("%d", &l2);

  for (i = 0; i < l2; i++)
  {
    printf("%dth value enterring...:", i + 1);
    scanf("%d", &b[i]);
  }

  for (i = 0; i < l1; i++)
  {
    c[count++] = a[i];
  }

  for (i = 0; i < l2; i++)
  {
    c[count++] = b[i];
  }

  printf("Merged array \n");
  for (i = 0; i < count; i++)
    printf("%d\n", c[i]);

  for (i = 0; i < count - 1; i++)
  {
    for (j = 0; j < count - i - 1; j++)
    {
      if (c[j] > c[j + 1])
      {
        swap = c[j];
        c[j] = c[j + 1];
        c[j + 1] = swap;
      }
    }
  }
  printf("Merged array after sorting \n");
  for (i = 0; i <= count - 2; i++)
    printf("%d\n", c[i]);
  return 0;
}