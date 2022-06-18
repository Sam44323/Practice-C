#include <stdio.h>

void print_array(int *arr, int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void insertion_sort(int *arr, int n)
{
  int i, j, temp;
  for (i = 1; i < n; i++)
  {
    temp = arr[i];
    for (j = i - 1; j >= 0 && arr[j] > temp; j--)
    {
      arr[j + 1] = arr[j];
    }
    arr[j + 1] = temp;
  }
}

void quick_sort(int *arr, int l, int r)
{
  int i, j, pivot, temp;
  if (l < r)
  {
    pivot = l;
    i = l;
    j = r;
    while (i < j)
    {
      while (arr[i] <= arr[pivot] && i < r)
      {
        i++;
      }
      while (arr[j] > arr[pivot])
      {
        j--;
      }
      if (i < j)
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
    temp = arr[pivot];
    arr[pivot] = arr[j];
    arr[j] = temp;
    quick_sort(arr, l, j - 1);
    quick_sort(arr, j + 1, r);
  }
}

int getMax(int arr[], int n)
{
  int mx = arr[0];
  int i;
  for (i = 1; i < n; i++)
    if (arr[i] > mx)
      mx = arr[i];
  return mx;
}

void countSort(int arr[], int n, int exp)
{
  int output[n];
  int i, count[n];

  for (i = 0; i < n; i++)
    count[(arr[i] / exp) % 10]++;

  for (i = 1; i < 10; i++)
    count[i] += count[i - 1];

  for (i = n - 1; i >= 0; i--)
  {
    output[count[(arr[i] / exp) % 10] - 1] = arr[i];
    count[(arr[i] / exp) % 10]--;
  }

  for (i = 0; i < n; i++)
    arr[i] = output[i];
}

void radix_sort(int *arr, int n)
{
  int m = getMax(arr, n);

  int exp;
  for (exp = 1; m / exp > 0; exp *= 10)
    countSort(arr, n, exp);
}

int main()
{
  int n, key = 0, i;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements: ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  while (key != 4)
  {
    printf("Enter 1 for insertion sort | 2 for quick sort | 3 for radix sort | 4 for exit \n");
    printf("Enter the key: ");
    scanf("%d", &key);

    switch (key)
    {
    case 1:
      insertion_sort(arr, n);
      print_array(arr, n);
      break;

    case 2:
      quick_sort(arr, 0, n - 1);
      print_array(arr, n);
      break;

    case 3:
      radix_sort(arr, n);
      print_array(arr, n);
      break;

    default:
      break;
    }
  }
  return 0;
}