#include <stdio.h>
#define MAX 100

int queue_array[MAX];
int rear = -1, front = -1;

void insert()
{
  int add_item;
  if (rear == MAX - 1)
    printf("Queue is full \n");
  else
  {
    if (front == -1)
      front = 0;
    printf("Inset the element in queue : ");
    scanf("%d", &add_item);
    rear = rear + 1;
    queue_array[rear] = add_item;
  }
}

void delete ()
{
  if (front == -1 || front > rear)
  {
    printf("Queue is empty \n");
    return;
  }
  else
  {
    printf("Deleted item : %d\n", queue_array[front]);
    front = front + 1;
  }
}

void display()
{
  int i;
  if (front == -1)
    printf("Queue is empty \n");
  else
  {
    printf("Queue is : \n");
    for (i = front; i <= rear; i++)
      printf("%d ", queue_array[i]);
    printf("\n");
  }
}

int main()
{
  int choice = 0;
  while (choice != 4)
  {
    printf("1 Insert | 2 Delete | 3 Display | 4 Quit \n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      insert();
      break;
    case 2:
      delete ();
      break;
    case 3:
      display();
      break;
    case 4:
      printf("Quit \n");
      exit(0);
      break;
    default:
      printf("Wrong choice \n");
    }
  }
}