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

void compare(char *string) {}

void stringCopy(char *string) {}

void wordCount(char *string) {}

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