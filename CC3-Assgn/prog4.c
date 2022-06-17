#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100

char stack[MAX];
int top = -1;

void initialize()
{
  if (top > -1)
  {
    for (int i = 0; i < top; i++)
    {
      stack[i] = '\0';
    }
  }
}

int isEmpty()
{
  return top == -1;
}
int isFull()
{
  return top == MAX - 1;
}

char peek()
{
  return stack[top];
}

char pop()
{
  if (isEmpty())
    return -1;

  char ch = stack[top];
  top--;
  return (ch);
}

void push(char oper)
{
  if (isFull())
    printf("Stack is full!");

  else
  {
    top++;
    stack[top] = oper;
  }
}

int checkIfOperand(char ch)
{
  return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int precedence(char ch)
{
  switch (ch)
  {
  case '+':
  case '-':
    return 1;

  case '*':
  case '/':
    return 2;

  case '^':
    return 3;
  }
  return -1;
}

int infix_to_postfix(char *expression)
{
  int i, j;

  for (i = 0, j = -1; expression[i]; ++i)
  {
    if (checkIfOperand(expression[i]))
      expression[++j] = expression[i];

    else if (expression[i] == '(')
      push(expression[i]);

    else if (expression[i] == ')')
    {
      while (!isEmpty() && peek() != '(')
        expression[++j] = pop();
      if (!isEmpty() && peek() != '(')
        return -1;
      else
        pop();
    }
    else
    {
      while (!isEmpty() && precedence(expression[i]) <= precedence(peek()))
        expression[++j] = pop();
      push(expression[i]);
    }
  }

  while (!isEmpty())
    expression[++j] = pop();

  expression[++j] = '\0';
  printf("%s", expression);
  return 0;
}

void prefix_evaluation(char *expression)
{
  int n1, n2, n3, num, len;
  len = strlen(expression) - 1;
  while (len >= 0)
  {
    if (isdigit(expression[len]))
    {
      num = (expression[len]) - 48;
      push(num);
    }
    else
    {
      n1 = pop();
      n2 = pop();
      switch (expression[len])
      {
      case '+':
      {
        n3 = n1 + n2;
        break;
      }
      case '-':
      {
        n3 = n1 - n2;
        break;
      }
      case '*':
      {
        n3 = n1 * n2;
        break;
      }
      case '/':
      {
        n3 = n1 / n2;
        break;
      }
      }
      push(n3);
    }
    len--;
  }
  printf("\nThe result of expression %s  =  %d\n\n", expression, pop());
}

int main()
{
  int choice = 0;
  char expression[MAX];
  while (choice != -1)
  {
    printf("1 Infix to Postfix | 2 Prefix Evaluation | -1 Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Enter the infix expression: ");
      scanf("%s", expression);
      initialize();
      infix_to_postfix(expression);
      break;

    case 2:
      printf("Enter the prefix expression: ");
      scanf("%s", expression);
      initialize();
      prefix_evaluation(expression);
      break;
    }
  }
  return 0;
}