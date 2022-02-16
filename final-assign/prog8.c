#include <stdio.h>
#include <string.h>
#define LIMIT 8

void bitwise_palindrome(int n)
{
  int c[LIMIT] = {0};
  int i = LIMIT - 1;
  while (n != 0)
  {
    c[i--] = n & 1;
    n = n >> 1;
  }

  for (int j = 0, k = LIMIT - 1; j < k; j++, k--)
  {
    if (c[j] != c[k])
    {
      printf("Not palindrome\n");
      return 0;
    }
  }

  printf("Palindrome\n");
}

void bitwise_printing(int n)
{
  int c[LIMIT] = {0};
  int i = LIMIT - 1;
  printf("Binary representation: ");
  while (n != 0)
  {
    c[i--] = n & 1;
    n = n >> 1;
  }
  for (int j = 0; j < LIMIT; j++)
    printf("%d", c[j]);
  printf("\n");
}

int main()
{
  int choice = 0;
  int number = 0;
  while (choice >= 0)
  {
    printf("1. Bitwise Palindrome | 2. Bits Printing \n");
    printf("Enter your choice! \n");
    scanf("%d", &choice);

    printf("Enter the number! \n");
    scanf("%d", &number);

    switch (choice)
    {
    case 1:
      bitwise_palindrome(number);
      break;

    case 2:
      bitwise_printing(number);
      break;

    default:
      printf("Invalid Choice! \n");
      break;
    }
  }
  return 0;
}