
#include <stdio.h>

int main()
{
  int n, start, end, i = 0;
  printf("Enter the starting range value: \n");
  scanf("%d", &start);
  printf("Enter the ending range value: \n");
  scanf("%d", &end);

  printf("The multiple for 3 within the range for %d is: \n", n);

  for (i = start; i <= end; i++)
  {
    if (i % 3 == 0)
      printf("%d \n", i);
  }
}