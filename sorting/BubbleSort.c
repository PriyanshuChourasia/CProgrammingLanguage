#include<stdio.h>

int main() {

    printf("Bubble sort\n");
    int size;
    printf("Enter size: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter array values: \n");
    for (int i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }


    for (int i=0; i<size; i++) {
        for (int j=0; j<i; j++) {
            if (arr[i] > arr[j]) {
                const int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    printf("Sorted values\n");

    for (int i=0; i<size; i++) {
        printf("%d\n",arr[i]);
    }


    return 0;
}