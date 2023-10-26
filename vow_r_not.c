#include <stdio.h>

int main(){
printf("\n");
char inp;
printf("\nEnter a letter\n");
printf("\n");
scanf("%c", &inp);

switch(inp){
case('a'):
case('A'):
    printf("\nThis is a vowel.\n");
    break;
case('E'):
case('e'):
    printf("\nThis is a vowel.\n");
    break;
case('i'):
case('I'):
    printf("\nThis is a vowel.\n");
    break;
case('o'):
case('O'):
    printf("\nThis is a vowel.\n");
    break;
case('u'):
case('U'):
    printf("\nThis is a vowel.\n");
    break;
default:
    printf("\nThis is a consonent.\n");
}
	printf("\n");
	return 0;
}
