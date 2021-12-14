#include <stdio.h>

int main()
{
  int mat1[100][100], mat2[100][100], sum[100][100], rows, cols, i = 0, j = 0;
  printf("Enter the row count: ");
  scanf("%d", &rows);
  printf("Enter the column count: ");
  scanf("%d", &cols);
  printf("\n");

  printf("Enter elements for 1st matrix:\n");
  for (i = 0; i < rows; ++i)
    for (j = 0; j < cols; ++j)
    {
      printf("Enter element at %d and %d position: ", i + 1, j + 1);
      scanf("%d", &mat1[i][j]);
    }

  printf("Enter elements for 2nd matrix:\n");

  for (i = 0; i < rows; ++i)
    for (j = 0; j < cols; ++j)
    {
      printf("Enter element at %d and %d position: ", i + 1, j + 1);
      scanf("%d", &mat2[i][j]);
    }

  for (i = 0; i < rows; ++i)
    for (j = 0; j < cols; ++j)
    {
      sum[i][j] = mat1[i][j] + mat2[i][j];
    }

  printf("Sum of two matrices are: \n");
  for (i = 0; i < rows; ++i)
    for (j = 0; j < cols; ++j)
    {
      printf("%d \t", sum[i][j]);
      if (j == cols - 1)
      {
        printf("\n");
      }
    }

  return 0;
}