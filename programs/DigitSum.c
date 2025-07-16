#include<stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    int sum = 0;

    while (num >0) {
        int rem = num % 10;
        sum = sum + rem;
        num = num /10;
    }

    printf("Sum of elements: %d",sum);

    return 0;
}