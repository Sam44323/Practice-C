#include <stdio.h>
#include <string.h>

void lower()
{
  char str[50];
  printf("Enter a sentence: \n");
  scanf("%[^\n]", str);

  int i = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
      str[i] += 32;
    i++;
  }
  printf("Converted string is:%s \n", str);
}

void string_compare()
{
  char str1[50], str2[50];
  int i = 0;
}

int main()
{
  int choice = 0;
  while (choice >= 0)
  {
    printf("1: Lowercase Conversion | 2. String Comparison | 3. String Copy \n");
    printf("Please enter your choice! \n");
    scanf("%d", &choice);

    fflush(stdin);

    switch (choice)
    {
    case 1:
      lower();
      break;

    case 2:
      string_compare();
      break;

    default:
      break;
    }
  }

  return 0;
}