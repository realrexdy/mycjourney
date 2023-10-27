#include <stdio.h>

int main(){
float a,b,c;
printf("Enter the first number(A): \n");
scanf("\t%f", &a);
printf("Enter the second number(B): \n");
scanf("\t%f", &b);
printf("Enter the third number(C): \n");
scanf("\t%f", &c);
printf("\n");
if(a>b){
    if(b>c){
        printf("A is the greatest number among the three.");
    }
    else if(a>c){
        printf("A is the greatest number among the three.");
    }
    else{
        printf("C is the greatest number among the three.");
    }
}
else if(b>c){
    printf("B is the greatest number among the three.");
}
else{
    printf("C is the greatest number among the three.");
}
printf("\n");
printf("\n");
return 0;
}
