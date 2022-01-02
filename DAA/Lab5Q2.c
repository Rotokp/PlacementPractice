#include <stdio.h>
#include<stdlib.h>
#include<time.h>
clock_t start,end;
double cpu_time_used;
int randomiser=0;
int* arr;
void Build(int n)
{
 randomiser++;
 srand(n+randomiser);
 free(arr);
 arr=(int*)malloc(n*sizeof(int));
 for(int i=0;i<n;i++)
  *(arr+i)=rand();
}
void swap(int* x,int* y)
{
	int t=(*x);
	(*x)=(*y);
	(*y)=t;
}
void heapifysmall(int arr[], int n, int i)
{
	int smallest = i;                         // Initialize smallest as root
	int l = 2 * i + 1;                        // left = 2*i + 1
	int r = 2 * i + 2;                        // right = 2*i + 2

	// If left child is smaller than root
	if (l < n && arr[l] < arr[smallest])
		smallest = l;

	// If right child is smaller than smallest so far
	if (r < n && arr[r] < arr[smallest])
		smallest = r;

	if (smallest != i) {                               // If smallest is not root
		swap(&arr[i],&arr[smallest]);

		heapifysmall(arr, n, smallest);                // Recursively heapify the affected sub-tree
	}
}

// main function to do heap sort
void maxheapSort(int arr[], int n)
{
	
	for (int i = n / 2 - 1; i >= 0; i--)                   // Build heap (rearrange array)
		heapifysmall(arr, n, i);

	for (int i = n - 1; i >= 0; i--) {                     // One by one extract an element from heap
		
		swap(&arr[0],&arr[i]);                             // Move current root to end

		heapifysmall(arr, i, 0);                            // call max heapify on the reduced heap
	}
}

void Display(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		printf("\n%d ",arr[i]);
	printf("\n");
}

void largest(int arr[],int n)
{
 int lar=arr[0];
 for(int i=0;i<n;i++)
  if(lar<arr[i])
   lar=arr[i];
 printf("\nlargest element is %d\n",lar);
}

void sorting(int arr[],int n)
{
 int opt;
 printf("\n1.Max heap\n2.Min heap\nEnter your choice:");
 scanf("%d",&opt);
 sorting:
 switch(opt)
 {
  case 1:
         maxheapSort(arr,n);
         break;

  default:
         printf("\nEnter correct option.");
         goto sorting;
         break;
 }
}

void replace(int arr[],int n)
{
 int node,value;
 printf("\nEnter node:");
 scanf("%d",&node);
 printf("\nEnter value:");
 scanf("%d",&value);
 arr[node]=value;
 sorting(arr,n);
}

void insert(int arr[],int* n)
{
 int new;
 int size=(*n)+1;
 int *store=(int*)malloc(size*sizeof(int));
 for(int i=0;i<(*n);i++)
  *(store+i)=arr[i];
 printf("\nEnter new element:");
 scanf("%d",&new);
 *(store+size-1)=new;
 Build(size);
 for(int i=0;i<size;i++)
  arr[i]=*(store+i);
 *(n)=size;
 sorting(arr,*n);
}

int delete(int arr[],int* n)
{
 int node=-1,value;
 printf("\nEnter value to delete:");
 scanf("%d",&value);
 for(int i=0;i<(*n);i++)
  if(arr[i]==value)
   {
    node=i;
    break;
   }
 if(node==-1)
 {
  printf("\nElement not found");
  return 1;
 }
 int *store=(int*)malloc(((*n)-1)*sizeof(int));
 for(int i=0,j=0;i<(*n);i++)
  if(i!=node)
  {
   *(store+j)=arr[i];
   j++;
  }

 Build((*n)-1);
 *n=(*n)-1;
 for(int i=0;i<(*n);i++)
  arr[i]=*(store+i);
 sorting(arr,*n);
 return 0;
}
int main()
{
	int n,opt;
	arr=(int*)malloc(10000000*sizeof(int));
	printf("\nEnter number of elements:");
	scanf("%d",&n);
	Build(n);
	menu:
	printf("\n1.Build\n2.Display\n3.Sort the elements using Max-heap\n4.Time taken to sort Random data in descending order\n5.Total time complexity\n6.Find the largest element\n7.Replace existing value\n8.Insert a new element\n9.Delete an element\n0.Exit\nEnter your choice:");
	scanf("%d",&opt);
	switch(opt)
	{
	
	    case 0:
			exit(0);
			break;
		case 1:
			printf("\nEnter number of elements:");
			scanf("%d",&n);
			Build(n);
			break;
		case 2:
			Display(arr,n);
			break;
		case 3:
			maxheapSort(arr,n);
			Display(arr,n);
			break;
		case 4:
			Build(n);
			start=clock();
			maxheapSort(arr,n);
			end=clock();
			cpu_time_used=((double)(end-start)/CLOCKS_PER_SEC);
			printf("%lf",cpu_time_used);
			break;
		case 5:
			printf("\nElements\tData random\tData ascending\tData descending\n");
			for(int i=5000;i<=50000;i=i+5000)
			{
				n=i;
				Build(n);
				printf("%d\t\t",i);
				start=clock();
				maxheapSort(arr,n);
				end=clock();
				cpu_time_used=((double)(end-start)/CLOCKS_PER_SEC);
				printf("%lf\t",cpu_time_used);
				start=clock();
				maxheapSort(arr,n);
				end=clock();
				cpu_time_used=((double)(end-start)/CLOCKS_PER_SEC);
				printf("%lf\t",cpu_time_used);
				maxheapSort(arr,n);
				start=clock();
				maxheapSort(arr,n);
				end=clock();
				cpu_time_used=((double)(end-start)/CLOCKS_PER_SEC);
				printf("%lf\n",cpu_time_used);
			}
			break;
		case 6:
		       largest(arr,n);
		       break;
		case 7:
		        replace(arr,n);
		        break;
		case 8:
		        insert(arr,&n);
		        break;
		case 9:
		        delete(arr,&n);
		        break;
		default:
		        printf("\nWrong option entered.");
		        break;
	}
	goto menu;
}




