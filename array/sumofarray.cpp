#include<stdio.h>

// sum of all elements

int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	
	int arr[num];
	int sum = 0;
	printf("Enter integers: \n");
	
	for(int i=0; i<num; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i=0; i<num; i++)
	{
		sum = sum + arr[i];
	}
	
	printf("Sum = %d",sum);
	
	return 0;
}
