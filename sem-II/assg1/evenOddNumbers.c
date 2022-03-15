
#include <stdio.h>
int main()
{

  int array[100], i, num, oddSum = 0, evenSum = 0;
  printf("Enter the size of an array \n");

  scanf("%d", &num);
  printf("Enter the elements of the array \n");

  for (i = 0; i < num; i++)
  {
    scanf("%d", &array[i]);
  }

  for (i = 0; i < num; i++)
  {
    if (array[i] % 2 == 0)
    {
      evenSum = evenSum + array[i];
    }
    else
    {
      oddSum = oddSum + array[i];
    }
  }

  printf("The sum of odd numbers is %d \n", oddSum);
  printf("The sum of even numbers is %d \n", evenSum);

  return 0;
}