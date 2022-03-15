
#include <stdio.h>
#define MAX 100

void positionDeletion(int *arr, int size);
void valueDeletion(int *arr, int size);

int main()
{
  int a[MAX], i = 0, choice = 0, size = 0;

  printf("Enter the size of the array: ");
  scanf("%d", &size);
  if (size > MAX)
  {
    printf("Array size is too large.\n");
    return 0;
  }

  printf("Enter the elements for the array: \n");
  for (i = 0; i < size; i++)
  {
    printf("Enter the element %d: ", i + 1);
    scanf("%d", &a[i]);
  }

  while (choice >= 0)
  {
    printf("1: Delete by position | 2. Delete by value | -1. Exit \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      positionDeletion(a, size);
      break;

    case 2:
      valueDeletion(a, size);
      break;

    case -1:
      printf("Exiting...\n");
      break;

    default:
      printf("Invalid choice.\n");
      break;
    }
  }
  return 0;
}

void positionDeletion(int *arr, int size)
{
  int pos = 0, i = 0;
  printf("Enter the position to delete: ");
  scanf("%d", &pos);
  if (pos > size)
  {
    printf("Invalid position.\n");
    return;
  }
  for (i = pos - 1; i < size - 1; i++)
  {
    arr[i] = arr[i + 1];
  }

  printf("The array after deletion is: \n");
  for (i = 0; i < size - 1; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void valueDeletion(int *arr, int size)
{
  int val = 0, i = 0;
  printf("Enter the value to delete: ");
  scanf("%d", &val);
  for (i = 0; i < size; i++)
  {
    if (arr[i] == val)
    {
      for (i = i; i < size - 1; i++)
      {
        arr[i] = arr[i + 1];
      }
      size--;
    }
  }
  printf("The array after deletion is: \n");
  for (i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}