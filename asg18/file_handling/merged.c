#include <stdio.h>
#include <stdlib.h>

int main()
{
  char filename[100];
  printf("Enter the the first file\n");
  scanf("%s", filename);
  FILE *fp1 = fopen(filename, "r");

  printf("Enter the the second file\n");
  scanf("%s", filename);
  FILE *fp2 = fopen(filename, "r");

  printf("Enter the the third file\n");
  scanf("%s", filename);
  FILE *fp3 = fopen("file3.txt", "w");

  char c;

  if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
  {
    puts("Could not open files");
    exit(0);
  }

  while ((c = fgetc(fp1)) != EOF)
    fputc(c, fp3);

  while ((c = fgetc(fp2)) != EOF)
    fputc(c, fp3);

  printf("Merge is successfull!");

  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
  return 0;
}