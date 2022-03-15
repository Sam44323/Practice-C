
#include <stdio.h>

int main()
{
  int i, j, num, prime_counter;

  printf("Enter a number to print Prime factors: ");
  scanf("%d", &num);

  printf("All Prime Factors of %d are: \n", num);

  for (i = 1; i <= num; i++)
  {
    if (num % i == 0)
    {
      prime_counter = 1;
      for (j = 2; j <= i / 2; j++)
      {
        if (i % j == 0)
        {
          prime_counter = 0;
          break;
        }
      }

      if (prime_counter == 1)
      {
        printf("%d, ", i);
      }
    }
  }

  return 0;
}