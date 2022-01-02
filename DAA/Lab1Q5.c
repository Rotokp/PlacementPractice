#include<stdio.h>

int main()
{
	int n, d1=0, count=0,pro=1;
	int Sum=0;
	scanf("%d", &n);
	int array[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d", &array[i][j]);
			if(array[i][j] != 0)
			{
				count++;
			}
		}
	}
	printf("\nNo of non zero elements are: %d", count);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j>i)
			{
				d1 = d1 + array[i][j];
			} 
		}
	}
	printf("\nSum of elements above leading diagonal is: %d\n", d1);
	printf("Element below minor diagonal: ");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		if(j<i){
			printf("%d ",array[i][j]);
		}
	}
	printf("\npdt of diagonal elements: ");
	for(int i=0,j=0;i<n,j<n;i++,j++)
    pro*=array[i][j];
    for(int i=n-1,j=0;i>=0,j<n;i--,j++)
    pro*=array[i][j];
    printf("%d",(pro/array[(n-1)/2][(n-1)/2]));
 
 	return 0;
}