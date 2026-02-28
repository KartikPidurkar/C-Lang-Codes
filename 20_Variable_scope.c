#include<stdio.h>
int add(int x,int y){
    int result = x+y;
    return result;
}
int sub(int x,int y){
    int result = x-y;
    return result;
}
int main(){
    // variable scope = refers  to where a variable  is recognized and accessible.
    // variable can  share  the same name if 
    //  they are in diffrent scopes{}
    int result = add(3,4);   // passsing an argument is important in function
    printf("%d",result);


    return 0 ;
}