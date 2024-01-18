#include<stdio.h>

int binser(int a[], int key, int left, int right){
    int mid = left + ((right-left)/2);
    if(a[mid]==key){
        return mid;
    }
    else if(a[mid]<key){
        return binser(a, key, mid+1, right);
    }
    else if(a[mid]>key){
        return binser(a, key, left, mid-1);
    }
    else{
        return -69;
    }
}

int main(){
    int a[1000], key, left=0, right;
    printf("Enter the number of elements in the array:");
    scanf("%d", &right);
    printf("\nEnter the elements of the array:\n");
    for(int i=0; i<right; i++){
        scanf("%d", &a[i]);
    }
    printf("\nEnter the key element:");
    scanf("%d", &key);
    int keyind=binser(a, key, left, right);
    (keyind==-69)?printf("Key element not found in the array."):printf("\nThe key element is found at %dth position.\n", keyind+1);
    return 0;
}