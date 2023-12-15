#include <stdio.h>

int main(){
    
    // Variable swap using temp variable
    /*int a,b,temp;
    printf("Enter the first variable:\n");
    scanf("%d",&a);
    printf("Enter the second variable:\n");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    return 0;*/

    //Variable swap without using a temp variable
    float a,b;
    printf("Enter the first variable:\n");
    scanf("%f",&a);
    printf("Enter the second variable:\n");
    scanf("%f",&b);
    a=a/b;
    b=a*b;
    a=b/a;
    printf("a=%.2f\n", a);
    printf("b=%.2f\n", b);
    return 0;
    }