#include <stdio.h>
#include <string.h>

int main()
{
  int i, counter = 0;
  char searchedValue[100];

  char country[3][100];
  char capital[3][100];

  for (i = 0; i < 3; i++)
  {
    printf("Enter the country:\n");
    scanf("%s", country[i]);
    printf("Enter the capital:\n");
    scanf("%s", capital[i]);
  }

  for (i = 0; i < 3; i++)
  {
    printf("Country: ");
    printf("%s \n", country[i]);
    printf("Capital: ");
    printf("%s \n", capital[i]);
  }

  printf("Enter your country: \n");
  scanf("%s", searchedValue);

  for (i = 0; i < 3; i++)
  {
    // printf("%d \n", strcmp(country[i], searchedValue));
    if (strcmp(country[i], searchedValue) == 0)
    {
      printf("%s", capital[i]);
      counter++;
    }
  }
  if (counter == 0)
    printf("Country not found!");

  return 0;
}