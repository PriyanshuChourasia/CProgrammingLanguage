#include<stdio.h>

void printton(int n);

int main(){
	printton(1);
	return 0;
}

void printton(int n){
	
	if(n <= 10){
		printf("%d\n",n);
		printton(n+1);
	}
}
