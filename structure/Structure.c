#include <stdio.h>
#include <string.h>
#include "student.h"

/*
 * This is for structure lesson
 */



int main() {
    int num;
    printf("Enter size: ");
    scanf("%d",&num);

    Student s1[num];

    for (int i=0; i<num; i++) {

        getchar();

        printf("Enter name: ");
        fgets(s1[i].name,sizeof(s1[i].name),stdin);

        printf("Enter age: ");
        scanf("%d",&s1[i].age);

        printf("Enter Total marks: ");
        scanf("%d",&s1[i].totalMarks);
    }

    printf("\n List of students \n");
    printf("\n");

    int sum = 0;

    for (int j=0; j<num; j++) {
        printf("Name: %s",s1[j].name);
        printf("Age: %d\n",s1[j].age);
        printf("Total Marks: %d\n",s1[j].totalMarks);
        sum = sum + s1[j].totalMarks;
        printf("\n");
    }

    const int avg = sum / num;

    printf("Average of total marks: %d",avg);

    return 0;
}