

#include <stdio.h>

void referSwap(int *n1, int *n2)
{
  int temp;
  temp = *n1;
  *n1 = *n2;
  *n2 = temp;

  printf("Swapped numbers are: \n");
  printf("Num 1: %d \n", *n1);
  printf("Num 2: %d \n", *n2);
}

int main()
{
  int n1, n2;
  printf("Enter two numbers for swapping: \n");
  scanf("%d %d", &n1, &n2);

  printf("Original Swapping: \n");
  printf("Num 1: %d \n", n1);
  printf("Num 2: %d \n", n2);

  referSwap(&n1, &n2);
  return 0;
}