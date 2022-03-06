
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int countOccurrences(FILE *fptr, const char *word)
{
  char str[SIZE];
  char *pos;

  int index, count;

  count = 0;

  while ((fgets(str, SIZE, fptr)) != '\0')
  {
    index = 0;
    while ((pos = strstr(str + index, word)) != '\0')
    {
      index = (pos - str) + 1;
      count++;
    }
  }

  return count;
}

int main()
{
  FILE *fptr;
  char *word;
  int i = 0;

  word = malloc(25 * sizeof(char));
  fptr = fopen("paragraph.txt", "r");

  if (!fptr)
    printf("File not found. \n");

  else
  {
    printf("Word: ");
    scanf("%s", word);
    i = countOccurrences(fptr, word);
  }
  if (i == 0)
    printf("Word not found!\n");
  else
    printf("Word found %d times!\n", i);

  fclose(fptr);
  return 0;
}