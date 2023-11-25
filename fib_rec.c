#include <stdio.h>

int fib(int x){
if(x==0){return 0;}
else if(x==1){return 1;}
else{return fib(x-1)+fib(x-2);}
}

int main(){
int n;
printf("Enter the number of series: \n");
scanf("%d",&n);
printf("The Fibonacchi Series is\n");
for(int i=2; i<n; i++ ){
printf("%d\n",fib(i));
}
return 0;
}
