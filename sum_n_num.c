#include <stdio.h>

int main(){
    int n, sum=0;
    printf("Enter the nth number: \n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        sum +=i;
    }
    printf("The sum of first %d numbers is %d.", n, sum);
    return 0;
}
