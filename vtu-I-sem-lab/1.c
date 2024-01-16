#include <stdio.h>


int main(){
    int input=0;
    do{
        printf("\nPlease chose the operation that you want to perform: \n");
    printf("\n1. Addition");
    printf("\n2. Substraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Modulus");
    printf("\n");
    scanf("%d", &input);
    }while (input>5 || input <1);
    
    float a=0,b=0;
    printf("\nEnter the first number: \n");
    scanf("%f", &a);
    printf("\nEnter the second number: \n");
    scanf("%f", &b);
    switch (input)
    {
    case 1:
        printf("\nThe sum of %f and %f is %.3f.\n", a, b, a+b);
        break;

    case 2:
        printf("\nThe difference of %f and %f is %.3f.\n", a, b, a-b);
        break;
    
    case 3:
        printf("\nThe product of %f and %f is %.3f.\n", a, b, a*b);
        break;

    case 4:
        printf("\nThe quotient of %f divided by %f is %.3f.\n", a, b, a/b);
        break;

    case 5:
        printf("\nThe remainder of %d divided by %d is %d.\n", (int)a, (int)b, (int)a%(int)b);
        break;

    default:
        break;
    }
    return 0;
}