#include <iostream>
using namespace std;

struct SQueueNode
{
   int item;
   SQueueNode *next;
};

struct Queue
{
   SQueueNode *front;
   SQueueNode *back;
};

void CreatQueue(Queue *queue)
{
   queue->front = queue->back = NULL;
}

bool Isempty(Queue *queue)
{
   return (queue->front == NULL);
}

void Enqueue(Queue *queue, int newitem)
{
   SQueueNode *x = new SQueueNode;
   x->item = newitem;
   x->next = NULL;

   if (Isempty(queue))
   {
      queue->front = queue->back = x;
   }
   else
   {
      queue->back->next = x;
      queue->back = x;
   }
}

int DeQueue(Queue *queue)
{
   if (Isempty(queue))
   {
      cout << "The queue is empty." << endl;
      return -1;
   }

   SQueueNode *tmp = queue->front;
   int item = tmp->item; // ✅ FIX: use `item`, not `key`

   queue->front = queue->front->next;

   if (queue->front == NULL)
   {
      queue->back = NULL; // ✅ FIX: set back to NULL, not back->next
   }

   delete tmp; // ✅ Free the memory
   return item;
}

int main()
{
   Queue q;
   CreatQueue(&q);

   Enqueue(&q, 10);
   Enqueue(&q, 20);
   Enqueue(&q, 30);

   cout << "Dequeued: " << DeQueue(&q) << endl;
   cout << "Dequeued: " << DeQueue(&q) << endl;
   cout << "Dequeued: " << DeQueue(&q) << endl;
   cout << "Dequeued: " << DeQueue(&q) << endl; // test empty case

   return 0;
}
