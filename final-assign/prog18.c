#include <stdio.h>
#include <stdlib.h>

int main()
{
  char ch;

  FILE *fptr;

  fptr = fopen("paragraph.txt", "w");
  printf("\nEnter text to write (press < enter > to save & quit):\n");
  while ((ch = getchar()) != '\n')
  {
    putc(ch, fptr);
  }

  printf("Paragraph written successfully.");
  fclose(fptr);

  return 0;
}