#include<stdio.h>
int main(){
    // WRITE A FILE

FILE *pFile = fopen("output.txt","w");

if(pFile == NULL){
    printf("Error opening file\n");
    return 1;
}

fclose(pFile);

    return 0;
}