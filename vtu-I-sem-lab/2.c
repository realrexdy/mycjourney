#include <stdio.h>
#include <math.h>

int main(){
    printf("Enter the coefficients:\n");
    int a,b,c,d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    float real, imag, root1, root2;
    if(a==0){
        printf("\nNot a quadratic equation.\n");
    }
    else{
        d = (b*b)-(4*a*c);
        if(d>0){
            printf("The two distinct and real roots are:\n");
            root1 = ((-b)+sqrt(d))/(2*a);
            root2 = root1 = ((-b)-sqrt(d))/(2*a);
            printf("root 1 = %f", root1);
            printf("root 2 = %f", root2);
        }
        else if(d==0){
            printf("The two equal and real roots are:\n");
            root1 = (-b)/(2*a);
            printf("root 1 = %f", root1);
        }
        else{
            printf("The two distinct and imaginary roots are:\n");
            real = (-b)/(2*a);
            real = (fabs(d))/(2*a);
            printf("root 1 = %.2f+i%.2f", real, imag);
            printf("root 2 = %.2f-i%.2f", real, imag);
        }
    }
    return 0;
}