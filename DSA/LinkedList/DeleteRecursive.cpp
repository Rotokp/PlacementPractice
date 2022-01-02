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

node * deletee(node *head,int i){
    if(head==NULL){
        return head;
    }
    if(i==0){
        node *c=head;
        head=head->next;
        delete c;
        return head;
    }
    else{
        head->next=deletee(head->next,i-1);
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
    head=deletee(head,i);
    print(head);
}
