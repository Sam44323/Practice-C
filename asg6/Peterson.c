
#include <stdio.h>

int main()
{
  int num, n, rem, sum = 0, fact = 1;
  printf("Enter a number for checking: \n");
  scanf("%d", &num);
  n = num;
  while (n != 0)
  {
    rem = n % 10;
    for (int i = 1; i <= rem; i++)
    {
      fact *= i;
    }
    sum += fact;
    fact = 1;
    n = n / 10;
  }
  if (num == sum)
    printf("%d is a Peterson Number", num);
  else
    printf("%d is not a Peterson Number", num);
  return 0;
}