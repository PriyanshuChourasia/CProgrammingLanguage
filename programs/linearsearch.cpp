#include<stdio.h>


int main(){
	int num;
	printf("Enter the size: ");
	scanf("%d",&num);
	
	int arr[num];
	
	printf("Enter the numbers: \n");
	for(int i=0; i<num; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int target;
	printf("Enter target: ");
	scanf("%d",&target);
	
	for(int i=0; i<num; i++){
		if(arr[i] == target){
			printf("Target found");
			break;
		}
	}
	
	
	return 0;
}
