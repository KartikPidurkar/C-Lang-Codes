#include<stdio.h> 
// C doesn't automatically clear memory from programs that used that memory previously
int main(){
    int scores[5]={0};

    for(int i=0;i<5;i++){
        printf("Enter a Score:");
        scanf("%d",&scores[i]);
    }
    for(int i=0;i<5;i++){
        printf(" %d ",scores[i]);
    }
    return 0;
}