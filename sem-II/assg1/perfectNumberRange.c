
#include <stdio.h>

int main()
{
  int n, i, sum;
  int min, max;
  printf("Enter the starting range or number : ");
  scanf("%d", &min);
  printf("Enter the ending range of number : ");
  scanf("%d", &max);
  printf("The perfect numbers within the given range : ");
  for (n = min; n <= max; n++)
  {
    i = 1;
    sum = 0;
    while (i < n)
    {
      if (n % i == 0)
        sum = sum + i;
      i++;
    }
    if (sum == n)
      printf("%d ", n);
  }
  printf("\n");
}