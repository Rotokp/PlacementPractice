#include<stdio.h>
void MaxActivities(int a[], int b[], int n)
{
    int i, j;
    printf("Following activities are selected: ");
    i = 0;
    printf("%d ", i);
    for (j = 1; j < n; j++)
    {
      if (a[j] >= b[i])
      {
          printf ("%d ", j);
          i = j;
      }
    }
}
 
int main()
{
 
    int n;
    printf("Enter the size:");
    scanf("%d",&n);
    int a[n],b[n];
    printf("Enter starting time of activities: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
        printf("Enter Finishing time of activities: ");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    MaxActivities(a, b, n);
    return 0;
}