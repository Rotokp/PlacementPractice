#include<iostream>
using namespace std;

int recursion(int *arr,int low,int high,int find){

    if(low>=high){
        if(arr[low]==find)
        return low;
        else{
            return -1;
        }
    }

    int mid=(low+high)/2;

    if(arr[mid]==find){
        return mid;
    }

    else if(arr[mid]>find)
    {
        high=mid-1;
      int y=recursion(arr,low,high,find);
      return y;
    }
    else if(arr[mid]>find)
    {
        low=mid+1;
      int y=recursion(arr,low,high,find);
      return y;
    }



}

int main(){
    cout<<"elements";
    int arr[]={1,2,3,4,5,6,7,8,9};
    int low=0;
    int high=8;
    int find;
    cin>>find;
    int y=recursion(arr,low,high,find);
    cout<<y;

}