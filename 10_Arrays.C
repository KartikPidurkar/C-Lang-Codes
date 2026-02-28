#include<stdio.h>
// Array- a fixed size collection of elements of the same data type
//        (simliar to a variable but it holds more than one value)
int main(){ 
int numbers[]={10,20,30,40,50};
char grade[]={'a','b','c'};
char name[]= "Lawrence and Rosemary";
/*
numbers[0] = 100; // changes the value of the element at index zero
numbers[1] = 90;
numbers[2] = 80;
numbers[3] = 70;
numbers[4] = 60;
printf("%d\n",numbers[0]);
printf("%d\n",numbers[1]); // indexing to print otherwise it decays to pointer
printf("%d\n",numbers[2]);
printf("%d\n",numbers[3]);
printf("%d\n",numbers[4]);
//printf("%c",grade[0]);
*/
// This can be done using for loops 
for(int i=0;i<50;i++){ 
    printf("%c ",name[i]);
}
    return 0;
}