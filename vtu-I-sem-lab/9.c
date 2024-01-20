#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(){
    char string1[100], string2[100];
    int inp;
    do{
        printf("Choose the operation:\n");
        printf("1. Concatenate\n");
        printf("2. Compare\n");
        printf("3. Length of the string\n");
        printf("4. Quit\n");
        scanf("%d", &inp);
        switch (inp)
        {
        case 1:
            printf("Enter the first string:");
            scanf("%s", string1);
            printf("Enter the second string:");
            scanf("%s", string2);
            strcat(string1, string2);
            printf("%s", string1);
            break;
        case 2:
            printf("Enter the first string:");
            scanf("%s", string1);
            printf("Enter the second string:");
            scanf("%s", string2);
            (strcmp(string1, string2)>0)?printf("First string is longer."):printf("Second string is longer.");
            break;
        case 3:
            printf("Enter the string:");
            scanf("%s", string1);
            printf("Length of the string is %d", strlen(string1));
            break;
        case 4:
            exit(0);
            return 0;
        default:
            break;
        }
    }while(inp == 4);
    return 0;
}