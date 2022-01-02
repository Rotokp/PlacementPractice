#include<iostream>
using namespace std;

int multiply(int m ,int n){
    if(n==0){
        return 0;
    }
    int z=multiply(m,n-1);
    return z+m;
}

int main(){
    int a,b,c;
    cout<<"enter nos";
    cin>>a>>b;
    c=multiply(a,b);
    cout<<c;
}