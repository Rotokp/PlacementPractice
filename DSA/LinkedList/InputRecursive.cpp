#include<iostream>
using namespace std;
#include "NodeClass.cpp"


node *input(){
    int data;
    cin>>data;
    node *head=NULL;
    node *tail=NULL;
    while(data !=-1){
        node *newnode=new node(data);
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

node *inputrecursion(node * head,int data,int i){
    if(head==NULL && i>0){
        return head;
    }

    if(i==0){
    node *newnode=new node(data);
    node *c=head;
    head=newnode;
    head->next=c;
    return head;
    }
    else{
    
    node * a=inputrecursion(head->next,data,i-1);
    head->next=a;
    return head;
    }
    
    
}


int main(){
    cout<<"enter elements";
    node *head=input();
    print(head);
    int data,i;
    cout<<"enter data and ith position";
    cin>>data>>i;
    head=inputrecursion(head,data,i);
    print(head);
}