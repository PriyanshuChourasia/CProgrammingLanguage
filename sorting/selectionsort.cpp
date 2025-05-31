#include<stdio.h>

// selection sort

int main(){
	
	int num;
	printf("Enter size of array:");
	scanf("%d",&num);
	
	printf("\n");
	int arr[num];
	
	printf("Enter array: ");
	for(int i=0; i<num; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int temp = -1;
	
	for(int i=0; i<num; i++)
	{
		temp = arr[i];
		int k = i;
		for(int j=i+1; j<num; j++)
		{
			if(arr[k] > arr[j])
			{
				k=j;
			}
		}
		arr[i] = arr[k];
		arr[k] = temp;
	}
	
	printf("\n");
	printf("Sorted Array\n");
	
	for(int i=0; i<num; i++)
	{
		printf("%d ,",arr[i]);
	}
	
	
	return 0;
}
