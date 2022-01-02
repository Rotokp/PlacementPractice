#include<iostream>
using namespace std;

int partition(int *arr,int start,int end){
    int count=0;
    int pivot=arr[start];
    for(int i=start+1;i<=end;i++)
    {
        if(pivot>arr[i])
        count++;
    } 
    int pivotindex=start+count;
    arr[start]=arr[pivotindex];
    arr[pivotindex]=pivot;

      

    int i=start,j=end;
    while(i < pivotindex && j > pivotindex){
         if(arr[i]>=pivot){
            int x=arr[j];
            arr[j]=arr[i];
            arr[i]=x;
            j--;
        }
        else if(arr[j]<pivot){
            int x=arr[i];
            arr[i]=arr[j];
            arr[j]=x;
            i++;
        }
        else{
            i++;
            j--;
        }
    }
    return pivotindex;
} 


void quicksort(int *arr,int start,int end){
    if(start>=end){
        return;
    }

    int position=partition(arr,start,end);
    quicksort(arr,start,position-1);
    quicksort(arr,position+1,end);
    
}


int main(){
    cout<<"enter elements";
    int arr[10]={2,3,12,0,6,7,41,90};
    for(int i=0;i<8;i++){
    cout<< arr[i]<<endl;
    }
    int start=0,end=7;
    quicksort(arr,start,end);
    for(int i=0;i<8;i++){
    cout<< arr[i];
    }
}

    

   


 /*if(arr[i]<pivot){
            i++;
         }
        else if(arr[j]>=pivot){
            j--;
        }
        else{
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }

    return pivotindex; */