#include<iostream>
using namespace std;

int index(int *arr,int i,int j){
    if(j==0)
    return -1;

    if(arr[0]==i)
    return 0;

    int a=index(arr+1,i,j-1);
    if(a==-1)
    return -1;
    else{
        return a+1;
    }

}

int main(){
    cout<<"Array";
    int arr[]={10,20,30,40};
    int i=index(arr,400,4);
    cout<<i;

}