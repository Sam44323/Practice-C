

#include <stdio.h>
int main()
{
  int a[10][10], convertedMatrix[10][10], rows, cols;
  printf("Enter rows and columns value for the matrix: ");
  scanf("%d %d", &rows, &cols);

  printf("Enter matrix elements:\n");
  for (int i = 0; i < rows; ++i)
    for (int j = 0; j < cols; ++j)
    {
      printf("Enter element at %d and %d position: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Entered matrix: \n");
  for (int i = 0; i < rows; ++i)
    for (int j = 0; j < cols; ++j)
    {
      printf("%d  ", a[i][j]);
      if (j == cols - 1)
        printf("\n");
    }

  for (int i = 0; i < rows; ++i)
    for (int j = 0; j < cols; ++j)
    {
      convertedMatrix[j][i] = a[i][j];
    }

  printf("\nTranspose of the matrix:\n");
  for (int i = 0; i < cols; ++i)
    for (int j = 0; j < rows; ++j)
    {
      printf("%d  ", convertedMatrix[i][j]);
      if (j == rows - 1)
        printf("\n");
    }
  return 0;
}