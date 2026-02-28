#include<stdio.h>
#include<stdbool.h>
// Ternary Operator
int main(){

    //bool isOnline = false;
    //printf("%s",(isOnline)? "online":"offline");

    int number = 10;
    printf("%d is %s",number,(number%2==0)? "Even":"Odd");
    
    int age = 18;
    printf("\n%d is %s",age,(age>18) ? "Eligible":"Not Eligible");

    return 0;
}