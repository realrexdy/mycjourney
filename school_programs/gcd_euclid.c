#include<stdio.h>

int gret(int a, int b){
	return (a>b)?a:b;
	}

int gcd(int a, int b){
if(a<b){
int temp = a;
a = b;
b = temp;
}
if(a%b==0){
return b;}
else{
return gcd(a%b, b);}
}

int main(){
int a,b;
printf("Enter the two numbers:");
scanf("%d", &a);
scanf("%d", &b);
printf("The GCD of the two number is %d\n", gcd(a,b));
return 0;
}
