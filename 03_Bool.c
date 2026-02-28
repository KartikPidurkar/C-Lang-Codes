#include<stdio.h>
#include<stdbool.h>
// Continue some code while the condition remains true for us to enter the  while loop
int main(){
    bool isRunning = true;
    char response = '\0';

    while(isRunning){
        printf("You are playing game\n");
        printf("Would you like to continue (Y == yes or N == no): ");
        scanf(" %c",&response);
        
        if(response != 'Y' && response !='y'){
            isRunning = false;
        }
    }
    printf("You exited the game");
    return 0 ;
}