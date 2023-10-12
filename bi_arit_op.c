#include <stdio.h>

float a,b;

float addition(a,b){
    printf("Enter your first variable\n\a");
    scanf("%f",&a);
    printf("Enter your second variable\n\a");
    scanf("%f",&b);
    return a+b;
}

int main(){
    printf("Choose the operation that you want to perform.\n\a");
    printf("Addition\n\a");
    printf("Substraction\n\a");
    printf("Multiplication\n\a");
    printf("Division\n\a");
    int i;
    scanf("%d",&i);
    float temp;
    switch (i){
        case 1:
        temp = addition(a,b);
        printf(temp);
        break;
        default:
        printf("Invalid Response\n\a");
        break;
    }
    return 0;
}