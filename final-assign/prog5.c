#include <stdio.h>

void fibonacci_range()
{
  int a, b, c, i, range;

  printf("Enter number of range to print fibonacci: ");
  scanf("%d", &range);

  a = 0;
  b = 1;
  c = 0;

  printf("Fibonacci range: \n");

  for (i = 1; i <= range; i++)
  {
    printf("%d \n", c);
    a = b;
    b = c;
    c = a + b;
  }
}

void nth_fibonacci()
{
  int num;
  printf("Enter the term to print from fibonacci range: ");
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

void non_fibonacci_series()
{
  int n, a, b, c, x, d;

  a = 0;
  b = 1;
  c = 0;
  printf("Enter the terminal point for the range:");
  scanf("%d", &n);

  while (c <= n)
  {
    c = a + b;
    a = b;
    b = c;
    d = a + b;

    for (x = c + 1; x < d; x++)
    {
      if (x <= n)
        printf("%d", x);
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
    printf("1. Fibonacci Range | 2. Nth Fibonacci | 3. Non Fibonacci Range \n");
    printf("Enter your choice! \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      fibonacci_range();
      break;

    case 2:
      nth_fibonacci();
      break;

    case 3:
      non_fibonacci_series();
      break;

    default:
      printf("Invalid Choice! \n");
      break;
    }
  }
  return 0;
}