#include <stdio.h>
#include <string.h>

void strrev(char string[], char rev_string[]){
    int len = strlen(string);
    for(int i=0; i<len; i++){
        rev_string[len-1-i]=string[i];
    }
}

int main(){
    char string[50], rev_string[50];
    printf("\nEnter a string: \n");
    scanf("%s", string);
    strrev(string, rev_string);
    printf("\n The reversed string: %s", rev_string);
    if(!strcmp(string, rev_string)){
        printf("\nThe strings are palindromes.\n");
    }
    else{
        printf("\nStrings are not palindromes.\n");
    }

}