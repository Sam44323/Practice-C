#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

char *replaceWord(const char *s, const char *oldW, const char *newW)
{
  char *result;
  int i, count = 0;
  int newWlen = strlen(newW);
  int oldWlen = strlen(oldW);

  for (i = 0; s[i] != '\0'; i++)
  {
    if (strstr(&s[i], oldW) == &s[i])
    {
      count++;

      i += oldWlen - 1;
    }
  }

  result = (char *)malloc(i + count * (newWlen - oldWlen) + 1);

  i = 0;
  while (*s)
  {
    if (strstr(s, oldW) == s)
    {
      strcpy(&result[i], newW);
      i += newWlen;
      s += oldWlen;
    }
    else
      result[i++] = *s++;
  }

  result[i] = '\0';
  return result;
}

int main()
{
  char string[SIZE], old[SIZE], new[SIZE];
  printf("Enter the word ");
  fgets(string, sizeof(string), stdin);
  printf("Entered string: ");
  puts(string);

  printf("Enter the word that will be replaced: ");
  fgets(old, sizeof(old), stdin);
  printf("Entered string: ");
  puts(old);

  printf("Enter the word that will be replaced with: ");
  fgets(new, sizeof(new), stdin);
  printf("Entered string: ");
  puts(new);

  char *result = NULL;

  printf("Old sentence: %s\n", string);

  result = replaceWord(string, old, new);
  printf("New sentence: %s\n", result);

  free(result);
  return 0;
}