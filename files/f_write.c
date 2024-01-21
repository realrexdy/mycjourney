#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fle = fopen("/home/tcs/pf/mycjourney/files/file.txt", "w+");
    char str[25] = "hello I am not homophobic";
    if(fle == NULL){
        printf("File not found.");
        exit(0);
    }
    else{
        fprintf(fle, "%d", 69);
        fputc('x', fle);
        fputs("420", fle);
        fwrite(str, 5,2,fle);
    }
    fclose(fle);
    return 0;
}