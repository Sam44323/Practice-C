#include <stdio.h>
#include <stdlib.h>

struct node
{
  struct node *link;
  int expo;
  float coef;
};

struct node *create(struct node *);
struct node *insert_data(struct node *, float, int);
struct node *insert(struct node *, float, int);

struct node *create(struct node *start)
{
  int i, n, ex;
  float co;
  printf("Enter the number of terms : ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    printf("Enter coeficient for term %d : ", i);
    scanf("%f", &co);
    printf("Enter exponent for term %d : ", i);
    scanf("%d", &ex);
    start = insert_data(start, co, ex);
  }
  return start;
}
struct node *insert_data(struct node *start, float co, int ex)
{
  struct node *ptr, *tmp;
  tmp = (struct node *)malloc(sizeof(struct node));
  tmp->coef = co;
  tmp->expo = ex;

  if (start == NULL || ex > start->expo)
  {
    tmp->link = start;
    start = tmp;
  }
  else
  {
    ptr = start;
    while (ptr->link != NULL && ptr->link->expo >= ex)
      ptr = ptr->link;
    tmp->link = ptr->link;
    ptr->link = tmp;
  }
  return start;
}

struct node *insert(struct node *start, float co, int ex)
{
  struct node *ptr, *tmp;
  tmp = (struct node *)malloc(sizeof(struct node));
  tmp->coef = co;
  tmp->expo = ex;

  if (start == NULL)
  {
    tmp->link = start;
    start = tmp;
  }
  else
  {
    ptr = start;
    while (ptr->link != NULL)
      ptr = ptr->link;
    tmp->link = ptr->link;
    ptr->link = tmp;
  }
  return start;
}

void display(struct node *ptr)
{
  if (ptr == NULL)
  {
    printf("Zero polynomial\n");
    return;
  }
  while (ptr != NULL)
  {
    printf("\t %.1fx^%d \t", ptr->coef, ptr->expo);
    ptr = ptr->link;
    if (ptr != NULL)
      printf(" + ");
    else
      printf("\n");
  }
}
void addition(struct node *p1, struct node *p2)
{
  struct node *start3;
  start3 = NULL;

  while (p1 != NULL && p2 != NULL)
  {
    if (p1->expo > p2->expo)
    {
      start3 = insert(start3, p1->coef, p1->expo);
      p1 = p1->link;
    }
    else if (p2->expo > p1->expo)
    {
      start3 = insert(start3, p2->coef, p2->expo);
      p2 = p2->link;
    }
    else if (p1->expo == p2->expo)
    {
      start3 = insert(start3, p1->coef + p2->coef, p1->expo);
      p1 = p1->link;
      p2 = p2->link;
    }
  }
  while (p1 != NULL)
  {
    start3 = insert(start3, p1->coef, p1->expo);
    p1 = p1->link;
  }
  while (p2 != NULL)
  {
    start3 = insert(start3, p2->coef, p2->expo);
    p2 = p2->link;
  }
  printf("Added polynomial is : ");
  display(start3);
}

void multiplication(struct node *p1, struct node *p2)
{
  struct node *start3;
  struct node *p2_beg = p2;
  start3 = NULL;
  if (p1 == NULL || p2 == NULL)
  {
    printf("Multiplied polynomial is zero\n");
    return;
  }
  while (p1 != NULL)
  {
    p2 = p2_beg;
    while (p2 != NULL)
    {
      start3 = insert_data(start3, p1->coef * p2->coef, p1->expo + p2->expo);
      p2 = p2->link;
    }
    p1 = p1->link;
  }
  printf("Multiplied polynomial is : ");
  display(start3);
}

int main()
{
  struct node *start1 = NULL, *start2 = NULL;
  int choice = 0;

  while (choice != 3)
  {
    printf("\nEnter your choice :\n");
    printf("1. Addition\n");
    printf("2. Multiplication\n");
    printf("3. Exit\n");
    scanf("%d", &choice);
    printf("Enter polynomial 1 :\n");
    start1 = create(start1);

    printf("Enter polynomial 2 :\n");
    start2 = create(start2);

    printf("Polynomial 1 is :  ");
    display(start1);
    printf("Polynomial 2 is :  ");
    display(start2);
    switch (choice)
    {
    case 1:
      addition(start1, start2);
      break;
    case 2:
      multiplication(start1, start2);
      break;
    case 3:
      break;
    default:
      printf("Invalid choice\n");
    }
  }
}
