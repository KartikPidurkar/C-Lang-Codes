#include<stdio.h>
int main(){ 
int numbers[]={10 ,20 ,30 ,40 ,50 ,60};
char grade[]={'a','b','c','d','e'};
char name[]= "Bro Code ";

//printf("%d\n",sizeof(numbers));
//printf("%d\n",sizeof(numbers[0]));
// To get the numbers elemnts in an array divideb the array storgae bit by single storage bit of array

int size = sizeof(numbers)/sizeof(numbers[0]);
printf("%d\n",size);
// the whole formula can be used or replaced in the for loop size part == sizeof(numbers)/sizeof(numbers[0])
//for(int i=0 ; i<sizeof(numbers)/sizeof(numbers[0]) ; i++)
for(int i=0;i<size;i++){ 
    printf("%d ",numbers[i]);
}

    return 0;
}