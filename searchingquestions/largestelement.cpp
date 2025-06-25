#include<stdio.h>

// largest element in the array
// using bubble sort

int main()
{
	int num;
	printf("Enter size: ");
	scanf("%d",&num);
	
	int arr[num];
	
	printf("Enter array: \n");
	for(int i=0; i<num; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<num; i++)
	{
		for(int j=0; j<num; j++)
		{
			if(arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	
	printf("\n Sorted array \n");
	
	printf("Largest element of the array: %d",arr[0]);
	
	return 0;
}
