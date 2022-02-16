#include <stdio.h>

void pattern_a(int n)
{
  int i, j;
  for (i = 1; i < n; i++)
  {
    for (j = 4; j >= i; j--)
    {
      printf("%d", j);
    }
    printf("\n");
  }
}

void pattern_b(int n)
{
  int c = 1, gap, i, j;

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
}

int main()
{
  int choice = 0;
  int range = 0;
  while (choice >= 0)
  {
    printf("1. Pattern 1 | 2. Pattern 2 \n");
    printf("Enter your choice! \n");

    printf("Enter the range limit: \n");
    printf("%d", &range);

    switch (choice)
    {
    case 1:
      pattern_a(range);
      break;

    case 2:
      pattern_b(range);
      break;

    default:
      printf("Invalid Choice! \n");
      break;
    }
  }
  return 0;
}