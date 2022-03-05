#include <stdio.h>
#define SIZE 100

int main()

{

  char str[SIZE];
  int i = 0, j = 0, len = 0;

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  printf("Entered string: ");
  puts(str);

  len = strlen(str);

  for (i = 0; i <= 13; i++)
  {
    if (str[i] == ' ')
    {
      for (j = i; j < len; j++)
      {
        putchar(str[j]);
      }
    }
    i++;
  }

  return 0;
}