#include <iostream>

using namespace std;

#define N 100 // the size of the queue.

// Creating a Queue struct.
struct Queue
{
   int Q[N];  // Fixed array to hold the elements in the queue of type <int> .
   int front; // the index of the next item to be popped in (remove).
   int back;  // the index of the next item to be pushed in (add).
   int size;  // size of the queue.
};

void CreatQueue(Queue *queue)
{
   queue->front = 0; // the index of the next item to be popped in (remove).
   queue->back = 0;  // the index of the next item to be pushed in (add).
   queue->size = 0;
}
// function to check if the queue is empty
bool IsEmpty(Queue *queue)
{
   return (queue->size == 0);
}
// function to check if the queue is full
bool IsFull(Queue *queue)
{
   return (queue->size == N);
}

// function to add elements to the queue.
void push(Queue *queue, int newitem)
{
   if (IsFull(queue)) // checking if the queue was already full.
   {
      cout << "You cant push elements in the queue . The queue is full" << endl;
      return;
   }

   /* initilizing the new iteam to the index (back
   which is the index that holds the index of the elements that will be added in the future)*/
   queue->Q[queue->back] = newitem;
   // moving the back (add) index
   queue->back = (queue->back + 1) % N;
   ;
   if (queue->back == N)
      queue->back = 0;
   queue->size++;
}
// function to remove the first element in the queue.
int pop(Queue *queue)
{
   int index = -1; // index to hold the poped value index .Note:the poped value will remain in the array ..

   if (IsEmpty(queue))
   {
      cout << "Queue is empy.";
      return -1;
   }

   index = queue->front;
   queue->front = (queue->front + 1) % N;

   if (queue->front == N)
      queue->front = 0;
   queue->size--;
   return queue->Q[index];
}

int main()
{

   Queue q;
   Queue *pointer_of_q = &q;
   CreatQueue(pointer_of_q);

   push(pointer_of_q, 11);
   push(pointer_of_q, 12);
   push(pointer_of_q, 18);
   push(pointer_of_q, 3);
   push(pointer_of_q, 2);
   push(pointer_of_q, 1);
   push(pointer_of_q, 41);

   cout << "The size of the Queue:" << q.size << endl;

   int idx = q.front;
   for (int i = 0; i < q.size; i++)
   {
      cout << q.Q[idx];
      if (i != q.size - 1)
         cout << " <--- ";
      idx = (idx + 1) % N;
   }

   cout << endl;
   pop(pointer_of_q);
   pop(pointer_of_q);
   pop(pointer_of_q);

   idx = q.front;
   for (int i = 0; i < q.size; i++)
   {
      cout << q.Q[idx];
      if (i != q.size - 1)
         cout << " <--- ";
      idx = (idx + 1) % N;
   }
   return 0;
}
