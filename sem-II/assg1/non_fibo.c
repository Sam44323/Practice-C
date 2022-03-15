#include <stdio.h>

int main()
{
  int range, a, b, c, i, d;

  a = 0;
  b = 1;
  c = 0;
  printf("Enter the upper range of the series: \n");
  scanf("%d", &range);

  printf("Here is the series: \n");

  while (c <= range)
  {
    c = a + b;
    a = b;
    b = c;
    d = a + b;

    for (i = c + 1; i < d; i++)
    {
      if (i <= range)
        printf("%d \n", i);
      else
        break;
    }
  }
  return 0;
}