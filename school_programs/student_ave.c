#include <stdio.h>

typedef struct{
    char name[20];
    char usn[10];
    float marks;
} STU;

int main(){
    printf("Enter the number of students: ");
    int n;
    scanf("%d", &n);
    printf("Enter the details of the studnet: ");
    STU s[100];
    for(int i=0; i<n; i++){
        printf("Name of Student %d:\n", i+1);
        scanf("%s", s[i].name);
        printf("USN of Student %d:\n", i+1);
        scanf("%s", s[i].usn);
        printf("Marks of Student %d:\n", i+1);
        scanf("%f", &s[i].marks);
        printf("\n");
    }
    printf("\nDetails of the students: \n");
    for(int i=0; i<n; i++){
        printf("Name of Student %s:\n", s[i].name);
        printf("USN of Student %s\n", s[i].usn);
        printf("Marks of Student %f:\n", s[i].marks);
        printf("\n");
    }
    float sum=0;
    for(int i=0; i<n; i++){
        sum += s[i].marks;
    }
    float mean = sum/n;
    int abvav=0, belav=0;
    for(int i=0; i<n; i++){
        if(s[i].marks>mean){
            abvav++;
        }
        else{
            belav++;
        }
    }
    printf("\nThe number of students above average is %d\n", abvav);
    printf("\nThe number of students below average is %d\n", belav);
    printf("\n\n The students who scored above average: ");
    for(int i=0; i<n; i++){
        if(s[i].marks>mean){
            printf("%s,  ", s[i].name);
        }
    }
    printf("\n\n The students who scored below average: ");
    for(int i=0; i<n; i++){
        if(s[i].marks<mean){
            printf("%s,  ", s[i].name);
        }
    }
    return 0;
}