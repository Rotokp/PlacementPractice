#include<iostream>
using namespace std;
#include "NodeClass.cpp"

void print(node *head)
{
    node * temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<endl;
      temp=temp->next;
      
    }
}

int main(){

   node n1(10);
   node *head=&n1;
   node n2(20);
   node n3(30);

   n1.next=&n2;
   n2.next=&n3;

   print(head);
}
