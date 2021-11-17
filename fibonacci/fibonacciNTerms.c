
#include <stdio.h>

int main()
{
  int a, b, c, i, range;

  printf("Enter number of range to print fibonacci: ");
  scanf("%d", &range);

  a = 0;
  b = 1;
  c = 0;

  printf("Fibonacci range: \n");

  for (i = 1; i <= range; i++)
  {
    printf("%d \n", c);
    a = b;
    b = c;
    c = a + b;
  }
}