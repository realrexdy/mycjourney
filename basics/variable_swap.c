#include <stdio.h>

int main(){
    // Variable swap using temp variable
    int a,b,temp;
    printf("Enter the first variable:\n");
    scanf("%d",&a);
    printf("Enter the second variable:\n");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("a=%d\n", a);
    printf("b=%d\n", b);
    return 0;
}