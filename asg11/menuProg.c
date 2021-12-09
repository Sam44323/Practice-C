#include <stdio.h>

void evenOdd(int *array, int length)
{
  int i = 0;
  for (i = 0; i < length; i++)
  {
    if (array[i] % 2 == 0)
      printf("Even: %d", array[i]);
    else
      printf("Odd: %d", array[i]);
  }
}

void sumAverage(int *array, int length)
{
  int i = 0, sum = 0;
  for (i = 0; i < length; i++)
  {
    sum += array[i];
  }
  printf("Sum: %d", sum);
  printf("Average: %d", sum / length);
}

int main()
{
  int a[50], n, choice = 0, i;

  printf("Enter the count of numbers you want to store: \n");

  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("%dth value enterring...:", i + 1);
    scanf("%d", &a[i]);
  }

  while (choice >= 0)
  {
    printf("1. Even-Odd | 2. Sum/Average | 3. Max-Min | 4. Insert-delete | 5. Remove Duplicates | 6. Reverse Print | 7. Asc-Desc | 8. Reverse Elements | 9. Frequency Count \n");
    printf("Enter your choice please: \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      evenOdd(a, n);
      break;

    default:
      break;
    }
  }
}