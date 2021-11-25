
#include <stdio.h>

int main()
{
  int n, i, j;
  printf("Enter the number of rows you want to print: \n");
  scanf("%d", &n);
  printf("Here's your pattern: \n");

  for (i = 1; i <= n; i++)
  {
    for (j = 1; j < i; j++)
      printf(" ");

    for (j = i; j <= n; j++)
      printf("* ");

    printf("\n");
  }

  return 1;
}