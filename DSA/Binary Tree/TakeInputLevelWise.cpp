#include<iostream>
#include "Binary.cpp"
#include <queue>
using namespace std;

BinaryTreeNode<int>* takeinput(){
    int rootdata;
    cout<<"enter root data";
    cin>>rootdata;
    if(rootdata == -1){
        return NULL;
    }
    BinaryTreeNode<int> * root=new BinaryTreeNode<int>(rootdata);
    queue<BinaryTreeNode<int>*> pendingnodes;
    pendingnodes.push(root);

    while(pendingnodes.size() !=0){
         BinaryTreeNode<int> *front =pendingnodes.front();
         pendingnodes.pop();
         int leftchildData;
         cout<<"enter left child data"<<front->data<<endl;
         cin>>leftchildData;
         if(leftchildData != -1){
             BinaryTreeNode<int> * child=new BinaryTreeNode<int>(leftchildData);
             front->left=child;
             pendingnodes.push(child);
         }
         int rightchildData;
         cout<<"enter right child data"<<front->data<<endl;
         cin>>rightchildData;
         if(rightchildData != -1){
             BinaryTreeNode<int> * child=new BinaryTreeNode<int>(rightchildData);
             front->right=child;
             pendingnodes.push(child);
         }

    }
  return root;
}


/*void printTree(BinaryTreeNode<int> * root){
    if(root==NULL){
        return;
    }
    queue<BinaryTreeNode<int>*> pendingnodes;
    pendingnodes.push(root);
    while(pendingnodes.size() !=0){
         BinaryTreeNode<int> *front =pendingnodes.front();
         pendingnodes.pop();
         cout<<front->data<<endl;
         if(front->left)
         {
         pendingnodes.push(front->left);
         }
         if(front->right)
         {
         pendingnodes.push(front->right);
         }
    }
} */

void printTree(BinaryTreeNode<int> *root) {
  
    if(!root)
        return;
   
    queue<BinaryTreeNode<int> *> pn ;
    pn.push(root);
    
    while(!pn.empty())
    {
        BinaryTreeNode<int> * front= pn.front();
        pn.pop();
        cout<<front->data<<":";
        
        if(front->left)
        {   pn.push(front->left);
            cout<<"L:"<<front->left->data;
        }
         else
             cout<<"L:-1";
        
        cout<<",";
        
        if(front->right)
       {pn.push(front->right);
        cout<<"R:"<<front->right->data<<endl;}
        else
             cout<<"R:-1"<<endl;
    }
}


int main(){
    BinaryTreeNode<int> * root=takeinput();
    printTree(root);
}