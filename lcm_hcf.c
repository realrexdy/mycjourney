#include <stdio.h>

int hcf(int a, int b){
    while (a!=b)
    {
        if(a>b){
            a-=b;
        }
        else{
            b-=a;
        }
    }
    return a;
}

int lcm(int a, int b){
    return (a*b)/hcf(a,b);
}

int main(){
    int num1, num2, bol=0;
    printf("Enter the two number:\n");
    scanf("%d%d", &num1, &num2);

    printf("The HCF of the given numbers is %d\n", hcf(num1, num2));
    printf("The LCM of the given numbers is %d\n", lcm(num1, num2));

    return 0;
}
