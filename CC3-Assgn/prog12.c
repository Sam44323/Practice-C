#include <stdio.h>
#include <stdlib.h>

struct node
{
  int key;
  struct node *left, *right;
};

struct node *newNode(int item)
{
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

struct node *insert_recursive(struct node *node, int value)
{
  if (node == NULL)
  {
    return newNode(value);
  }
  if (value < node->key)
  {
    node->left = insert(node->left, value);
  }
  else if (value > node->key)
  {
    node->right = insert(node->right, value);
  }
  return node;
}

struct node *insert_iterative(struct node *node, int value)
{
  struct node *temp = node;
  struct node *new_node = newNode(value);
  while (temp)
  {
    if (value < temp->key)
    {
      if (temp->left == NULL)
      {
        temp->left = new_node;
        break;
      }
      temp = temp->left;
    }
    else if (value > temp->key)
    {
      if (temp->right == NULL)
      {
        temp->right = new_node;
        break;
      }
      temp = temp->right;
    }
  }
  return node;
}

struct node *delete_by_copy(struct node *node, int value)
{
  if (node == NULL)
  {
    return NULL;
  }
  if (value < node->key)
  {
    node->left = delete_by_copy(node->left, value);
  }
  else if (value > node->key)
  {
    node->right = delete_by_copy(node->right, value);
  }
  else
  {
    if (node->left == NULL)
    {
      struct node *temp = node->right;
      free(node);
      return temp;
    }
    else if (node->right == NULL)
    {
      struct node *temp = node->left;
      free(node);
      return temp;
    }
    else
    {
      struct node *temp = node->right;
      while (temp->left)
      {
        temp = temp->left;
      }
      temp->left = node->left;
      free(node);
      return node->right;
    }
  }
  return node;
}

struct node *delete_by_merging(struct node *node, int value)
{
  if (node == NULL)
  {
    return NULL;
  }
  if (value < node->key)
  {
    node->left = delete_by_merging(node->left, value);
  }
  else if (value > node->key)
  {
    node->right = delete_by_merging(node->right, value);
  }
  else
  {
    if (node->left == NULL)
    {
      struct node *temp = node->right;
      free(node);
      return temp;
    }
    else if (node->right == NULL)
    {
      struct node *temp = node->left;
      free(node);
      return temp;
    }
    else
    {
      struct node *temp = node->right;
      while (temp->left)
      {
        temp = temp->left;
      }
      temp->left = node->left;
      free(node);
      return node->right;
    }
  }
  return node;
}

void search_number(struct node *node, int value)
{
  if (node == NULL)
  {
    printf("Number not found\n");
    return;
  }
  if (value < node->key)
  {
    search_number(node->left, value);
  }
  else if (value > node->key)
  {
    search_number(node->right, value);
  }
  else
  {
    printf("Number found\n");
  }
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

void display_level_by_level_traversals(struct node *node)
{
  if (node == NULL)
  {
    return;
  }
  int h = height(node);
  int i;
  for (i = 1; i <= h; i++)
  {
    display_level(node, i);
    printf("\n");
  }
}

int height(struct node *node)
{
  if (node == NULL)
  {
    return 0;
  }
  else
  {
    int lheight = height(node->left);
    int rheight = height(node->right);
    if (lheight > rheight)
    {
      return lheight + 1;
    }
    else
    {
      return rheight + 1;
    }
  }
}

void display_tree_height(struct node *node)
{
  if (node == NULL)
  {
    return;
  }
  int h = height(node);
  printf("Height of tree is %d\n", h);
}

int main()
{
  int choice = 0, value;
  printf("Enter the initial value: \n");
  scanf("%d", &value);
  struct node *node = newNode(value);

  while (1)
  {
    printf("\n1. Insert | 2. Delete | 3. Search | 4. Display | 5. Display Level by Level Traversals | 6. Display Height | 7. Exit\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("Enter the value to be inserted: \n");
      scanf("%d", &value);
      node = insert_recursive(node, value);
      break;
    case 2:
      printf("Enter the value to be deleted: \n");
      scanf("%d", &value);
      node = delete_by_copy(node, value);
      break;
    case 3:
      printf("Enter the value to be searched: \n");
      scanf("%d", &value);
      search_number(node, value);
      break;
    case 4:
      printf("\nInorder Traversal: \n");
      inorder(node);
      printf("\nPreorder Traversal: \n");
      preorder(node);
      printf("\nPostorder Traversal: \n");
      postorder(node);
      break;
    case 5:
      display_level_by_level_traversals(node);
      break;
    case 6:
      display_tree_height(node);
      break;
    case 7:
      exit(0);
    default:
      printf("Invalid choice\n");
    }
  }
  return 0;
}