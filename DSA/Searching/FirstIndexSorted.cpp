#include<iostream>
using namespace std;

int recursion(int *arr,int find,int low,int high){
    if(low>high)
    return -1;

    int mid=(low+high)/2;
    if(arr[mid]==find){
        if(arr[0]==find ||arr[mid-1]!=find)
        return mid;
        else{
            high=mid-1;
            int k= recursion(arr,find,low,high);
            return k;
        }
    }

    else if(arr[mid]>find){
        high=mid-1;
        int z= recursion(arr,find,low,high);
        return z;
    }
    else {
        low=mid+1;
        int l= recursion(arr,find,low,high);
        return l;
    }
}

int main(){
    int f;
    cout<<"element index to be find ";
    cin>>f;
    int arr[]={1,2,2,3,3,3,4,4,4,4,4,5,6,7,8,9,9,9,9,9};
    int s= sizeof(arr)/sizeof(arr[0]);
    int l=0,h=s-1;
    int y=recursion(arr,f,l,h);
    cout<<y;

}