#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

inline float mymax(float a, float b)
{
   return ((a > b) ? a : b);
}

struct Studentsdata
{
   string name;
   long int id;
   float Gpa;
   int classNo;
};

struct Node
{
   Studentsdata data;
   Node *next;
};

Node *insert(Node *head, Studentsdata data)
{
   Node *p = new Node;
   p->data.classNo = data.classNo;
   p->data.Gpa = data.Gpa;
   p->data.id = data.id;
   p->data.name = data.name;
   p->next = head;
   return p;
}

void printlist(Node *head)
{
   if (head == nullptr)
   {
      cout << "No items";
      return;
   }

   Node *current = head;
   int index = 1;
   while (current != nullptr)
   {
      cout << "Student number" << index << ":" << endl;
      cout << "Student name:" << current->data.name << endl;
      cout << "student id:" << current->data.id << endl;
      cout << "student class:" << current->data.classNo << endl;
      cout << "student Gpa:" << current->data.Gpa << endl;
      if (current->next != nullptr)
         cout << "______________________________________________";
      index++;
      current = current->next;
   }
}

float printmaxgpa(Node *head)
{
   Node *current = head;
   float max = 0;
   while (current != nullptr)
   {
      max = mymax(max, current->data.Gpa);
      current = current->next;
   }

   return max;
}

int main()
{

   Node *head = nullptr;
   Studentsdata data;

   for (int i = 0; i < 500; i++)
   {
      cout << endl;
      cout << "Name of the sutdent:";
      cin >> data.name;
      cout << "The id of the student:";
      cin >> data.id;
      cout << "The class of the student";
      cin >> data.classNo;
      cout << "The Gpa of the student:";
      cin >> data.Gpa;
      head = insert(head, data);
      cout << endl;
   }

   printlist(head);
   cout << endl;
   cout << "the max gpa is:" << printmaxgpa(head);

   return 0;
}
