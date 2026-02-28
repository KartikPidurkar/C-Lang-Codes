#include<stdio.h>
void birthday(int* age);
// Pointer = a variable that stores the memory address of another variable
//           benefit: They help avoid wasting memory by allowing  you to pass 
//           the address of large data structure instead of copying the entire data.
int main(){

    int age = 25;
    int *pAge = &age;
    // * - derefrence operator
    birthday(pAge);
    printf("you are %d years old",age);

    return 0;
}
void birthday(int* age){
     (*age)++;

    // happening right now is pass by value
    // we need pass by refrence 
}