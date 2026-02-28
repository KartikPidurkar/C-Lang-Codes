#include<stdio.h>
int main(){
    // implicit conversion
    /*
    int x=5;
    float b=x;
    printf("%f",b);
    */

    // explicit converison
    float a = 5.90;
    int x = (int)a;
    printf("%d",x);



    return 0;
}