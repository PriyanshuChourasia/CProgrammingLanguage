#include <stdio.h>
#include <string.h>
#include "timestruct.h"

/*
 * This is for structure lesson
 */



int main() {
    TimeStruct t1 , t2;
    printf("Enter time one: \n");
    printf("Enter hour: ");
    scanf("%d",t1.hours);
    printf("Enter minute: ");
    scanf("%d",t1.minutes);
    printf("Enter seconds: ");
    scanf("%d",t1.seconds);
    printf("Enter time two: ");
    printf("Enter hour: ");
    scanf("%d",t2.hours);
    printf("Enter minute: ");
    scanf("%d",t2.minutes);
    printf("Enter seconds: ");
    scanf("%d",t2.seconds);



    return 0;
}