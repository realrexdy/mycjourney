#include <stdio.h>
#include <math.h>
int main(){
    int a[10];
    int *pA=a;
    printf("Enter the number of elements in the array: ");
    int n;
    scanf("%d", &n);
    printf("Enter the elements: \n");
    for(int i=0; i<n; i++){
        scanf("%d", pA);
        pA++;
    }
    int sum=0;
    pA = a;
    for(int i=0; i<n; i++){
        sum += *pA;
        pA++;
    }
    float mean = sum/n;
    float variance;
    for(int i=0; i<n; i++){
        variance += (*pA-mean)*(*pA-mean);
        pA++;
    }
    float std_dev = sqrt(variance/n);
    printf("The sum of the array elements is %d \n", sum);
    printf("The mean of the array elements is %f \n", mean);
    printf("The standard deviation of the array elements is %f \n", std_dev);
    return 0;
}