#include<iostream>
using namespace std;

class StackUsingArray{
    int *data;
    int nextindex;
    int capacity;

    public:

    StackUsingArray(int totalsize){
        data=new int[totalsize];
        nextindex=0;
        capacity=totalsize;
    }
    int size(){
    return nextindex;
    }
    bool isempty(){
        if(nextindex==0)
        {
            return true;
        }
        else{
            return false;
        }
    }

    void push(int element){
        if(nextindex==capacity){
        cout<<"stack full"<<endl;
        return;
        }
        data[nextindex]=element;
        nextindex++;
    }

    int pop(){
        if(isempty()){
            cout<<"stack is empty";
            return INT_MIN;
        }
        nextindex--;
        return data[nextindex];
    }

    int top(){
         if(isempty()){
            cout<<"stack is empty";
            return INT_MIN;
        }
       return data[nextindex-1];
    }
};