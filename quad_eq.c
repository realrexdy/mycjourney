#include <stdio.h>
#include <math.h>

int main(){
float a,b,c,d,r1,r2, realp, imagp;
printf("\nTo find the root of a Quadratic Equation in the form ax^2+bx+c=0\n");
printf("Enter the \"a\" term in the equation: \n");
scanf("%f", &a);
printf("Enter the \"b\" term in the equation: \n");
scanf("%f", &b);
printf("Enter the \"c\" term in the equation: \n");
scanf("%f", &c);

if(a==0 || sizeof(a)!=sizeof(float) ){
    printf("Invalid value for a\n");
}
else{
    d=(b*b)-4*a*c;
    if(d > 0){
    r1 = ((-b)+sqrt(d))/(2*a);
    r2 = ((-b)-sqrt(d))/(2*a);
    printf("\nThe first root is %.2f\n", r1);
    printf("The second root is %.2f\n", r2);
}
else if(d == 0){
    r2 = (-b)/(2*a);
    printf("\nThe first root is %.2f", r2);
}
else{
    printf("\nGiven equation has imaginary roots.\n");
    realp = (-b)/(2*a);
    imagp = d/(2*a);
    printf("(%.3f)+i(%.3f)\n", realp, imagp);
    printf("(%.3f)-i(%.3f)\n", realp, imagp);
}
}

printf("\n");
return 0;
}
