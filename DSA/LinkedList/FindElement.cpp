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


int FindPosition(int data,node * head){
    int count=0;
    while(head !=NULL ){
        if(head->data==data)
        return count;
        head=head->next;
        count++;
    }
    return -1;
}


int main(){
    cout<<"enter data";
    node *head=input();
    int i;
    cout<<"enter element";
    cin>>i;
    int j= FindPosition(i,head);
    cout<<j;
}