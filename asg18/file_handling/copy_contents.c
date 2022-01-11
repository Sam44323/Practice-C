#include <stdio.h>

int main()
{
  FILE *fptr1, *fptr2;
  char filename[100], c;

  printf("Enter the filename to open for reading \n");
  scanf("%s", filename);

  // Open one file for reading
  fptr1 = fopen(filename, "r");
  if (fptr1 == NULL)
  {
    printf("Cannot open file %s \n", filename);
    fptr1 = fopen(filename, "wt");
  }

  printf("Enter the filename to open for writing \n");
  scanf("%s", filename);

  // Open another file for writing
  fptr2 = fopen(filename, "w");
  if (fptr2 == NULL)
  {
    printf("Cannot open file %s \n", filename);
    fptr2 = fopen(filename, "wt");
  }

  // Read contents from file
  c = fgetc(fptr1);
  while (c != EOF)
  {
    fputc(c, fptr2);
    c = fgetc(fptr1);
  }

  printf("\nContents copied to %s", filename);

  fclose(fptr1);
  fclose(fptr2);
  return 0;

  return 0;
}