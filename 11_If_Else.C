#include<stdio.h>
#include<string.h>
int main(){
    char name[50] = ""; // array of chracters 
    printf("Enter your name:");
    fgets(name,sizeof(name),stdin); // for array of characters
    name[strlen(name)-1] = '\0';  // Null Terminator
    if(strlen(name)==0){
        printf("you did not enterred your name");
    }
    else{
        printf("Hello %s",name);
    }
    
    return 0 ;
}