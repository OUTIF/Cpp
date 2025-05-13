#include <iostream>

using namespace std;

#define N 100

struct STACK
{
   int S[N];
   int top;
   int size;
};

void Creatstack(STACK *stack)
{
   stack->top = -1;
   stack->size = 0;
}

bool Isempty(STACK *stack)
{
   return (stack->top == -1);
}

void push(STACK *stack, int value)
{
   if (stack->top == N - 1)
   {
      cout << "STACK IS FULL";
      return;
   }

   stack->top = (stack->top + 1) % N;
   stack->S[stack->top] = value;
   stack->size++;
}

int pop(STACK *stack)
{
   int index = -1;

   if (Isempty(stack))
   {
      cout << "stack underflow";
      return -1;
   }

   stack->top = (stack->top - 1) % N;
   stack->size--;
   return stack->S[index];
}

int top(STACK *stack)
{
   if (Isempty(stack))
   {
      cout << "Stack is empty";
      return -1;
   }

   return stack->S[stack->top];
}

void printstack(STACK *stack)
{
   cout << endl;
   for (int i = stack->size - 1; i >= 0; i--)
   {

      cout << stack->S[i];
      if (i == stack->size - 1)
         cout << " Top of the stack." << endl;
      else if (i == 0)
         cout << " Bottom of the stack.";
      else
         cout << endl;
   }
}

int main()
{

   STACK x;
   Creatstack(&x);

   if (Isempty(&x))
      cout << "The stack is empty";

   push(&x, 19);
   push(&x, 20);
   push(&x, 2);
   push(&x, 1120);
   push(&x, 9);
   push(&x, 100);
   push(&x, 28);
   push(&x, 33);
   push(&x, 101);
   push(&x, 12);
   push(&x, 1);

   printstack(&x);
   cout << endl;
   pop(&x);
   cout << endl;
   printstack(&x);
   pop(&x);
   cout << endl;
   printstack(&x);

   return 0;
}
