#include<stdio.h>
#include<stdbool.h>

void hello(char name[],int age); // function Prototype 
bool agecheck(int age);


int main(){
    hello ("spongebob",10);
    if(agecheck(19)){
        printf("you are old enough to work at the krusty krab");
    }
    else{
        printf("You are not old enough to work at the krusty krab");
    }
    return 0;

}
void hello(char name[],int age){
    printf("Hello %s\n",name);
    printf("You are %d years old\n",age);
}
bool agecheck(int age){
    if(age >= 16){
        return true;
    }
    else{
        return false;
    }
}