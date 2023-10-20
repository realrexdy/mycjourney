#include <stdio.h>
#include <math.h>

int main(){
double num1, num2;
printf("\nSimple Calculator\n");
printf("Select the operation that you want to perform:\n");
printf("1. Addition\n");
printf("2. Substraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
int inp;
scanf("%d",&inp);
switch(inp){

    default:
    printf("Invalid Response");

    case (1):
    printf("Enter the first number:\n");
    scanf("%lf", &num1);
    printf("Enter the second number:\n");
    scanf("%lf", &num2);
    printf("%lf", num1+num2);
    break;

    case (2):
    printf("Enter the first number:\n");
    scanf("%lf", &num1);
    printf("Enter the second number:\n");
    scanf("%lf", &num2);
    printf("%lf", num1-num2);
    break;

    case (3):
    printf("Enter the first number:\n");
    scanf("%lf", &num1);
    printf("Enter the second number:\n");
    scanf("%lf", &num2);
    printf("%lf",num1*num2);
    break;

    case (4):
    printf("Enter the first number:\n");
    scanf("%lf", &num1);
    printf("Enter the second number:\n");
    scanf("%lf", &num2);
    printf("%lf",num1/num2);
    break;
}
return 0;
}
