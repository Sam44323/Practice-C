#include <stdio.h>

void lineCalculator()
{
  FILE *fptr;
  int lines = 0;
  char filechar[40], c;

  printf("Enter file name: ");
  scanf("%s", filechar);
  fptr = fopen(filechar, "r");

  c = getc(fptr);
  while (c != EOF)
  {

    if (c == 'n')
    {
      lines = lines + 1;
    }

    c = getc(fptr);
  }
  fclose(fptr);
  printf("There are %d lines in total\n", lines);
  return 0;
}

void wordCalculator()
{
  FILE *fptr;
  int count = 0;
  char filechar[40], ch;

  printf("Enter file name: ");
  scanf("%s", filechar);
  fptr = fopen(filechar, "r");

  while ((ch = fgetc(fptr)) != EOF)
  {
    if (ch == ' ' || ch == '\n')
      count++;
  }

  printf("Number of words present in given file: %d", count);
  fclose(fptr);
}

void charCalculator()
{
  FILE *fptr;
  int count = 0;
  char filechar[40], ch;

  printf("Enter file name: ");
  scanf("%s", filechar);
  fptr = fopen(filechar, "r");

  while ((ch = fgetc(fptr)) != EOF)
  {
    count++;
    printf("%c", ch);
  }
  fclose(fptr);
  printf("\nThe number of characters present in file is: %d", count);
}

int main()
{
  char choice = 'l';

  while (choice != 'q')
  {
    printf("Enter your choice:\n");
    printf("l - line calculator\n");
    printf("w - word calculator\n");
    printf("c - char calculator\n");
    printf("q - quit\n");
    scanf("%c", &choice);
    switch (choice)
    {
    case 'l':
      lineCalculator();
      break;
    case 'w':
      wordCalculator();
      break;
    case 'c':
      charCalculator();
      break;
    case 'q':
      break;
    default:
      lineCalculator();
      wordCalculator();
      charCalculator();
      break;
    }
  }
  return 0;
}