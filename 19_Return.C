#include<stdio.h>
int getmax(int x,int y){ // function created and variable declared int 
    if(x>=y){
        return x;
    }
    else{
        return y;
    }
}
int main(){
    int max = getmax(4,8); // function call 
    printf("%d",max);
    return 0 ;

}