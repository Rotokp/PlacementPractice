#include<iostream>
using namespace std;

class StackDynamicArray{
    int *data;
    int nextindex;
    int capacity;
    
    public:
    StackDynamicArray(){
    data=new int[5];
    nextindex=0;
    capacity=5;
    }

    int size(){
        return nextindex;
    }

    bool isempty(){
        if(nextindex==0){
        return true;
        }
       return false;
    }

    void push(int element){
        if(capacity==nextindex){
            int *newdata=new int[2*capacity] ;
            for(int i=0;i<capacity;i++)
            newdata[i]=data[i];
            delete [] data;
            capacity *=2;
            data=newdata;
        }
        data[nextindex]=element;
        nextindex++;
    }

    int pop(){
        if(isempty()){
            cout<<"empty stack";
            return INT_MIN;
        }
        nextindex--;
        return data[nextindex];
    }

    int top(){
        if(isempty()){
            cout<<"empty stack";
            return INT_MIN;
        }
      return data[nextindex-1];
    }
};