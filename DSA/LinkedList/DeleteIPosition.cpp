#include<iostream>
using namespace std;
#include "NodeClass.cpp"

node *input(){
    int data;
    cin>>data;
    node * head=NULL;
    node * tail=NULL;
    while(data !=-1){
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


void print(node *head){
    while(head!=NULL)
    {
        cout<<head->data;
        head=head->next;
    }
}


node * deletee(node * head,int i){
    int count=0;
    node* temp=head;
    if(i==0){
        node *v=head;
        head=head->next;
        delete v;
      
    }
    while(count<i-1&&temp!=NULL){
    temp=temp->next;
    count++;
    }
    if(temp!=NULL){
        node *a;node *b;
        a=temp->next;
        b=a->next;
        temp->next=b;
        delete a;
    }
    return head;
}






int main(){
    int i=0;
    cout<<"enter the elements";
    node * head;
    head=input();
    print(head);
    cout<<"enter position to delete";
    cin>>i;
    head=deletee(head,i);
    print(head);
}
