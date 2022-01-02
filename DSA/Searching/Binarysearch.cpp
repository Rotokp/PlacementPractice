#include<iostream>
using namespace std;

int binarysearch(int *arr,int size,int find){
    int low=0;
    int high=size-1;
    int mid=(low+high)/2;
    while(low<=high)
    {
       if(arr[mid]==find)
       return mid;

      else if(arr[mid]>find){
          high=mid-1;
          mid=(low+high)/2;
      }

      else if(arr[mid]<find){
          low=mid+1;
          mid=(low+high)/2;
        }
    }
    return -1;


}

int main(){
    cout<<"enter element to find"<<endl;
    int find,size;
    cin>>find;
    cout<<"array element present or not"<<endl;
    int arr[]={1,2,3,4,5,6,7,8,9};
    size=9;

    int y=binarysearch(arr,size,find);
    cout<<y;
    return 0;

}