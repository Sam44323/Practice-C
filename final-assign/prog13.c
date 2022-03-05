#include <stdio.h>
#define SIZE 100

void summation(int a[SIZE][SIZE], int b[SIZE][SIZE], int r, int c)
{
  int i = 0, j = 0, sum[r][c];
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
    {
      sum[i][j] = a[i][j] + b[i][j];
    }

  printf("Sum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
    {
      printf("%d\t", sum[i][j]);
      if (j == c - 1)
      {
        printf("\n\n");
      }
    }
}

void difference(int a[SIZE][SIZE], int b[SIZE][SIZE], int r, int c)
{
  int i = 0, j = 0, diff[r][c];
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
    {
      diff[i][j] = a[i][j] - b[i][j];
    }

  printf("Difference of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
    {
      printf("%d\t", diff[i][j]);
      if (j == c - 1)
      {
        printf("\n\n");
      }
    }
}

void product(int a[SIZE][SIZE], int b[SIZE][SIZE], int r, int c)
{
  int i = 0, j = 0, k = 0, mul[SIZE][SIZE];
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      mul[i][j] = 0;
      for (k = 0; k < c; k++)
      {
        mul[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  printf("Product of two matrices: \n");
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      printf("%d\t", mul[i][j]);
    }
    printf("\n");
  }
}

void transpose(int a[SIZE][SIZE], int b[SIZE][SIZE], int r, int c)
{
  int convertedMatrix[SIZE][SIZE], i = 0, j = 0;
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
    {
      convertedMatrix[j][i] = a[i][j];
    }
  printf("\nTranspose of the first matrix:\n");
  for (int i = 0; i < c; ++i)
    for (int j = 0; j < r; ++j)
    {
      printf("%d  ", convertedMatrix[i][j]);
      if (j == r - 1)
        printf("\n");
    }
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
    {
      convertedMatrix[j][i] = b[i][j];
    }
  printf("\nTranspose of the second matrix:\n");
  for (int i = 0; i < c; ++i)
    for (int j = 0; j < r; ++j)
    {
      printf("%d  ", convertedMatrix[i][j]);
      if (j == r - 1)
        printf("\n");
    }
}

int main()
{
  int a[SIZE][SIZE], b[SIZE][SIZE], i = 0, j = 0, r, c, choice = 0;
  printf("Enter the number of rows");
  scanf("%d", &r);
  printf("Enter the number of columns");
  scanf("%d", &c);
  if (r > SIZE || c > SIZE)
  {
    printf("Size should be less than or equal to 100 \n");
    return 0;
  }

  printf("\nEnter elements for the first matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
    {
      printf("Enter element a[%d][%d]: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements for the second matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
    {
      printf("Enter element b[%d][%d]: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  while (choice >= 0)
  {
    printf("1: Summation | 2: Difference | 3: Product | 4: Transpose\n | -1: Exit");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      summation(a, b, r, c);
      break;
    case 2:
      difference(a, b, r, c);
      break;
    case 3:
      product(a, b, r, c);
      break;
    case 4:
      transpose(a, b, r, c);
      break;
    case -1:
      printf("Exiting...\n");
      return 0;
    default:
      printf("Invalid choice\n");
      break;
    }
  }

  return 0;
}