#include <iostream>
using namespace std;

struct StackNode
{
   int value;
   StackNode *next;
};

struct Stack
{
   StackNode *top;
};

void CreatStack(Stack *stack)
{
   stack->top = nullptr;
}

bool Isempty(Stack *stack)
{
   return (stack->top == nullptr);
}

void push(Stack *stack, int value)
{
   StackNode *x = new StackNode;
   x->value = value;
   x->next = stack->top; // danger//
   stack->top = x;       // Danger//
}

int pop(Stack *stack)
{
   StackNode *tmp = stack->top;
   int value = -1;

   if (Isempty(stack))
   {
      cout << "The stack is empty.";
      return -1;
   }

   tmp = stack->top;
   stack->top = stack->top->next;
   value = tmp->value;
   delete tmp;
   return value;
}

void printStack(Stack *stack)
{
   StackNode *current = stack->top;
   while (current != nullptr)
   {
      cout << '[' << current->value << ']' << endl;
      current = current->next;
   }
}

int top(Stack *stack)
{
   if (Isempty(stack))
   {
      cout << "stack is empty";
      return -1;
   }

   return stack->top->value;
}

int main()
{

   Stack s;
   CreatStack(&s);

   push(&s, 18);
   push(&s, 1);
   push(&s, 8);

   cout << "Top:" << top(&s);
   pop(&s);
   cout << "\n";
   cout << "Top:" << top(&s) << endl;
   printStack(&s);
   return 0;
}
