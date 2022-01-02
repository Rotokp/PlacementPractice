#include<stdio.h>

int traverse(int array[], int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(array[i] == array[j])
			{
				count++;
				break;
			}
		}
	} 
	printf("Total no of duplicate elements: %d", count);
}

int maxrepeatingele(int array[], int n)
{
	int maxele=0, count;
	for(int i=0;i<n;i++)
	{
		count=1;
		for(int j=i+1;j<n;j++)
		{
			if(array[j] == array[i])
			{
				count++;
				if(count > maxele)
				{
					maxele = array[j];
				}
			}
		}
	}
	printf("\n Maximun repeating element is: %d", maxele);	
}

int main()
{
	int n;
	scanf("%d", &n);
	int array[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d", &array[i]);
	}
	traverse(array, n);
	maxrepeatingele(array,n);
}