#include<iostream>
#include<stdio.h>
#include<stdlib.h>

int max_subarray_sum ( int A[] , int n){
    int max_sum = 0,sum;
    for (int i = 0;i<n;i++){
       sum=0;
       for(int j = i ;j<n;j++){
           sum = sum +  A[j];
            if (sum > max_sum)
                max_sum = sum;
        }
    }
    return max_sum;
}

int main(){
    int arr[] = { 1, 1, 2, 1, 3, 5, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("the max sum of subarray is %d\n",max_subarray_sum(arr, n));
    return 0;
}