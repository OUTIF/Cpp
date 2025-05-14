#include <iostream>
#include <algorithm>
using namespace std;

struct Node
{
   int value;
   Node *next;
};

Node *insert(Node *head, int value)
{
   Node *p = new Node;
   p->value = value;
   p->next = head;
   return p;
}

Node *Delete(Node *head)
{
   if (head == nullptr)
      return nullptr;
   if (head->next == nullptr)
      return nullptr;

   Node *temp = head;
   head = temp->next;
   temp->next = nullptr;
   delete (temp);
   return head;
}

void printlist(Node *head)
{
   Node *current = head;

   while (current != nullptr)
   {
      cout << current->value << "-->";
      current = current->next;
   }
   cout << "NULL" << endl;
}
// function to count the number of nodes.
int sizeNode(Node *head)
{
   Node *current = head;
   int value = 0;

   while (current != nullptr)
   {
      value++;
      current = current->next;
   }
   return value;
}
// function to search for a value (target)
bool searchv(Node *head, int target)
{

   Node *current = head;
   while (current != nullptr)
   {
      if (current->value == target)
         return 1;
      current = current->next;
   }
   return 0;
}
// function to find the maximum value.
int maxv(Node *head)
{

   Node *current = head;
   int maxvalue;
   for (int i = 0; i < sizeNode(head); i++)
   {
      if (i == 0)
         maxvalue = current->value;
      else
      {
         maxvalue = max(current->value, maxvalue);
      }
   }
   return maxvalue;
}
// function to revers the linked list.
Node *reverselist(Node *head)
{
   Node *prev = nullptr;
   Node *next = nullptr;
   Node *current = head;

   while (current != nullptr)
   {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
   }
   return prev;
}

// function to delete target value;
Node *deletevalue(Node *head, int target)
{
   if (!head)
      return nullptr;
   if (head->value == target)
   {
      Node *temp = head;
      head = head->next;
      delete temp;
      return head;
   }

   Node *current = head;
   while (current->next && current->next->value != target)
   {
      current = current->next;
   }

   if (current->next)
   {
      Node *temp = current->next;
      current->next = temp->next;
      delete temp;
   }
   return head;
}
// function to sum all valuees in the list
int sumv(Node *head)
{
   int sum = 0;
   Node *current = head;
   while (current != nullptr)
   {
      sum += current->value;
      current = current->next;
   }
   return sum;
}

// function to insert at the end
Node *insertatend(Node *head, int value)
{
   Node *newNode = new Node;
   newNode->value = value;
   newNode->next = nullptr;

   Node *current = head;

   while (current->next) // Use while (current->next) when: You want to stop at the second-last node, so you can access or modify current->next safely.
   {
      current = current->next;
   }
   current->next = newNode;
   return head;
}

int main()
{

   Node *head = nullptr;

   head = insert(head, 44);
   head = insert(head, 157);
   head = insert(head, 9876);
   head = insert(head, 12035);
   head = insert(head, 1234);

   printlist(head);

   cout << "The numbers of nodes : " << sizeNode(head) << endl;
   if (searchv(head, 4))
      cout << "the target was found." << endl;
   else
      cout << "the target was not found." << endl;

   cout << "The max value in all nodes is : " << maxv(head) << endl;

   cout << "reversed linked-list:" << endl;
   head = reverselist(head);
   printlist(head);
   cout << "The sum of all values: " << sumv(head);
   head = insertatend(head, 7);
   cout << endl;
   printlist(head);
   head = deletevalue(head, 44);
   cout << endl;
   printlist(head);
   return 0;
}
