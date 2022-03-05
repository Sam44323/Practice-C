#include <stdio.h>
#define SIZE 100

void addressPrint(char *string[SIZE])
{
  int i = 0;
  while (string[i] != NULL)
  {
    printf("Address of %c: %p\n", string[i], &string[i]);
    i++;
  }
}

void length(char *string[SIZE]) {}

void caseConversion(char *string[SIZE]) {}

void reversing(char *string[SIZE]) {}

void compare(char *string[SIZE]) {}

void stringCopy(char *string[SIZE]) {}

void wordCount(char *string[SIZE]) {}

void vowelCount(char *string[SIZE]) {}

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