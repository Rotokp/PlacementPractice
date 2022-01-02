#include<iostream>
#include<cmath>
using namespace std;

double geometric(double no){
    if(no==0)
    return 1;
    double c=geometric(no-1);
    return c+(1/pow(2,no));
    
}

int main(){
    double no;
    cout<<"enter no of terms";
    cin>>no;
    double k=geometric(no);
    cout<<k;

}