#include <stdio.h>

int main(){

    int a[50];
    int n;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for(int i=1; i<=n; i++){
        scanf("%d", &a[i]);
    }
    printf("The reversed array is:\n");
    for(int i=n; i>0; i--){
        printf("%d\n", a[i]);
    }

}
