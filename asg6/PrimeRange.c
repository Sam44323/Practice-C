#include <stdio.h>
int main()
{
  int num1, num2, c, i, j;

  /* Ask user to input the from/to range
    * like 1 to 100, 10 to 1000 etc.
    */
  printf("Enter the starting range:");
  scanf("%d", &num1);

  printf("Enter the ending range:");
  scanf("%d", &num2);

  //Display prime numbers for input range
  printf("Prime numbers from %d and %d are:\n", num1, num2);
  for (i = num1 + 1; i < num2; ++i)
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