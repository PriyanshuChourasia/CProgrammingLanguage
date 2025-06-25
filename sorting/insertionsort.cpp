#include<stdio.h>

// insertion sort


int main()
{
	int num;
	printf("Enter size: ");
	scanf("%d",&num);
	
	int arr[num];
	
	printf("Enter array: ");
	for(int i=0; i<num; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	
	printf("\n");
	
	for(int i=1; i<num; i++)
	{
		for(int j=i-1; j>=0; j--)
		{
			if(arr[j+1] > arr[j])
			{
				break;
			}
			else
			{
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	
	printf("\n");
	printf("Sorted array: \n");
	
	for(int i=0; i<num; i++)
	{
		printf("%d \n",arr[i]);
	}
	
	return 0;
}
