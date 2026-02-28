#include<stdio.h>
int main(){

    //  Loop inside a loop = nested loop
    
    for(int i=1; i<=10 ; i++ ){
        for(int j=1 ; j<=10 ; j++ ){
        printf("%4d",i*j);
    }
    printf("\n");
    }

    return 0 ;
}