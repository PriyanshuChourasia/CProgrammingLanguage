#include<stdio.h>

// print the array

int main()
{
	int num;
	printf("Enter the num: \n");
	scanf("%d",&num);
	
	int arr[num];
	printf("Enter the integers: \n");
	
	for(int i=0; i<num; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\n");
	printf("Print \n");
	for(int i=0; i<num; i++)
	{
		printf("%d \n",arr[i]);
	}
	
	return 0;
}
