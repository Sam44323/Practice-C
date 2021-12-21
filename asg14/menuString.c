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
  char str1[100], str2[100];
  int i = 0, count = 0;

  printf("\nEnter first strings :");
  gets(str1);
  printf("\nEnter second strings :");
  gets(str2);
  printf("\n");

  while (str1[i] == str2[i] && str1[i] != '\0')
  {
    i++;
    if (str1[i] > str2[i])
      count = 1;
    else if (str1[i] < str2[i])
      count = -1;
  }
  if (count == 0)
  {
    printf("Both strings are equal!");
  }
  else
  {
    printf("Not Equal!");
  }
}

void string_copy()
{
  char str1[100], str2[100];
  int i = 0;

  printf("\nEnter first strings :");
  gets(str1);
  printf("\nEnter second strings :");
  gets(str2);
  printf("\n");

  while (str1[i] != '\0')
  {
    str2[i] = str1[i];
    i++;
  }

  printf("Copied String:  %s \n\n", str1);
}

int main()
{
  int choice = 0;
  while (choice >= 0)
  {
    printf("1: Lowercase Conversion | 2. String Comparison | 3. String Copy \n");
    printf("Please enter your choice! \n");
    scanf("%d", &choice);

    fflush(stdin); // removing the buffer

    switch (choice)
    {
    case 1:
      lower();
      break;

    case 2:
      string_compare();
      break;

    case 3:
      string_copy();
      break;

    default:
      break;
    }
  }

  return 0;
}