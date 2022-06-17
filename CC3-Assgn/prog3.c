// implement stack in array

#include <stdio.h>
#define MAX_SIZE 100
int stack[MAX_SIZE], key = 0, n, pointer;

void init()
{
  if (pointer > -1)
  {
    for (int i = 0; i < pointer; i++)
      stack[i] = 0;
  }
  pointer = -1;
  printf("Stack initialized\n");
}

void isFull()
{
  if (pointer == MAX_SIZE - 1)
  {
    printf("Stack is full\n");
    return;
  }
}

int isEmpty()
{
  if (pointer == -1)
  {
    printf("Stack is empty\n");
    return 1;
  }
  return 0;
}

void push(int x)
{
  isFull();
  stack[++pointer] = x;
}

void pop()
{
  int empty = isEmpty();
  if (empty == 0)
  {
    printf("Popped: %d\n", stack[pointer--]);
  }
  printf("\n");
}

void display()
{
  if (pointer == -1)
  {
    printf("Stack is empty\n");
    return;
  }
  for (int i = 0; i <= pointer; i++)
  {
    printf("%d ", stack[i]);
  }
  printf("\n");
}

int main()
{
  while (key != -1)
  {
    printf("1 Initialize | 2 Is Full | 3 Is Empty | 4 Push | 5 Pop | 6 Display\n");
    printf("Enter your choice: ");
    scanf("%d", &key);

    switch (key)
    {
    case 1:
      init();
      break;
    case 2:
      isFull();
      break;
    case 3:
      isEmpty();
      break;
    case 4:
      printf("Enter the number to push: ");
      scanf("%d", &n);
      push(n);
      break;
    case 5:
      pop();
      break;
    case 6:
      display();
      break;
    case -1:
      break;
    default:
      printf("Invalid choice\n");
    }
  }
  return 0;
}