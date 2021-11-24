#include <stdio.h>

int main()
{
  int num, temp, sum;
  scanf("Enter the number for checking: %d \n", &num);

  while (num > 9)
  {
    temp = num;
    sum = 0;

    if (temp < 0)
    {
      printf("%d is a magic number!\n", num);
      break;
    }

    while (temp > 0)
    {
      sum += (temp % 10);
      temp /= 10;
    }
    num = sum;
  }
  printf("Digital root value is: %d", num);
  return 0;
}