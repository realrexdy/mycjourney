#include <stdio.h>

int main(){
    printf("Enter the five digit Meter Regestration Number: \n");
    int mr;
    scanf("%d", &mr);
    printf("Enter the number of units consumed: \n");
    float units;
    scanf("%f", &units);
    float bill;

    if(units < 100){
        bill = units*0.8;
        printf("Bill = %f", bill);
    }
    else if(units >= 100 && units < 200){
        bill = units*0.9;
        printf("Bill = %f", bill);
    }
    else{
        bill = (units*1);
        bill = bill + (bill*0.2);
        printf("Bill = %f", bill);}
    return 0;
}
