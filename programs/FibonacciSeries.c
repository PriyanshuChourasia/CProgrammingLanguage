#include<stdio.h>

int main() {
    printf("Fibonacci Series\n");

    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int a = 0;
    int b = 1;

    printf("%d ,",a);
    printf("%d ,",b);

    for (int i=1; i<=n; i++) {
        printf("%d ,",b);
        b = b + a;
        a = b - a;
    }

    return 0;
}