#include <stdio.h> // HEADER File
#include <stdbool.h> // Boolean used for true=1 or false=0
int main(){

    bool isonline = false;  // true = online 
    //printf("%d",isonline);
    if(isonline){
        printf("You are ONLINE");
    }
    else{
        printf("You are OFFLINE\n");
    }
    int age=20;
    float cash =20.5;
    double pi = 3.1451566;
    char currency = '$';
    char name[] = "Kartik";
    printf("%d\n", age );
    printf("%f\n", cash );
    printf("%lf\n", pi );
    printf("%c\n", currency );
    printf("%s\n",  name);







    return 0;
}

// int = whole numbers (4bytes)
// float = single presicion decimal numbers (4 bytes)
// double = double precision decimal numbers (8 bytes)
// char = single character (1 byte)
// char[] = array of characters (size varies)
// bool = true(1)or false(0) (1 byte, requires stdbool.h as header file )

// 35:00  curently stopped at video 