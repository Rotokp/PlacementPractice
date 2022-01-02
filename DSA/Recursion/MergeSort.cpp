#include<iostream>
using namespace std;


void mergepart(int *arr,int start,int end){
    
    int mid=(start+end)/2;
    int h=start,k=0,l=mid + 1;
    int size = end-start + 1;
    int * temp=new int[size];

    while(h<=mid && l<=end){
        if(arr[h] < arr[l]){

            temp[k]=arr[h];
            h++ ;k++;
        }
        else{
            temp[k]=arr[l];
            k++;l++;
        }
    }

    while(l <= end){
          temp[k]=arr[l];
          k++ ;
          l++;
    }
    
    while(h <= mid){
          temp[k]=arr[h];
           k++;
           h++;
    }
     
   int z=0;
   for(int i=start;i<=end;i++){
       arr[i]=temp[z];
       z++;

   }
 

}

void merge(int *arr,int start,int end){
    if(start >= end)
    {
        return;
    }
  int mid=(start+end)/2;
    merge(arr,start,mid);
    merge(arr,mid+1,end);
    mergepart(arr,start,end);
}

int main(){
    
   
}