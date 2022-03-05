#include <stdio.h>
#define STRUCT_SIZE 100
#define NAME_SIZE 100

struct student
{
  char firstName[NAME_SIZE];
  int roll;
  float marks;
} s[STRUCT_SIZE];

void highestScorer(struct student *list, int length)
{
  int i, max = 0;
  for (i = 0; i < length; i++)
  {
    if (list[i].marks > list[max].marks)
    {
      max = i;
    }
  }
  printf("%s %d %f\n", list[max].firstName, list[max].roll, list[max].marks);
}

int main()
{
  int i, n = 0;
  printf("Enter the list-length: \n");
  scanf("%d \n", &n);
  if (n >= STRUCT_SIZE)
  {
    printf("List-length is too large.\n");
    return 0;
  }

  printf("Enter information of students:\n");
  for (i = 0; i < n; ++i)
  {
    printf("Enter first name: \n");
    scanf("%s \n", s[i].firstName);
    printf("Enter roll number: \n");
    scanf("%d \n", &s[i].roll);
    printf("Enter marks: \n");
    scanf("%f \n", &s[i].marks);
  }

  highestScorer(s, n);

  return 0;
}
