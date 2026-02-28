#include<stdio.h>
#include<string.h>

int main(){
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0'; // null terminator  use a front slash
    char name[50] = "";//zero given so the program doesn't print any undefined values if run without input values

    printf("Enter your age:");
    scanf("%d",&age); // &- address of a variable and to store the value
    printf("Enter your gpa:");
    scanf("%f",&gpa);

    printf("Enter your grade:");
    scanf(" %c",&grade);   //  to clear the character buffer or use getchar(); function

    getchar();
    printf("Enter your name:");//scanf stops after encountring a blank space to resolve this issue use 
    fgets(name,sizeof(name),stdin);         //fgets(name,sizeof(name),stdin)
     name[strlen(name) - 1]='\0';
    //scanf won't save the full array of  character with blank spaces 

    printf("%d\n",age);
    printf("%f\n",gpa);
    printf("%c\n",grade);  // Blank space matters dont give it int the output function 
    printf("%s\n",name);
    
    return 0 ;
}