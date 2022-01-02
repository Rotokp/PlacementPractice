#include<iostream>
using namespace std;

int c=0;

int zeros(int no){
    
    if(no==0)
    return 1;
    if(no<1)
    return 0;
    int digit=no%10;
    if(digit==0)
    c++;
    zeros(no/10);
    return c;
}

int main(){
    int no;
    cout<<"enter the no";
    cin>>no;
    int p=zeros(no);
    cout<<p;
}
