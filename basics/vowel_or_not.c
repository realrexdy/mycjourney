#include <stdio.h>

int main(){
    char vowels[10]={'a','A','e','E','i','I','o','O','u','U'};
    char input;
    int vowel_or_not=0;
    printf("Enter a letter:\n");
    scanf("%c",&input);
    for (int i = 0; i < 10; i++){
        if(input==vowels[i]){
            vowel_or_not =1;
            break;
        }
    }
    if(vowel_or_not==1){
        printf("%c is a vowel.", input);
    }
    else{
        printf("%c is not a vowel.", input);
    }
    return 0;
}