#include <stdio.h>

int main(){
    int num_of_10, num_of_5, num_of_2, num_of_1, balance;
    printf("Enter the numbers of Rs 10 coins:\n");
    scanf("%d", &num_of_10);
    printf("Enter the numbers of Rs 5 coins:\n");
    scanf("%d", &num_of_5);
    printf("Enter the numbers of Rs 2 coins:\n");
    scanf("%d", &num_of_2);
    printf("Enter the numbers of Rs 1 coins:\n");
    scanf("%d", &num_of_1);

    balance = (10*num_of_10)+(5*num_of_5)+(2*num_of_2)+(1*num_of_1);
    printf("The piggy bank balance is: %d \n", balance);
    return 0;
}