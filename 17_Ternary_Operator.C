#include<stdio.h>
//Ternary Operator = shorthand for if else statements
// (condition) ? value_if_true:value_if_false;
int main(){
    
    int x=5;
    int y=6;
    int max = (x > y) ? x:y ;
    printf("%d",max);

    return 0;
}