
#include <stdio.h>
#include <math.h>
int main()
{
  int n, r, sum = 0, temp, power, c;
  printf("Enter a number: \n");
  scanf("%d", &n);
  temp = n;
  power = n;

  while (power > 0)
  {
    c++;
    power = power / 10;
  }

  while (n > 0)
  {
    r = n % 10;
    sum = sum + pow(r, power);
    n = n / 10;
  }
  if (temp == sum)
    printf("%d is an armstrong number", temp);
  else
    printf("%d is not an armstrong number", temp);
  return 0;
}