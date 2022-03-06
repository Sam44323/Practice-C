#include <stdio.h>
#define SIZE 100

int main()
{

  char string[20];
  printf("Enter your full-name \n");
  fgets(string, sizeof(string), stdin);
  puts(string);

  int i = 0, j = 0;

  while (string[i] != '\0')
  {

    if (string[i] == 32 && j < 1)
    {
      printf("%c.", string[i + 1]);
      j++;
    }

    else if (i == 0)
      printf("%c.", string[0]);

    else if (string[i] == 32)
    {
      while (string[i] != '\0')
      {
        printf("%c", string[i + 1]);
        i++;
      }
    }

    i++;
  }
}
