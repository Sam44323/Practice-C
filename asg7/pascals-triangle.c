
#include <stdio.h>
int main()
{
  int n, c = 1, gap, i, j;
  printf("Enter the number of rows you want to print: \n");
  scanf("%d", &n);
  printf("Here is your pattern: \n");
  for (i = 0; i < n; i++)
  {
    for (gap = 1; gap <= n - i; gap++)
      printf("  ");
    for (j = 0; j <= i; j++)
    {
      if (j == 0 || i == 0)
        c = 1;
      else
        c = c * (i - j + 1) / j;
      printf("%4d", c);
    }
    printf("\n");
  }
  return 0;
}