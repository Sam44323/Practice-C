#include <stdio.h>

int main()
{
  int num; //Declare the nummber
  printf("Enter the number\n");
  scanf("%d", &num); //Enter the value from the user

  int count = 0; //Declare a count variable

  for (int i = 2; i < num / 2; i++)
  {
    if (num % i == 0)
      count++;
  }
  if (count != 0)
  {
    printf("Not a prime number\n");
  }
  else
  {
    printf("Prime number\n");
  }

  return 0;
}
