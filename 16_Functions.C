#include<stdio.h>
#include<string.h>
// Function =  a reusable  section of code that can be invoked "called "
//             Arguments can be sent  to function  so that it  can  use them .

void happyBirthday(char name[], int age){

    printf("\nHappy Birthday to you");
    printf("\nHappy Birthday to you");
    printf("\nHappy Birthday dear %s", name);
    printf("\nHappy Birthday to you");
    printf("\nyou are %d  yeras old!\n", age);
}
// Functions cannot see inside other functions
int main(){
    int age = 0;
    char name[50] = "";
    
    printf("Enter your name:");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1] = '\0';

    printf("Enter your age:");
    scanf("%d",&age);
    // Calling a function 
    happyBirthday(name,age); // arguments of a function
    
    
    return 0;
}
