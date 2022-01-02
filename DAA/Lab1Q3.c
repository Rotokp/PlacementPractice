#include<stdio.h>
void swap(int *a, int *b);
void SepEvenOdd(int arr[], int size)
{
    int l = 0, r = size-1;
    while (l<r)
    {
        while (arr[l]%2 == 0 && l < r)
        l++;
        while (arr[r]%2 == 1 && l < r)
        r--;
        if (l<r)
        {
            swap(&arr[l], &arr[r]);
            l++;
            r--;
        }
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n,i;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    SepEvenOdd(arr, n);
    printf("Final Array :\n ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}