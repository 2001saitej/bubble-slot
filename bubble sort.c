//Bubble sort
#include<stdio.h>
int main()
{
	int size,i,temp,j;
	printf("Enter the array size:\n");
	scanf("%d",&size);
	
	int arr[size];
	printf("\nEnter array contents:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nArray Before sorting:");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\nArray after sorting is :\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
	
}

