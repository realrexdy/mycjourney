#include <stdio.h>


int main(){
    int array1[20][20], array2[20][20], array3[20][20];
    int m,n,p,q;
    printf("\nNumber of rows in first matrix: ");
    scanf("%d", &m);
    printf("\nNumber of columns in first matrix: ");
    scanf("%d", &n);
    printf("\nNumber of rows in second matrix: ");
    scanf("%d", &p);
    if(n!=p){
        printf("Invalid matrix multiplication");
    }
    else{
        printf("\nNumber of columns in second matrix: ");
    scanf("%d", &q);
    printf("\nEnter the elements of the first array:");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf(
                "%d", &array1[i][j]
            );
        }   
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            printf(
                "%d\t", array1[i][j]
            );
        }   
        printf("\n");
    }
    }
    printf("\nEnter the elements of the second array:");
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            scanf(
                "%d", &array2[i][j]
            );
        }   
    }
    for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            printf(
                "%d\t", array2[i][j]
            );
        }   
        printf("\n");
    }
    
    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            array3[i][j]=0;
            for(int k=0; k<n; k++){
                array3[i][j]+=array1[i][k]*array2[k][j];
            }
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            printf(
                "%d\t", array3[i][j]
            );
        }   
        printf("\n");
    }
    
    return 0;
}