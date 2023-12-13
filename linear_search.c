#include <stdio.h>

int linser(int a[],int n, int key);

int main(){
    int a[50];
    int n, key, ind;
    printf("Enter the number of elements in the array.\n");
    scanf("%d", &n);
    printf("Enter the array elements.\n");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the key element.\n");
    scanf("%d", &key);
    ind = linser(a, n, key);
    printf("The key element %d is found to be at %d.", key, ind+1);
}

int linser(int a[],int n, int key){
    int keyind, found=0;
    int i=0;
    for(i=0; i<n; i++){
        if(key == a[i]){
            keyind = i;
            found = 1;
            break;
        }
    }
    return i;
}
