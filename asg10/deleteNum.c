

#include <stdio.h>

void valueDelete(int *array, int length)
{
  int value = 0, i = 0, index = -1;
  printf("Enter the value: \n");
  scanf("%d", &value);

  for (i = 0; i < length; i++)
  {
    if (array[i] == value)
    {
      index = i;
      break;
    }
  }

  if (index > -1)
  {
    for (i = index; i < length - 1; i++)
      array[i] = array[i + 1];

    printf("New updated array : \n");
    for (i = 0; i < length - 1; i++)
      printf("%d ", array[i]);
    printf("\n");
  }
  else
    printf("Element Not Found in tha array\n");
}
void positionDelete(int *array, int length)
{
  int pos = 0, i = 0;
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

int main()
{
  int i, n, a[50], choice = 0;

  printf("Enter the count of numbers you want to store: \n");

  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("%dth value enterring...:", i + 1);
    scanf("%d", &a[i]);
  }

  while (choice >= 0)
  {
    printf("1: Value Delete | 2. Position Delete \n");
    printf("Enter your choice \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      valueDelete(a, n);
      break;

    case 2:
      positionDelete(a, n);

    default:
      break;
    }
  }
}