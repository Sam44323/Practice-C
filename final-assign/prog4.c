#include <stdio.h>

int main()
{
  int number, temp, digital = 0;
  printf("Enter a positive number: \n");
  scanf("%u", &number);
  temp = number;
  while (temp != 0)
  {
    int c = temp % 10;
    digital += c;
    temp /= 10;
    if (temp == 0 && digital > 9)
    {
      temp = digital;
      digital = 0;
    }
  }
  printf("The digital root of %i is %i\n", number, digital);
  return 0;
}