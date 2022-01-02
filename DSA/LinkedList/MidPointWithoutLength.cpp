#include<iostream>
using namespace std;
#include "NodeClass.cpp"

node *input(){
    int data;
    cin>>data;
    node * head=NULL;
    node * tail=NULL;
    while(data!=-1){
        node * newnode=new node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;
    }
    return head;
}

void print(node * head){
    while(head!=NULL){
        cout<<head->data;
        head=head->next;
    }
}
 node *mide(node * head){
     node *slow=head;
     node *fast=head;
     while(fast->next!=NULL && fast->next->next!=NULL){
         slow=slow->next;
         fast=fast->next->next;
     }
     return slow;
 }


int main(){
    cout<<"enter elements";
    node *head=input();
    print(head);
    node *mid=mide(head);
    cout<<mid->data;
    return 0;
}