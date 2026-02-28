#include<stdio.h>
int main(){
    // Break -- break out of a loop(stop)
    // continue - skip current cycle of loop (skip)
    for(int i = 1;i<=10;i++){
        if(i==4){
            continue; // skip the num=4 and continue the cycle
           // break; //  stops the loop at num= 4
        }
        printf("%d\n",i);
    }
    return 0 ;
}