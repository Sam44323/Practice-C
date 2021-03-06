#include <stdio.h>

int pattern1()
{
  int i, j;
  for (i = 1; i < 5; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d", j);
    }
    printf("\n");
  }
}

int pattern2()
{
  int i, j;
  for (i = 1; i < 5; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("%d", i);
    }
    printf("\n");
  }
}

int pattern3()
{
  int i, j;
  for (i = 1; i < 5; i++)
  {
    for (j = 4; j >= i; j--)
    {
      printf("%d", j);
    }
    printf("\n");
  }
}

int pattern4()
{
  int i, j;
  for (i = 4; i >= 1; i--)
  {
    for (j = 4; j >= i; j--)
    {
      printf("%d", j);
    }
    printf("\n");
  }
}

int main()
{
  int n;
  while (n != -1)
  {
    printf("1: Pattern 1 | 2: Pattern 2 | 3: Pattern 3 | 4: Pattern 4");
    printf("Enter the pattern number you want to print: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
      pattern1();
      break;

    case 2:
      pattern2();
      break;

    case 3:
      pattern3();
      break;

    case 4:
      pattern4();
      break;

    default:
      printf("Invalid pattern number.\n");
      break;
    }
  }
}