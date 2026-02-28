#include<stdio.h>

 typedef enum  {SUNDAY = 1,MONDAY = 2,TUESDAY = 3,WEDNESDAY = 4,THURSDAY = 5,FRIDAY = 6,SATURDAY = 7
}Day;
// enum = a user defined datatype that consists of set of named integer constants.
// Benefit: Repalces numbers with redabale names

int main(){

     Day today =SUNDAY;
    
    if(today == SUNDAY || today == SATURDAY){
        printf("its a weekend");
    }
    else{
        printf("Its a weekday");
    }
    return 0;
}