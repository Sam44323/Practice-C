#include <stdio.h>
#define SIZE 100

void addressPrint(char *string)
{
  int i = 0;
  while (string[i] != NULL)
  {
    printf("Address of %c: %p\n", string[i], &string[i]);
    i++;
  }
}

void length(char *string)
{
  int i = 0;
  while (string[i] != NULL)
  {
    i++;
  }
  printf("Length of string: %d\n", i);
}

void caseConversion(char *string)
{
  int i = 0;
  while (string[i] != NULL)
  {
    if (string[i] >= 65 && string[i] <= 90)
      string[i] = string[i] + 32;
    i++;
  }

  printf("Case conversed string: %s", string);
}

void reversing(char *string)
{
  int i, len, temp;
  while (string[len] != NULL)
  {
    len++;
  }
  for (i = 0; i < len / 2; i++)
  {
    temp = string[i];
    string[i] = string[len - i - 1];
    string[len - i - 1] = temp;
  }

  printf("Reversed string: %s", string);
}

void compare(char *string)
{
  char secondString[SIZE];
  printf("Enter a string to compare: ");
  scanf("%s \n", secondString);

  int counter = 0, i = 0;
  while (string[i] != '\0' && secondString[i] != '\0')
  {
    if (string[i] != secondString[i])
    {
      counter = 1;
      break;
    }
    i++;
  }

  if (counter == 0)
    printf("Strings are equal\n");
  else
    printf("Strings are not equal\n");
}

void stringCopy(char *string)
{
  char copiedString[SIZE];
  int i = 0;

  for (i = 0; string[i] != '\0'; ++i)
  {
    copiedString[i] = string[i];
  }
  copiedString[i] = '\0';
  printf("Copied String: %s", copiedString);
  return 0;
}

void wordCount(char *string)
{
  int wordCount = 0, i = 0;
  for (i = 0; string[i] != '\0'; i++)
  {
    if (string[i] == ' ' && string[i + 1] != ' ')
      wordCount++;
  }

  printf("Word-count for the given string: %d \n", wordCount);
}

void vowelCount(char *string) {}

int main()
{
  int choice = 0;
  char word[SIZE];

  while (choice >= 0)
  {
    printf("Enter the word ");
    fgets(word, sizeof(word), stdin);
    printf("Entered string: ");
    puts(word);
    printf("\n 1: Address of characters | 2: String length | 3: Uppercase to lowercase | 4: Reverse | 5: String Compare | 6: String Copy | 7: Word Count | 8: Vowel Count | -1: Exit \n");
    printf("Enter your choice \n");
    scanf("%d \n", &choice);

    switch (choice)
    {
    case 1:
      addressPrint(word);
      break;
    case 2:
      length(word);
      break;
    case 3:
      caseConversion(word);
      break;
    case 4:
      reversing(word);
      break;
    case 5:
      compare(word);
      break;
    case 6:
      stringCopy(word);
      break;
    case 7:
      wordCount(word);
      break;
    case 8:
      vowelCount(word);
      break;
    case -1:
      printf("Exiting \n");
      break;
    default:
      printf("Invalid choice \n");
      break;
    }
  }

  return 0;
}