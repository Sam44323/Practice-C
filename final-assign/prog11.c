#include <stdio.h>

#define SIZE 100

void maxMin(int *arr, int size)
{
  int max = arr[0];
  int min = arr[0];
  for (int i = 0; i < SIZE; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  printf("Max: %d\n", max);
  printf("Min: %d\n", min);
}

void insertionDeletionFromArray(int *arr, int size)
{
  int choice = 0, pos, value = 0, i = 0;

  printf("1. Insert | 2. Delete\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);
  printf("Enter the position where you'd like to insert/delete: ");
  scanf("%d", &pos);
  if (pos > size + 1)
  {
    printf("Invalid position\n");
    return;
  }
  printf("Enter the value: ");
  scanf("%d", &value);

  if (choice == 1)
  {
    for (i = size - 1; i >= pos - 1; i--)
      arr[i + 1] = arr[i];
    arr[pos - 1] = value;
    printf("Array after insertion: ");
    for (i = 0; i < size; i++)
      printf("%d ", arr[i]);
    printf("\n");
  }
  else if (choice == 2)
  {
    for (i = pos - 1; i < size - 1; i++)
      arr[i] = arr[i + 1];

    printf("Array after deletion: ");
    for (i = 0; i < size; i++)
      printf("%d ", arr[i]);
    printf("\n");
  }
  else
  {
    printf("Invalid choice\n");
  }
}

void removeDuplicates(int *arr, int size)
{
  int i = 0, j = 0, k = 0;
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        for (k = j; k < size; k++)
        {
          arr[k] = arr[k + 1];
        }
        j--;
        size--;
      }
    }
  }

  printf("Array after duplicates removal: ");
  for (i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

void sortingAscDesc(int *arr, int size)
{
  int i = 0, j = 0, temp = 0, choice = 0;

  printf("1: Ascending | 2: Descending\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);

  if (choice == 1)
  {
    for (i = 0; i < size; ++i)
    {

      for (j = i + 1; j < size; ++j)
      {

        if (arr[i] > arr[j])
        {

          temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
        }
      }
    }

    printf("Array after sorting in ascending: ");
    for (i = 0; i < size; i++)
      printf("%d ", arr[i]);
  }
  else if (choice == 2)
  {
    for (i = 0; i < size; ++i)
    {

      for (j = i + 1; j < size; ++j)
      {

        if (arr[i] < arr[j])
        {

          temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
        }
      }
    }

    printf("Array after sorting in descending: ");
    for (i = 0; i < size; i++)
      printf("%d ", arr[i]);
  }
  else
  {
    printf("Invalid choice\n");
  }
}

void reverseArray(int *arr, int size)
{
  int temp, i = 0;
  for (int i = 0; i < size / 2; i++)
  {
    temp = arr[i];
    arr[i] = arr[size - i - 1];
    arr[size - i - 1] = temp;
  }

  printf("Array after reversing: ");
  for (i = 0; i < size; i++)
    printf("%d ", arr[i]);
}

void frequencyCalculation(int *arr, int size)
{
  int freq[size], j = 0, i = 0, count = 0;
  for (i = 0; i < size; i++)
    freq[i] = -1;

  for (i = 0; i < size; i++)
  {
    count = 1;
    for (j = i + 1; j < size; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;

        freq[j] = 0;
      }
    }

    if (freq[i] != 0)
      freq[i] = count;
  }

  printf("Frequency of elements : \n");
  for (i = 0; i < size; i++)
  {
    if (freq[i] != 0)
    {
      printf("%d occurs", arr[i]);
      printf("%d times", freq[i]);
    }
  }
}

int main()
{
  int arr[SIZE], choice = 0, size = 0;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  if (size > SIZE)
  {
    printf("Size of the array is greater than the maximum size of the array.\n");
    return 0;
  }

  printf("Enter the elements of the array: \n");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }

  while (choice >= 0)
  {
    printf("1. Max and Min | 2. Insertion and Deletion | 3. Remove Duplicates | 4. Sort Ascending and Descending | 5. Reverse Array | 6. Frequency Calculation\n | -1. Exit\n");
    printf("Enter your choice: \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      maxMin(arr, size);
      break;
    case 2:
      insertionDeletionFromArray(arr, size);
      break;
    case 3:
      removeDuplicates(arr, size);
      break;
    case 4:
      sortingAscDesc(arr, size);
      break;
    case 5:
      reverseArray(arr, size);
      break;
    case 6:
      frequencyCalculation(arr, size);
      break;
    case -1:
      printf("Exiting...\n");
      return 0;
    default:
      printf("Invalid choice.\n");
      break;
    }
  }

  return 0;
}