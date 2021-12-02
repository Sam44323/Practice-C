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

    default:
      printf("Exitting the code!");
      break;
    }
  }
  return 0;
}