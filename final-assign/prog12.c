#include <stdio.h>

int main()
{

  int n1, n2, n3;
  printf("Enter the size for first array\n");
  scanf("%d", &n1);
  printf("Enter the size for second array\n");
  scanf("%d", &n2);

  n3 = n1 + n2;
  printf("\nEnter the sorted array elements for the first array \n");
  int a[n1], b[n2], c[n3];
  for (int i = 0; i < n1; i++)
  {
    scanf("%d", &a[i]);
    c[i] = a[i];
  }
  int k = n1;
  printf("Enter the sorted array elements for the first array \n");
  for (int i = 0; i < n2; i++)
  {
    scanf("%d", &b[i]);
    c[k] = b[i];
    k++;
  }

  printf("Merged and sorted!\n");
  for (int i = 0; i < n3; i++)
  {
    int temp;
    for (int j = i + 1; j < n3; j++)
    {
      if (c[i] < c[j])
      {
        temp = c[i];
        c[i] = c[j];
        c[j] = temp;
      }
    }
  }

  for (int i = 0; i < n3; i++)
  {
    printf(" %d ", c[i]);
  }
  return 0;
}