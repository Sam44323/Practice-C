#include <stdio.h>
#include <stdlib.h>

struct node
{
  int key;
  struct node *left;
  struct node *right;
};

struct node *getNode(int val)
{
  struct node *newNode;

  newNode = malloc(sizeof(struct node));

  newNode->key = val;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}

struct node *insertNode(struct node *root, int val)
{
  if (root == NULL)
    return getNode(val);

  if (root->key < val)
    root->right = insertNode(root->right, val);

  if (root->key > val)
    root->left = insertNode(root->left, val);

  return root;
}

void inorder(struct node *root)
{
  if (root == NULL)
    return;

  inorder(root->left);

  printf("%d ", root->key);

  inorder(root->right);
}

void preorder(struct node *root)
{
  if (root == NULL)
    return;

  printf("%d ", root->key);

  preorder(root->left);

  preorder(root->right);
}

void postorder(struct node *root)
{
  if (root == NULL)
    return;

  postorder(root->left);

  postorder(root->right);

  printf("%d ", root->key);
}

int main()
{
  struct node *root = NULL;

  int data, choice = 0;
  while (choice != 5)
  {
    printf("\n 1 Insert | 2 Inorder | 3 Preorder | 4 Postorder | 5 Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("\nEnter the value to be inserted\n");
      scanf("%d", &data);
      root = insertNode(root, data);
      break;
    case 2:
      printf("\n Inorder Traversal of the Binary Tree:\n");
      inorder(root);
      break;
    case 3:
      printf("\n Preorder Traversal of the Binary Tree:\n");
      preorder(root);
      break;
    case 4:
      printf("\n Postorder Traversal of the Binary Tree:\n");
      postorder(root);
      break;
    default:
      printf("\n Wrong Entry\n");
      break;
    }
  }

  return 0;
}