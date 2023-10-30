#include <stdio.h>

float sal, bon, pay;
char sex;

float salmu10(float sal){
return sal*0.07;
}
float salma10(float sal){
return sal*0.05;
}
float salfu10(float sal){
return sal*0.12;
}
float salfa10(float sal){
return sal*0.1;
}

int main(){
printf("Enter your sex(m/f): \n");
scanf("%c", &sex);
printf("Enter your salery: \n");
scanf("%f", &sal);

if(sex == 'm'){
    if(sal<10000){
        bon = salmu10(sal);
        printf("Bonus is %.2f \n", bon);
        pay = sal + bon;
        printf("Net pay is %.2f \n", pay);
    }
    else{
        bon = salma10(sal);
        printf("Bonus is %.2f \n", bon);
        pay = sal + bon;
        printf("Net pay is %.2f \n", pay);
    }
}
else{
        if(sal<10000){
        bon = salfu10(sal);
        printf("Bonus is %.2f \n", bon);
        pay = sal + bon;
        printf("Net pay is %.2f \n", pay);
    }
    else{
        bon = salfa10(sal);
        printf("Bonus is %.2f \n", bon);
        pay = sal + bon;
        printf("Net pay is %.2f \n", pay);
    }
}

return 0;
}
