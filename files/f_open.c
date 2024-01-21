/*A program to open a file in C*/

#include <stdio.h> //For standard formatted I/O
#include <stdlib.h> //For exit(0)

int main(){
    FILE *txtfle = fopen("/home/tcs/pf/mycjourney/files/fopen_fle.txt", "r"); //Opening the file
    if(txtfle == NULL){
        printf("\nFile not found.\n");
        exit(0);
    } //Handeling the edge case of absence of the file.
    else{
        fputs("This line is written using a file handeling function in C", txtfle); //Writing a String into the file
    }
    fclose(txtfle); //Closing the file.
    return 0;
}