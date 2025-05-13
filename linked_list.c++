#include <iostream>
using namespace std;

struct Node
{
   int value;
   Node *next;
};

// Insert function
Node *insert(Node *head, int value)
{
   Node *p = new Node;
   p->value = value;
   p->next = head;
   return p;
}

// Print function
void printList(Node *head)
{
   Node *current = head;
   while (current != nullptr)
   {
      cout << current->value << " -> ";
      current = current->next;
   }
   cout << "NULL" << endl;
}

Node *Delete(Node *head)
{
   if (head == nullptr)
   {
      return nullptr; // Empty list, nothing to delete
   }

   Node *temp = head;
   head = head->next;
   delete temp; // Use delete instead of free
   return head;
}

int main()
{
   Node *head = nullptr;

   head = insert(head, 30);
   head = insert(head, 20);
   head = insert(head, 10);
   head = Delete(head);

   printList(head);

   // Cleanup memory (optional but good practice)
   Node *current = head;
   while (current != nullptr)
   {
      Node *next = current->next;
      delete current;
      current = next;
   }

   return 0;
}
