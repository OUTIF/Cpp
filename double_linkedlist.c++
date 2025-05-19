#include <iostream>

using namespace std;

struct Node
{
   int vlaue;
   Node *next;
   Node *prve;
};

Node *insert(Node *head, int value)
{
   Node *p = new Node;
   p->vlaue = value;
   p->next = head;
   p->prve = nullptr;
   if (head != nullptr)
   {
      head->prve = p;
   }
   return p;
}

Node *DeleteNode(Node *head)
{

   Node *temp = head;
   head = head->next;
   if (head != nullptr)
   {
      head->prve = nullptr;
   }
   delete temp;
   return head;
}

void printlist(Node *head)
{
   Node *current = head;
   while (current != nullptr)
   {
      cout << current->vlaue;
      if (current->next != nullptr)
         cout << "<---";
      current = current->next;
   }
}




int main()
{
   Node *head = nullptr;

   head = insert(head, 11);
   head = insert(head, 12);
   head = insert(head, 13);
   head = insert(head, 14);
   head = insert(head, 15);
   head = insert(head, 16);

   printlist(head);
   head = DeleteNode(head);
   cout << endl;
   printlist(head);

   return 0;
}
