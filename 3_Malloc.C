#include<stdio.h>
#include<stdlib.h>
//Malloc - a function in C that dynamically allocates a specified number of bytes in memory
int main(){

int number = 0;
printf("Enter the number of grades: ");
scanf("%d",&number);

char *grades=(char*) malloc (number * sizeof(char));

int size = sizeof(grades) / sizeof(grades[0]);

if(grades == NULL){
    printf("Memory allocation failed");
    return 1;
}
for(int i = 0;i<number;i++){
    printf("Enter grade # %d: ",i+1);
    scanf(" %c",&grades[i]);
}

for(int i = 0;i<number;i++){
    printf("%c\n",grades[i]);
}
free(grades); // renturning "rented" space back to the os
grades = NULL; // avoids dangling pointers


    return 0;
}