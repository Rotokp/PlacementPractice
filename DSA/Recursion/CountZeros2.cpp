#include<iostream>
using namespace std;

int zeros(int no){
    
    if(no==0)
    return 1;
    if(no<10)
    return 0;
    int c=zeros(no/10);
    if(no%10==0)
    return c+1;
    else
    return c;
}


int main(){
    int no,p;
    cout<<"enter no";
    cin>>no;
    p=zeros(no);
    cout<<p;
    return 0;
}