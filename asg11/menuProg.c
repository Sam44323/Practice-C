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

void duplicateRemoval(int *array, int length)
{
  int i = 0, j = 0, c = 0;
  for (i = 0; i < length; i++)
  {
    for (j = i + 1; j < length; j++)
    {

      if (array[i] == array[j])
      {
        for (c = j; c < length - 1; c++)
        {
          array[c] = array[c + 1];
        }
        length--;

        j--;
      }
    }
  }

  printf("New array after deletion: \n");

  for (i = 0; i < length; i++)
  {
    printf("%d \n", array[i]);
  }
}

void reverseOrderPrint(int *array, int length)
{
  int i;
  printf("Array in reverse order \n");
  for (i = length - 1; i >= 0; i--)
  {
    printf("%d \n", array[i]);
  }
}

void ascDescSort(int *array, int length)
{
  int i, temp = 0, j, choice;

  printf("Enter 1 for Ascending and 2 for Descending \n");
  scanf("%d \n", &choice);

  for (i = 0; i < length - 1; i++)
  {
    printf("%d", i);
    for (j = 0; j < length - i - 1; j++)
    {
      printf("%d", j);
      if (choice == 1 ? array[j] > array[j + 1] : array[j] < array[j + 1])
      {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i < length; i++)
    printf("%d \n", array[i]);
}

void reverseElement(int *array, int length)
{
  int i = 0, b[50], c = 0;

  for (i = length - 1; i >= 0; i--)
  {
    b[c++] = array[i];
  }

  printf("Reversed array: \n");
  for (i = 0; i < length; i++)
    printf("%d \n", b[i]);
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

    case 5:
      duplicateRemoval(a, n);
      break;

    case 6:
      reverseOrderPrint(a, n);
      break;

    case 7:
      ascDescSort(a, n);
      break;

    case 8:
      reverseElement(a, n);
      break;

    default:
      break;
    }
  }
}