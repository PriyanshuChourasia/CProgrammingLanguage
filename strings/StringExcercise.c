#include <stdio.h>
#include <string.h>

int main() {
    /*/*Scanf does not take input after space its stop reading after space so we will use fgets#1#
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name),stdin);
    printf("Your name is: %s", name);


    char sentence[100];
    printf("Enter any sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Size of %llu\n",sizeof(sentence));

    printf("Sentence: %s", sentence);*/
    /*------------------------------------------------------*/

    /*Takes a string as input from the user.*/

    /*
    char name[100];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    printf("Name you entered: %s",name);
    */

    /*------------------------------------------------------------*/

    /* Find Length of a String*/

    /*
    char name[100];
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);

    int cnt=0;
    int i=0;
    int totcount = 0;

    while (name[i] != '\0') {
        if (name[i] != ' ' && name[i] != '\0' && name[i] != '\n') {
            cnt++;
        }
        totcount++;
        i = i+1;
    }

    printf("\n Length of characters: %d\n",cnt);
    printf("Name Entered: %s",name);
    */
/*----------------------------------------------------------------------------------*/

//     char name[100];
//     char name2[100];
//     printf("Enter your name: ");
//     fgets(name, sizeof(name),stdin);
//     strcpy(name2,name);
//
//     /*int i=0;
//
//     while (name[i] != '\0') {
//         name2[i] = name[i];
//         i = i+1;
//     }*/
//
//     printf("Copied name: %s",name2);


/*-------------------------------------------------------------------------------------------*/

    /*Uppercase to lowercase*/

    /*char name[100];
    printf("Enter string: \n");
    fgets(name,sizeof(name),stdin);

    int i=0;
    int cnt = 0;

    while (name[i] != '\n') {
        if (name[i] != ' ') {
            int chr = name[i];
            if (chr < 90) {
                int newValchar = chr + 32;
                char newChar = newValchar;
                name[i] = newChar;
            }
            cnt++;
        }
        i++;
    }

    printf("The length of characters %d\n",cnt);
    printf("The characters are: %s",name);*/

    return 0;
}