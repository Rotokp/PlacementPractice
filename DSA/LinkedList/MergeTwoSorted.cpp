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
    cout<<endl;
}


node *merge(node *head,node *head1){
    node *starting=NULL,*last=NULL;
    while(head !=NULL && head1 !=NULL){
        if(head->data<head1->data){
            if(starting==NULL){
                starting=head;
                last=head;
            }
            else{
                last->next=head;
                last=head;
            }
            head=head->next;
        }
        else{
            if(starting==NULL){
                starting=head1;
                last=head1;
            }
            else{
                last->next=head1;
                last=head1;
            }
            head1=head1->next;
        }
    }
    if(head==NULL){
        last->next=head1;
    }
    else{
        last->next=head;
    }
    return starting;

}

int main(){
    cout<<"enter elements";
    node *head=input();
    node *head1=input();
    merge(head,head1);
    print(head);
    
}