
#include <stdio.h>
int main()
{
  int n, c, i, j;
  printf("Enter the number of rows you want to print: \n");
  scanf("%d", &n);
  printf("Here is your pattern: \n");
  c = n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j < i; j++)
    {
      printf(" ");
    }
    for (int j = 1; j <= c; j++)
    {
      printf("*");
    }
    c--;

    printf("\n");
  }
  return 0;
}