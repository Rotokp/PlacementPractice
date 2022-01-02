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

void print(node * head){
    while(head!=NULL){
        cout<<head->data;
        head=head->next;
    }

}


node* try(node *l1, node *l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        
        int z=l1->data+l2->data;
        
        if(z<10)
        {
            node *temp=new node(z);
        }
        else{
            node *temp=new node(z/10);
            node *temp1=new node(z);
            temp->next=temp1;
            temp1->next=NULL;
            }
         node *a=try(l1->next,l2->next);
             temp->next=a;
        return temp;
}


int main(){
    cout<<"enter elements";
    node *head=takeinput();
    node *head1=takeinput();
    node *header=try(head,head1);

    
}
