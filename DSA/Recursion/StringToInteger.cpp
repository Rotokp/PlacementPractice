#include<iostream>
#include<math.h>
using namespace std;

int integer(char *arr,int x){
    if(x==1){
    int z=(int)arr[0];
    z=z-48;
    return z;
    }

    int a=integer(arr+1,x-1);
    int y= (int)arr[0];
    y=y-48;
    y=y*pow(10,(x-1));
    y=y+a;
    return y;

}

int main(){
    cout<<"enter elements";
    char arr[]={'1','1','0','1','2','\0'};
    int x=5;
    int j=integer(arr,x);
    cout<<j;
    
}