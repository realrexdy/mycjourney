#include<stdio.h>

int main(){
    int mat1[20][20], mat2[20][20], mat3[20][20], p, q, m, n;
    printf("\nEnter the number of rows in matrix 1:");
    scanf("%d", &m);
    printf("\nEnter the number of columns in matrix 1:");
    scanf("%d", &n);
    printf("\nEnter the elements of matrix 1:\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("\nEnter the number of rows in matrix 2:");
    scanf("%d", &p);
    if(p!=n){
        printf("Invalid matrix multiplication.");
    }
    else{
        printf("\nEnter the number of columns in matrix 2:");
    scanf("%d", &q);
    printf("\nEnter the elements of matrix 2:\n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            mat3[i][j] = 0;
            for(int k=0; k<n; k++){
                mat3[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            printf("%d\t", mat3[i][j]);
        }
        printf("\n");
    }

    }
    
    return 0;
}