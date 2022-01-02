#include<iostream>
using namespace std;
#include "NodeClass.cpp"


node * takeinput(){
    int data;
    cin>>data;
    node * head=NULL;
    while(data !=-1){
        node* newnode=new node(data);
        if(head==NULL)
        head=newnode;
        else{
            node *temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
        }
        cin>>data;
    }
    return head;
}

int recursion(node * head){
    if(head==NULL)
    return 0;
    int a=recursion(head->next);
    return a+1; 

}

int main(){
    cout<<"enter elements";
    node *head=takeinput();
    int a =recursion(head);
    cout<<"length is"<<a;
    
}