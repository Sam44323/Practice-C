#include <stdio.h>

int main()
{
  int n, c = 1, i, j;

  printf("Enter the number of rows you want to print: ");
  scanf("%d", &n);
  printf("Here is the pattern\n");
  c = n;

  for (i = n; i >= 1; i--)
  {
    for (j = 1; j <= i; j++)
    {
      printf(" ");
    }

    for (j = c; j <= n; j++)
    {
      printf("%d", j);
    }
    printf("\n");
    c -= 1;
  }
  return 0;
}