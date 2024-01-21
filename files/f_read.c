
/*Program to read data from a file from a file*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fle = fopen("/home/tcs/pf/mycjourney/files/file.txt", "r");
    if(fle == NULL){
        printf("\nFile not found.\n");
        exit(0);
    }
    else{
        char ch;
        while ((ch = fgetc(fle)) != EOF){
            printf("%c", ch);
        }
        rewind(fle);
        char line[10];
        fgets(line, 5, fle);
        printf("\n%s\n", line);
        rewind(fle);
        fread(line, 2, 3, fle);
        printf("\n%s\n", line);
        rewind(fle);
        char ascii;
        fscanf(fle, "%c", &ascii);
        printf("\n%d\n", ascii);
    }
    fclose(fle);
    return 0;
}