#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;
 
struct Node {
    int data;
    Node* next;
};

Node* insert(int data){

    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
 
void deleteLesserNodes(Node** head_ref, int K){

    Node *temp = *head_ref, *prev;
 
    while (temp != NULL && temp->data < K) {
        *head_ref = temp->next; 
        free(temp);
        temp = *head_ref; 
    }
 
    while (temp != NULL) {
        while (temp != NULL && temp->data >= K) {
            prev = temp;
            temp = temp->next;
        }
 
        if (temp == NULL)
            return;
 
        prev->next = temp->next;
 
        delete temp; 
 
        temp = prev->next;
    }
}
 
void printList(Node* head){
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}
 
int median(Node* head){

    Node* slow_ptr = head;
    Node* fast_ptr = head;
    Node* pre_of_slow = head;
 
    if (head != NULL) {
        while (fast_ptr != NULL && fast_ptr->next != NULL) {
 
            fast_ptr = fast_ptr->next->next;
 
            pre_of_slow = slow_ptr;
            slow_ptr = slow_ptr->next;
        }
        if (fast_ptr != NULL)
          return slow_ptr->data;
        else
           return (slow_ptr->data + pre_of_slow->data) / 2;
    }
}

int main(){
    Node* head = insert(1);
    head->next = insert(3);
    head->next->next = insert(9);
    head->next->next->next = insert(11);
    head->next->next->next->next = insert(15);
    head->next->next->next->next->next = insert(16);
 
    int K =median(head);
 
    cout << "Initial List: ";
    printList(head);
 
    deleteLesserNodes(&head, K);
 
    cout << "\nFinal List: ";
    printList(head);
 
    return 0;
}