#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *poem;

  char filename[100], c;

  poem = fopen("poem.txt", "r");
  if (poem == NULL)
  {
    printf("Cannot open file \n");
    exit(0);
  }

  c = fgetc(poem);
  while (c != EOF)
  {
    printf("%c", c);
    c = fgetc(poem);
  }

  fclose(poem);
  return 0;
}