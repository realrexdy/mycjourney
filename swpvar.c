// Swappng Variables

#include <stdio.h>

int main(){
    int i;
    int a,b,temp;
    
    printf("Choose an option.\n");
    printf("1. Swap using temp variable\n");
    printf("2. Swap using Addition\n");
    printf("3. Swap using Division\n");
    scanf("%d",i);
    
    switch (i) {
        case 1:
        printf("Enter the first variable\n");
        scanf("%d", &a);
        printf("Enter the first variable\n");
        scanf("%d", &b);
        a=temp;
        a=b;
        b=temp;
        printf("First variable %d", a);
        printf("Second variable %d", b);
        break;

        case 2:
        
        break;

        default:
        printf("Invalid Responce");
    }
    return 0;
}