#include <stdio.h>

int main()
{
  int n, c = 1, i, j;

  printf("Enter the number of rows you want to print: \n");
  scanf("%d", &n);
  printf("Here is the pattern!\n");

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d ", c);
      c++;
    }
    printf("\n");
  }
}