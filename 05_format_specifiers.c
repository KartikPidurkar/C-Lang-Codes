//Format specifier = special token that begin with a %symbol followed by a character that specifies the data type
// and optional modifiers(width , precision,flags) they control how data  is displayed or interpreted .

#include<stdio.h>
int main(){
    // width 
    int num1=10;
    int num2=100;
    int num3=1000;

    printf("%d",num1);   // add digits(12 etc) , +,-, 0, to incr the spaces 
    printf("%d",num2);   // before or after the values 
    printf("%d",num3);   // add before the  %(add here)d

    // precision 
    // the default setting in vs code only allows 6 digits after decimal to change this in flaoting point variable
    // do this %.(digits)f   %.4f(adds the decimal values upto 4 )
    return 0 ;
}