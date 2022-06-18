#include <stdio.h>
#include <stdlib.h>

struct node
{
  int info;
  struct node *next;
};

struct node *last = NULL;

void insertAtFront()
{
  int data;

  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));

  printf("Enter data to be \n");
  scanf("%d", &data);

  if (last == NULL)
  {
    temp->info = data;
    temp->next = temp;
    last = temp;
  }
  else
  {
    temp->info = data;
    temp->next = last->next;

    last->next = temp;
  }
}

void insertAtEnd()
{
  int data;

  struct node *temp;
  temp = (struct node *)malloc(sizeof(struct node));

  printf("Enter data for insertion\n");
  scanf("%d", &data);

  if (last == NULL)
  {
    temp->info = data;
    temp->next = temp;
    last = temp;
  }

  else
  {
    temp->info = data;
    temp->next = last->next;
    last->next = temp;
    last = temp;
  }
}

void insertPosition()
{
  int data, value;

  struct node *temp, *n;

  printf("\nEnter number after which you want to enter number: \n");
  scanf("%d", &value);
  temp = last->next;

  do
  {

    if (temp->info == value)
    {
      n = (struct node *)malloc(sizeof(struct node));

      printf("Enter data to be inserted \n");
      scanf("%d", &data);
      n->info = data;
      n->next = temp->next;
      temp->next = n;

      if (temp == last)
        last = n;
      break;
    }
    else
      temp = temp->next;
  } while (temp != last->next);
}

void deleteFirst()
{
  struct node *temp;

  if (last == NULL)
    printf("\nList is empty.\n");

  else
  {
    temp = last->next;
    last->next = temp->next;
    free(temp);
  }
}

void deleteEnd()
{
  struct node *temp;

  if (last == NULL)
    printf("\nList is empty.\n");

  temp = last->next;

  while (temp->next != last)
    temp = temp->next;

  temp->next = last->next;
  last = temp;
}

void deleteAtPosition()
{
  int pos, i = 1;
  struct node *temp, *position;
  temp = last->next;

  if (last == NULL)
    printf("\nList is empty.\n");

  else
  {

    printf("\nEnter index : ");
    scanf("%d", &pos);

    while (i <= pos - 1)
    {
      temp = temp->next;
      i++;
    }

    position = temp->next;
    temp->next = position->next;

    free(position);
  }
}

void viewList()
{
  if (last == NULL)
    printf("\nList is empty\n");

  else
  {
    struct node *temp;
    temp = last->next;
    do
    {
      printf("%d \n", temp->info);
      temp = temp->next;
    } while (temp != last->next);
  }
}

int main()
{
  int choice = 0;
  while (choice != -1)
  {
    printf("1 Insert First | 2 Insert End | 3 Insert Position | 4 Delete First | 5 Delete End | 6 Delete Position | 7 View List | 8 Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      insertAtFront();
      break;
    case 2:
      insertAtEnd();
      break;
    case 3:
      insertPosition();
      break;
    case 4:
      deleteFirst();
      break;
    case 5:
      deleteEnd();
      break;
    case 6:
      deleteAtPosition();
      break;
    case 7:
      viewList();
      break;
    case 8:
      printf("\nExiting...\n");
      break;
    default:
      printf("\nInvalid choice.\n");
    }
  }
}