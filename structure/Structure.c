#include <stdio.h>
#include <string.h>
#include "timestruct.h"

/*
 * This is for structure lesson
 */



int main() {
    TimeStruct t1 , t2, t3;
    printf("Enter time in 12 hrs format\n");
    printf("Hour cannot be greater than 11 \nMinutes cannot be greater than 59 \nSeconds cannot be greater than 59\n");
    printf("Enter time one \n");
    printf("Enter hour: ");
    scanf("%2d",&t1.hours);
    printf("Enter minute: ");
    scanf("%2d",&t1.minutes);
    printf("Enter seconds: ");
    scanf("%2d",&t1.seconds);
    printf("Enter time two: \n");
    printf("Enter hour: ");
    scanf("%2d",&t2.hours);
    printf("Enter minute: ");
    scanf("%2d",&t2.minutes);
    printf("Enter seconds: ");
    scanf("%2d",&t2.seconds);

    if (t1.hours > 11 || t2.hours > 11) {
        printf("Hour cannot be greater than 11");
    }else if (t1.minutes > 59 || t2.minutes > 59) {
        printf("Minutes cannot be greater than 59");
    }else if (t1.seconds > 59 || t2.seconds > 59) {
        printf("Seconds cannot be greater than 59");
    }

    t3.seconds = t1.seconds + t2.seconds;
    t3.minutes = t1.minutes + t2.minutes;
    t3.hours = t1.hours + t2.hours;
    if (t3.seconds > 59) {
        int diff = t3.seconds - 60;
        t3.seconds = diff;
        t3.minutes = t3.minutes + 1;
        if (t3.minutes > 59) {
            int temp = t3.minutes - 60;
            t3.minutes = temp;
            t3.hours = t3.hours + 1;
        }
    }else if (t3.minutes > 59) {
        int diff = t3.minutes - 60;
        t3.minutes = diff;
        t3.hours = t3.hours + 1;
    }


    printf("The time is %d:%d:%d ",t3.hours,t3.minutes,t3.seconds);

    return 0;
}