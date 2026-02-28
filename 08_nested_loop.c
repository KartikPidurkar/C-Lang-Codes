#include<stdio.h>
int main(){
    int rows = 0;
    int columns = 0;
    char symbol = '\0'; // null terminator

    printf("Enter the amount of rows required:"); // outer loop
    scanf("%d",&rows);
    printf("Enter the amount of colums required:"); // inner loop
    scanf("%d",&columns);
    printf("Enter the symbol to use:");
    scanf(" %c",&symbol);

    
    for(int i =0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf(" %c",symbol);
    }
    printf("\n");
    }

    return 0;

}