#include <stdlib.h>
#include <stdio.h>

struct node
{
  int info;
  struct node *next;
};
struct node *start = NULL;

void create()
{
  struct node *temp, *ptr;
  temp = (struct node *)malloc(sizeof(struct node));
  if (temp == NULL)
  {
    printf("nOut of Memory Space:n");
    exit(0);
  }
  printf("Enter the data value for the node: \t");
  scanf("%d", &temp->info);
  temp->next = NULL;
  if (start == NULL)
  {
    start = temp;
  }
  else
  {
    ptr = start;
    while (ptr->next != NULL)
    {
      ptr = ptr->next;
    }
    ptr->next = temp;
  }
}
void display()
{
  struct node *ptr;
  if (start == NULL)
  {
    printf("List is empty: \n");
    return;
  }
  else
  {
    ptr = start;
    printf("The List elements are: \n");
    while (ptr != NULL)
    {
      printf("%d \t", ptr->info);
      ptr = ptr->next;
    }
  }
}

void insert_pos()
{
  struct node *ptr, *temp;
  int i, pos;
  temp = (struct node *)malloc(sizeof(struct node));
  if (temp == NULL)
  {
    printf("Out of Memory Space: \n");
    return;
  }
  printf("Enter the position for the new node to be inserted: \n");
  scanf("%d", &pos);
  printf("Enter the data value of the node: \n");
  scanf("%d", &temp->info);

  temp->next = NULL;
  if (pos == 0)
  {
    temp->next = start;
    start = temp;
  }
  else
  {
    for (i = 0, ptr = start; i < pos - 1; i++)
    {
      ptr = ptr->next;
      if (ptr == NULL)
      {
        printf("Position not found\n");
        return;
      }
    }
    temp->next = ptr->next;
    ptr->next = temp;
  }
}

void delete_pos()
{
  int i, pos;
  struct node *temp, *ptr;
  if (start == NULL)
  {
    printf("The List is Empty \n");
    exit(0);
  }
  else
  {
    printf("Enter the position of the node to be deleted \n");
    scanf("%d", &pos);
    if (pos == 0)
    {
      ptr = start;
      start = start->next;
      printf("The deleted element is:%d \n", ptr->info);
      free(ptr);
    }
    else
    {
      ptr = start;
      for (i = 0; i < pos; i++)
      {
        temp = ptr;
        ptr = ptr->next;
        if (ptr == NULL)
        {
          printf("Position not Found\n");
          return;
        }
      }
      temp->next = ptr->next;
      printf("The deleted element is:%d \n", ptr->info);
      free(ptr);
    }
  }
}

void reverse_list()
{
  struct node *ptr, *prev, *next;
  ptr = start;
  prev = NULL;
  while (ptr != NULL)
  {
    next = ptr->next;
    ptr->next = prev;
    prev = ptr;
    ptr = next;
  }
  start = prev;
}

void search_list()
{
  int i, pos, flag = 0;
  struct node *ptr;
  printf("Enter the data value to be searched \n");
  scanf("%d", &pos);
  ptr = start;
  for (i = 0; ptr != NULL; i++)
  {
    if (ptr->info == pos)
    {
      printf("The position of the element is:%d \n", i);
      flag = 1;
      break;
    }
    ptr = ptr->next;
  }
  if (flag == 0)
  {
    printf("Element not found \n");
  }
}

int main()
{
  int choice;
  while (1)
  {

    printf("1 Create | 2 Display | 3 Search | 4 Insert | 5 Delete | 6 Reverse | 7 Exit \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      create();
      break;
    case 2:
      display();
      break;
    case 3:
      search_list();
      break;
    case 4:
      insert_pos();
      break;
    case 5:
      delete_pos();
      break;
    case 6:
      reverse_list();
      break;
    case 7:
      exit(0);
      break;

    default:
      printf("n Wrong Choice:n");
      break;
    }
  }
  return 0;
}