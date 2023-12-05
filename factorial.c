#include <stdio.h>

int main(){
    printf("Enter the Value of n:\n");
    int n;
    scanf("%d", &n);
    int factorial=1;
    for(int i=1; i<=n; i++){
        factorial *= i;
    }
    printf("The factorial of %d is %d.\n", n, factorial);
    return 0;
}
