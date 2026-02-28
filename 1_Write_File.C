#include<stdio.h>
int main(){
    // WRITE A FILE

FILE *pFile = fopen("output.txt","w");

char text[] = "Hi hello this is a write function ";

if(pFile == NULL){
    printf("Error opening file\n");
    return 1;
}
fprintf(pFile , "%s",text);
printf("File was written sucessfully!\n");

fclose(pFile);

    return 0;
}