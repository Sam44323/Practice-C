#include <stdio.h>

int main()
{
  char ch;
  int char_count = 0, word_count = 0, line_count = 0;
  int word = 0;
  char file_name[1000];
  FILE *fp;

  printf("Enter a file name: ");
  scanf("%s", file_name);

  fp = fopen(file_name, "r");

  if (fp == NULL)
  {
    printf("Could not open the file %s\n", file_name);
    return 1;
  }

  while ((ch = fgetc(fp)) != EOF)
  {
    char_count++;

    if (ch == ' ' || ch == '\t' || ch == '\0' || ch == '\n')
    {
      if (word)
      {
        word = 0;
        word_count++;
      }

      if (ch == '\0' || ch == '\n')
        line_count++;
    }
    else
    {
      word = 1;
    }
  }

  printf("number of characters: %d.\n", char_count);
  printf("number of words: %d.\n", word_count);
  printf("number of lines: %d.\n", line_count);

  return 0;
}