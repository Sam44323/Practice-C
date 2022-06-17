#include <stdio.h>

void linear_search(int *, int, int);
void binary_search(int *, int, int);

int main()
{
  int n, key = 0, i, ele;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements: ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  while (key != -1)
  {
    printf("Enter 1 for linear search | 2 for binary search | 3 for exit \n");
    printf("Enter the key: ");
    scanf("%d", &key);
    printf("Enter the searching element: ");
    scanf("%d", &ele);

    switch (key)
    {
    case 1:
      linear_search(arr, n, ele);
      break;

    case 2:
      binary_search(arr, n, ele);
      break;

    default:
      break;
    }
  }
  return 0;
}

void linear_search(int *arr, int n, int key)
{
  int i;
  for (i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      printf("%d found at index %d\n", key, i);
      break;
    }
  }
  if (i == n)
  {
    printf("%d not found\n", key);
  }
}

void binary_search(int *arr, int n, int key)
{
  int low = 0, high = n - 1, mid;
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (arr[mid] == key)
    {
      printf("%d found at index %d\n", key, mid);
      break;
    }
    else if (arr[mid] < key)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  if (low > high)
  {
    printf("%d not found\n", key);
  }
}