#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};
struct Node *top = NULL;

void push(int value)
{
  struct Node *newNode;
  newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = value;
  if (top == NULL)
  {
    newNode->next = NULL;
  }
  else
  {
    newNode->next = top;
  }
  top = newNode;
  printf("Inserted...\n\n");
}

int pop()
{
  if (top == NULL)
  {
    printf("\n Stack is empty...\n");
  }
  else
  {
    struct Node *temp = top;
    int temp_data = top->data;
    top = top->next;
    free(temp);
    return temp_data;
  }
  return 0;
}

void display()
{

  if (top == NULL)
  {
    printf("\nStack is empty...\n");
  }
  else
  {
    printf("Stack \n");
    struct Node *temp = top;
    while (temp->next != NULL)
    {
      printf("%d->", temp->data);
      temp = temp->next;
    }
    printf("%d->NULL\n\n", temp->data);
  }
}

int main()
{
  int choice = 0, value;
  while (choice != 4)
  {
    printf("1. Push | 2. Pop | 3. Display | 4. Exit\n");
    printf("\nEnter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("\nEnter the value to insert: ");
      scanf("%d", &value);
      push(value);
      break;
    case 2:
      printf("Popped data :%d\n", pop());
      break;
    case 3:
      display();
      break;
    case 4:
      exit(0);
      break;
    default:
      printf("\nWrong Choice\n");
    }
  }
}