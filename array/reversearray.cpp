#include<stdio.h>

/**
	print the array in reverse
*/

int main()
{
	int num;
	printf("Enter num: ");
	scanf("%d",&num);
	
	int arr[num];
	
	printf("Enter the integers: \n");
	for(int i=0; i<num; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\n Print \n");
	for(int i=num-1; i>=0; i--)
	{
		printf("%d \n",arr[i]);
		num--;
	}
	
	return 0;
}
