#include <stdio.h>

void dec_to_bin()
{
  int n;
  long long bin = 0;
  int rem, i = 1;
  printf("Enter a decimal number! \n");
  scanf("%d", &n);

  while (n != 0)
  {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  printf("Binary equivalent %d", bin);
}

void bin_to_dec()
{
  long long n;
  printf("Enter a binary number: ");
  scanf("%lld", &n);
  int dec = 0, i = 0, rem;

  while (n != 0)
  {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }
}

int main()
{
  int choice = 1;

  while (choice > 0)
  {
    printf("0. Exit | 1. Decimal to binary | 2. Binary to decimal \n");
    printf("Enter your choice! \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      dec_to_bin();
      break;

    case 2:
      bin_to_dec();
      break;

    default:
      printf("Invalid choice!");
      break;
    }
  }
  return 0;
}