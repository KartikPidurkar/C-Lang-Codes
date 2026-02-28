#include<stdio.h>
#include<stdbool.h>
int main(){

    float price = 10.00;
    bool isstudent = true;
    bool issenior = false;
    // student = $9
    // senior = $8
    // student + senior = $7

    if(isstudent){
        if(issenior){
        printf("You get a student discount of 10%% \n"); // use double %% to print 
        printf("you get a senior discount of 20%%\n");  // in output
        price = price*0.7;
    }
        else{
            printf("You get a student discount of 10%%\n");
            price = price*0.9;
        }
    }
    else{
        if(issenior){
        printf("you get a senior discount of 20%\n");
        price = price*0.8;
    }
    }
    
    printf("the price  of a ticket is: $%.2f\n",price);







    return 0;

}