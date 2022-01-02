#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        t--;
        int d,n;
        cout<<"enter digit and no";
        cin>>n;
        int k;
        k=n;
        cin>>d;
        while(n!=0)
        {
            d=n%10;
            n=n/10;
            if(d==9)
            {
            n=n+1;
            }
        }
        k=k-n;
        cout<<k;
    }
}


