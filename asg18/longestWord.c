#include <stdio.h>

int string_length(char *s)
{
  int c = 0;
  while (*s != '\0')
  {
    c++;
    s++;
  }
  return c;
}

int main()
{
  int i, index = 0, max_value = 0;
  char max_word[100];

  char array[3][100];

  for (i = 0; i < 3; i++)
    scanf("%s", array[i]);

  printf("Original string orders: \n");
  for (i = 0; i < 3; i++)
    printf("%s\n", array[i]);

  for (i = 0; i < 3; i++)
  {
    if (string_length(array[i]) > max_value)
    {
      index = i;
      max_value = string_length(array[i]);
    }
  }
  printf("The longest word is %s\n", array[index]);
  return 0;
}