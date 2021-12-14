#include <stdio.h>

int main()
{
  int matrix[100][100], diag1Sum, diag2Sum, rows1, cols1, i = 0, j = 0;

  printf("Enter the number of rows and columns of first matrix \n");
  scanf("%d%d", &rows1, &cols1);
  printf("Enter the elements of first matrix \n");

  for (i = 0; i < rows1; i++)
    for (j = 0; j < cols1; j++)
    {
      printf("Enter value for %d and %d position: ", i + 1, j + 1);
      scanf("%d", &matrix[i][j]);
      printf("\n");
    }

  printf("The entered matrix is: \n");
  for (i = 0; i < rows1; i++)
  {
    for (j = 0; j < cols1; j++)
      printf("%d \t", matrix[i][j]);
    printf("\n");
  }
  for (i = 0; i < rows1; i++)
  {
    diag1Sum = diag1Sum + matrix[i][i];
    diag2Sum = diag2Sum + matrix[i][rows1 - i - 1];
  }
  printf("The Sum of First Diagonal Elements of a Matrix =  %d \n", diag1Sum);
  printf("The Sum of Second Diagonal Elements of a Matrix =  %d", diag2Sum);
  return 0;
}