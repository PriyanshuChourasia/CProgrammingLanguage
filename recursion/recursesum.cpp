#include<stdio.h>

int printsum(int n);

int main(){
	int sum = printsum(1);
	
	printf("Sum = %d",sum);	
	return 0;
}

int printsum(int n){
	if(n > 5){
		return 0;
	}
	return n+printsum(n+1);
}

