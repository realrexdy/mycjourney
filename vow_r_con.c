#include <stdio.h>

int main(){
char in;
printf("Enter an English alphabet: \n");
scanf("%c", &in);
if(in>=65&&in<=90||in>=97&&in<=122){
if(in=='a' || in=='A' || in=='e' || in=='E' || in=='i' || in=='I' || in=='o' || in=='O' || in=='u' || in=='U'){
printf("\tThe given letter is a vowel.\n");
}
else{
printf("\tThe given letter is a consonent\n");
}
}
else{
printf("\nInvaild Input. Please enter english alphabets ONLY.");
}
}
