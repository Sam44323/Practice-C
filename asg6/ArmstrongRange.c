#include <stdio.h>

void main()
{
  int num, r, sum, temp;
  int start, end;

  printf("Enter the  starting number of range: ");
  scanf("%d", &start);

  printf("Enter the  ending number of range : ");
  scanf("%d", &end);

  printf("Armstrong numbers in given range are: ");
  for (num = start; num <= end; num++)
  {
    temp = num;
    sum = 0;

    while (temp != 0)
    {
      r = temp % 10;
      temp = temp / 10;
      sum = sum + (r * r * r);
    }
    if (sum == num)
      printf("%d ", num);
  }
  printf("\n");
}