
#include <stdio.h>

int main()
{
  int six, sev, n = 0, i;
  printf("Enter the value to print: \n");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
      sev += 7;
    else
      six += 6;
  }
  if (n % 2 == 0)
  {
    printf("%dth term is %d", n, (six - 6));
  }
  else
  {
    printf("%dth term is %d", n, (sev - 7));
  }
  return 0;
}