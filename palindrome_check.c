#include <stdio.h>

int main(){
    int number, reversednumber = 0, remainder, temp;
    printf("Enter a number: \n");
    scanf("%d", &number);
    temp=number;
    while(number!=0){
        remainder = number % 10;
        reversednumber = reversednumber*10+remainder;
        number /= 10;
    }
    if(reversednumber == temp){
        printf("The number is a palindrome.\n");
    }
    else{
        printf("The number is not a palindrome.\n");
    }
    return 0;
}
