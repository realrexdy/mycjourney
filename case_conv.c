#include <stdio.h>

int main(){
char let;
printf("Enter an English Alphabet: \n");
scanf("%c", &let);
if(let>=97&&let<=122){
printf("%c\n", let-32);
}
else if(let>=65&&let<=90){
printf("%c\n", let+32);
}
else{
printf("Invalid charecter. Enter an English Alphabet.");
}
return 0;
}
