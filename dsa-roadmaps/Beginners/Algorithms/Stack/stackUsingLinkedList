#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0);  cout.tie(0);
#define endl "\n"
#define int long long

//as we can perform insert/delete operations in stack at only one end
//so we will consider the beginning of the linked list as that end
//so we will add new data at beginnig and will delete also from beginning so that t = o(1)

struct node
{
  int info;
  node *next;
};

class myStack
{
   node *head;
   public:
   myStack()
   {
     head = NULL;
   }

   void push(int data)
   {
       node *ptr = new node();
       ptr->info = data;
       if(head==NULL)
       {
         head = ptr;
       }
       else
       {
         ptr->next = head;
         head = ptr;
       }
   }

   void pop()
   {
     if(head==NULL)
     {
       cout<<"Stack is empty";
     }
     else
     {
       cout<<head->info;
     }
   }

void print()
{
  node *temp = head;
  if(head==NULL)
  {
    cout<<"Stack is empty";
  }
  else
  {
  while(temp!=NULL)
  {
    cout<<temp->info<<endl;
    temp = temp->next;
  }
  }
}

};

int32_t main()
{
  IOS;
  myStack s;
  s.push(15);
  s.push(20);
  s.push(50);
  s.print();
  return 0;
}

