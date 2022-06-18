#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *prev, *next;
};

struct node *head = NULL, *tail = NULL;

struct node *createNode(int data)
{
  struct node *newNode = (struct node *)malloc(sizeof(struct node));
  newNode->data = data;
  newNode->next = newNode->prev = NULL;
  return (newNode);
}

void instantiation()
{
  head = createNode(0);
  tail = createNode(0);
  head->next = tail;
  tail->prev = head;
}

/* insertion at the front of the queue */
void enqueueAtFront(int data)
{
  struct node *newNode, *temp;
  newNode = createNode(data);
  temp = head->next;
  head->next = newNode;
  newNode->prev = head;
  newNode->next = temp;
  temp->prev = newNode;
}

void enqueueAtRear(int data)
{
  struct node *newNode, *temp;
  newNode = createNode(data);
  temp = tail->prev;
  tail->prev = newNode;
  newNode->next = tail;
  newNode->prev = temp;
  temp->next = newNode;
}

void dequeueAtFront()
{
  struct node *temp;
  if (head->next == tail)
  {
    printf("Queue is empty\n");
  }
  else
  {
    temp = head->next;
    head->next = temp->next;
    temp->next->prev = head;
    free(temp);
  }
  return;
}

void dequeueAtRear()
{
  struct node *temp;
  if (tail->prev == head)
  {
    printf("Queue is empty\n");
  }
  else
  {
    temp = tail->prev;
    tail->prev = temp->prev;
    temp->prev->next = tail;
    free(temp);
  }
  return;
}

void display()
{
  struct node *temp;

  if (head->next == tail)
  {
    printf("Queue is empty\n");
    return;
  }

  temp = head->next;
  while (temp != tail)
  {
    printf("%-3d", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main()
{
  int data, choice = 0;
  instantiation();
  while (choice != 6)
  {
    printf("\n1. Enqueue at front | 2. Enqueue at rear | 3. Dequeue at front | 4. Dequeue at rear | 5. Display | 6. Exit\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("Enter the data for insertion:");
      scanf("%d", &data);
      enqueueAtFront(data);
      break;

    case 2:
      printf("Enter the data for insertion:");
      scanf("%d", &data);
      enqueueAtRear(data);
      break;

    case 3:
      dequeueAtFront();
      break;

    case 4:
      dequeueAtRear();
      break;

    case 5:
      display();
      break;

    case 6:
      exit(0);

    default:
      printf("Wrong choice\n");
      break;
    }
  }
  return 0;
}
