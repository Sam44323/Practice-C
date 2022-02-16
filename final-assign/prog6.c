#include <stdio.h>
#include <math.h>

int fac(int x)
{
  int i, fac = 1;
  for (i = 1; i <= x; i++)
    fac = fac * i;
  return fac;
}

void sine_series()
{
  float x, Q, sum = 0;
  int i, j, limit;

  printf("Enter the value of x for series: ");
  scanf("%f", &x);

  printf("Enter the limit: ");
  scanf("%d", &limit);

  Q = x;
  x = x * (3.1415 / 180);

  for (i = 1, j = 1; i <= limit; i++, j = j + 2)
  {
    if (i % 2 != 0)
    {
      sum = sum + pow(x, j) / fac(j);
    }
    else
      sum = sum - pow(x, j) / fac(j);
  }

  printf("Sin(%0.1f): %f", Q, sum);
}

void cosine_series()
{
  int i, n;
  float x, sum = 1, t = 1;
  clrscr();

  printf(" Enter the value for x : ");
  scanf("%f", &x);

  printf(" Enter the value for n : ");
  scanf("%d", &n);

  x = x * 3.14159 / 180;

  for (i = 1; i <= n; i++)
  {
    t = t * (-1) * x * x / (2 * i * (2 * i - 1));
    sum = sum + t;
  }

  printf(" The value of Cosine(%f) is : %.4f", x, sum);
  getch();
}

int main()
{
  int choice = 0;
  while (choice >= 0)
  {
    printf("1: Sine Series | 2. Cosine Series \n");
    printf("Enter your choice!");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      sine_series();
      break;

    case 2:
      cosine_series();
      break;

    default:
      printf("Invalid Choice! \n");
      break;
    }
  }
}