#include <stdio.h>

int main()
{
  FILE *fp1, *fp2;
  int ch1, ch2;
  char name1[40], name2[40];

  printf("Enter the first file :");
  gets(name1);

  printf("Enter the second file:");
  gets(name2);

  fp1 = fopen(name1, "r");
  fp2 = fopen(name2, "r");

  if (fp1 == NULL)
  {
    printf("Cannot open %s for reading ", name1);
  }
  else if (fp2 == NULL)
  {
    printf("Cannot open %s for reading ", name2);
  }
  else
  {
    ch1 = getc(fp1);
    ch2 = getc(fp2);

    while ((ch1 != EOF) && (ch2 != EOF) && (ch1 == ch2))
    {
      ch1 = getc(fp1); // reading character by character
      ch2 = getc(fp2); // reading character by character
    }

    if (ch1 == ch2)
      printf("Files are identical n");
    else if (ch1 != ch2)
      printf("Files are Not identical n");

    fclose(fp1);
    fclose(fp2);
  }
  return (0);
}