#include <stdio.h>

void oddSum()
{
  int range, i, sum = 0;
  printf("Enter the range you want to print: \n");
  scanf("%d", &range);

  for (i = 1; i <= range; i += 2)
  {
    sum += i;
  }

  printf("Summation for odd numbers upto %d is %d \n", range, sum);
}

void Swapper()
{
  int n1, n2, temp;
  printf("Enter the first value: \n");
  scanf("%d", &n1);

  printf("Enter the second value: \n");
  scanf("%d", &n2);

  temp = n1;
  n1 = n2;
  n2 = temp;

  printf("Swapped! First: %d, Second: %d \n", n1, n2);
}

void NonFibonacci()
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
}

int main()
{
  int choice = 0;

  while (choice >= 0)
  {
    printf("Enter the choice you want to select: \n");
    printf("1. Odd Sum | 2. Swap | 3. Non Fibonacci | 4. Factorial | 5. Prime Factors \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      oddSum();
      break;

    case 2:
      Swapper();
      break;

    case 3:
      NonFibonacci();
      break;

    default:
      printf("Exitting the code!");
      break;
    }
  }
  return 0;
}