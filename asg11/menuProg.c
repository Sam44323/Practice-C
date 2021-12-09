#include <stdio.h>

void evenOdd(int *array, int length)
{
  int i = 0;
  for (i = 0; i < length; i++)
  {
    if (array[i] % 2 == 0)
      printf("Even: %d \n", array[i]);
    else
      printf("Odd: %d \n", array[i]);
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

void maxmin(int *array, int length)
{
  int i = 0, sum = 0, max = 0, min = 0;
  if (length == 1)
  {
    min = max = array[0];
  }

  if (array[0] > array[1])
  {
    max = array[0];
    min = array[1];
  }
  else
  {
    max = array[1];
    min = array[0];
  }
  for (int i = 2; i < length; i++)
  {
    if (array[i] > max)
      max = array[i];
    else if (array[i] < min)
      min = array[i];
  }
  printf("Maximum value: %d \n", max);
  printf("Minimum value: %d \n", min);
}

void insertDelete(int *array, int length)
{
  int i = 0, choice, pos, value;
  printf("Enter 1. for Delete and 2. for Insert: \n");
  scanf("%d", &choice);

  if (choice == 1)
  {
    printf("Enter the position: \n");
    scanf("%d", &pos);

    if (pos + 1 > length)
    {
      printf("Array Index out of bound!");
      return;
    }
    for (i = pos - 1; i < length - 1; i++)
      array[i] = array[i + 1];

    printf("Resultant array:\n");

    for (i = 0; i < length - 1; i++)
      printf("%d\n", array[i]);
  }
  else
  {
    printf("Enter the position where you want to enter: \n");
    scanf("%d", &pos);
    printf("Enter the value that you want to enter: \n");
    scanf("%d", &value);

    for (i = length - 1; i >= pos - 1; i--)
      array[i + 1] = array[i];
    array[pos - 1] = value;

    printf("New array after inserting \n");
    for (i = 0; i < length; i++)
      printf("%d", array[i]);
  }
}

int main()
{
  int a[50], n, choice = 0, i;

  while (choice >= 0)
  {
    printf("Enter the count of numbers you want to store: \n");

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
      printf("%dth value enterring...:", i + 1);
      scanf("%d", &a[i]);
    }

    printf("1. Even-Odd | 2. Sum/Average | 3. Max-Min | 4. Insert-delete | 5. Remove Duplicates | 6. Reverse Print | 7. Asc-Desc | 8. Reverse Elements | 9. Frequency Count \n");

    printf("Enter your choice please: \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      evenOdd(a, n);
      break;

    case 2:
      sumAverage(a, n);
      break;

    case 3:
      maxmin(a, n);
      break;

    case 4:
      insertDelete(a, n);
      break;

    default:
      break;
    }
  }
}