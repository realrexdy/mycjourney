#include <stdio.h>

int main(){
    printf("Enter the Value of n:\n");
    int n, i=1;
    scanf("%d", &n);
    int factorial=1;
    
    while (i <= n)
    {
        factorial*=i;
        i++;
    }
    
    printf("The factorial of %d is %d.\n", n, factorial);
    return 0;
}
