#include<iostream>
#include"Binary.cpp"
using namespace std;

BinaryTreeNode<int>* takeinput(){
int rootdata;
cin>>rootdata;
if(rootdata==-1)
return NULL;
BinaryTreeNode<int>* root= new BinaryTreeNode<int>(rootdata);
BinaryTreeNode<int>*leftchild=takeinput();
BinaryTreeNode<int>*rightchild=takeinput();

root->left=leftchild;
root->right=rightchild;
return root;
}


void printtree(BinaryTreeNode<int>* root){
if(root==NULL)
return;
cout<<(root->data);
printtree(root->left);
printtree(root->right);
}

int main(){
    BinaryTreeNode<int>* root=takeinput();
    printtree(root);
}