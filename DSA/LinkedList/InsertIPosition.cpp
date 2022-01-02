#include<iostream>
using namespace std;
#include "NodeClass.cpp"

node *input(){
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
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

node * insert(node * head,int i ,int data){
    node * newnode=new node(data);
    node *temp=head;
    int count=0;
    while(count<i-1)
    {
        temp=temp->next;
        count++;
    }

    newnode->next=temp->next;
    temp->next=newnode;



}



int main(){
    int i,j;
    cout<<"enter elements";
    node* head=input();
    cout<<"printing elements";
    print(head);
    cout<<"enter data and ith position to insert";
    cin>>i>>j;
    head =insert(head,j,i);
