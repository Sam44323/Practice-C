#include <stdio.h>

int main()
{
  int mat1[100][100], mat2[100][100], multiply[100][100], sum, rows1, cols1, rows2, cols2, i = 0, j = 0, k = 0;

  printf("Enter the number of rows and columns of first matrix \n");
  scanf("%d %d", &rows1, &cols1);
  printf("\n");
  printf("Enter the elements of first matrix \n");

  for (i = 0; i < rows1; i++)
    for (j = 0; j < cols1; j++)
      scanf("%d", &mat1[i][j]);

  printf("Enter the number of rows and columns of second matrix \n");
  scanf("%d %d", &rows2, &cols2);
  printf("\n");

  if (cols1 != rows2)
  {
    printf("The given order matrices can't be multiplicated. Please retry!.\n");
  }
  else
  {
    printf("Enter the elements for second matrix\n");

    for (i = 0; i < rows2; i++)
    {
      for (j = 0; j < cols2; j++)
      {

        scanf("%d", &mat2[i][j]);
      }
    }

    for (i = 0; i < rows1; i++)
    {
      for (j = 0; j < cols2; j++)
      {
        for (k = 0; k < rows2; k++)
        {
          sum = sum + mat1[i][k] * mat2[k][j];
        }

        multiply[i][j] = sum;
        sum = 0;
      }
    }
    printf("Product of the matrices are:\n");

    for (i = 0; i < rows1; i++)
    {
      for (j = 0; j < cols2; j++)
        printf("%d\t", multiply[i][j]);

      printf("\n");
    }
  }
}