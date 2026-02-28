#include<stdio.h>
    double cube(double num){
    double result = num*num*num;
    return result;
}
double square(double num){    // need to change the void according to the function
    double result = num*num;
    return result;
}
int main(){
    //  Return = return a value back to where you  call a function

    double x = cube(2);
    double y = cube(3);
    double z = cube(4);

    printf("%.2lf\n",x);
    printf("%.2lf\n",y);
    printf("%.2lf\n",z);


    return 0 ;

}