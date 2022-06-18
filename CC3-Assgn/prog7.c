#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct Node
{
  int data;
  struct Node *next;
};

void MoveNode(struct Node **destRef, struct Node **sourceRef);

struct Node *SortMergeLL(struct Node *a, struct Node *b)
{
  struct Node dummy;

  struct Node *tail = &dummy;

  dummy.next = NULL;
  while (1)
  {
    if (a == NULL)
    {
      tail->next = b;
      break;
    }
    else if (b == NULL)
    {
      tail->next = a;
      break;
    }
    if (a->data <= b->data)
      MoveNode(&(tail->next), &a);
    else
      MoveNode(&(tail->next), &b);

    tail = tail->next;
  }
  return (dummy.next);
}

void MoveNode(struct Node **destRef, struct Node **sourceRef)
{

  struct Node *newNode = *sourceRef;
  if (newNode != NULL)
  {

    *sourceRef = newNode->next;

    newNode->next = *destRef;

    *destRef = newNode;
  }
}

void push(struct Node **head_ref, int new_data)
{
  struct Node *new_node =
      (struct Node *)malloc(sizeof(struct Node));

  new_node->data = new_data;

  new_node->next = (*head_ref);

  (*head_ref) = new_node;
}

void display(struct Node *node)
{
  while (node != NULL)
  {
    printf("%d ", node->data);
    node = node->next;
  }
}

int main()
{
  struct Node *res = NULL, *a = NULL, *b = NULL;

  push(&a, 5);
  push(&a, 2);
  push(&a, 1);

  push(&b, 15);
  push(&b, 10);
  push(&b, 7);

  res = SortMergeLL(a, b);

  printf("Merged Linked List: \n");
  display(res);

  return 0;
}