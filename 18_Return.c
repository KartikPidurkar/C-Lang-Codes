#include<stdio.h>
#include<stdbool.h>
bool agecheck(int age){
    if (age>=18){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int age =4;
    if(agecheck(age)){
        printf("You are allowed");
    }
    else{
        printf("you need to be 18+ to sign this");
    }
    return 0 ;
}
