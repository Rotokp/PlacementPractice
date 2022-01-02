#include <stdlib.h>
#include<time.h>
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int arr[n];
    srand(time(0));
    for(int i=0;i<n;i++) arr[i] = 1 + rand()%10;

    printf("The array is:");
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("\nMax no is the array is :%d ", max);
    printf("\nMin no is the array is :%d ", min);
    return 0;
}