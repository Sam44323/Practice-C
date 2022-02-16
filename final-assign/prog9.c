#include <stdio.h>

int main()
{
  int number = 0, i = 0, c = 0, j = 0;
  printf("Enter the number (should be positive) \n");
  scanf("%d", &number);

  if (number < 0)
  {
    printf("Number should be positive! \n");
    return;
  }
  printf("Prime numbers are:\n");
  for (i = 2; i < number; ++i)
  {
    c = 0;
    for (j = 2; j <= i / 2; ++j)
    {
      if (i % j == 0)
      {
        c = 1;
        break;
      }
    }
    if (c == 0)
      printf("%d\n", i);
  }
  return 0;
}