#include <stdio.h>

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  long a = 0, b = 1, sum = 0;

  if (num <= 1)
    return num;

  for (int i = 2; i <= num; i++)
  {
    sum = a + b;
    a = b;
    b = sum;
  }

  printf("The %dth fibonacci number is %ld", num, b);
}