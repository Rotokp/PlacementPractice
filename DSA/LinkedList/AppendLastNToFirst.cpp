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


void print(node *head){
     while(head !=NULL){
        cout<< head->data;
        head=head->next;
     }
}

int length(node *head){
    int count=0;
    while(head !=NULL){
        head=head->next;
        count++;
    }
    return count;
}

node * append(node *head ,int position,int count){
    int k=count-position;
    node * temp=head;
    node *temp2=head;
    for(int i=0;i<k-1;i++){
        temp=temp->next;
    }
    node *first=temp;
    node *second=temp->next;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    if(position>count)
    return head;
    else{
        temp2->next=head;
        head=second;
        first->next=NULL;
        return head;
    }

}


int main(){
    cout<<"enter elements";
    node *head=input();
    print(head);
    int i;
    cout<<"enter position ";
    cin>>i;
    int j=length(head);
    head=append(head,i,j);
    print(head);
}